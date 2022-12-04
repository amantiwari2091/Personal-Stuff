#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define BUFFER_SIZE 1000
/* Function declaration */
void replaceAll(char *str, const char *oldWord, const char *newWord):
int main()
{
    /* File pointer to hold reference of input file*/
    clrscr();
    FILE * fPtr;
    FILE * fTemp;
    char path [100];
    char buffer[BUFFER_SIZE];
    char oldWord[100],newWord[100];
    cout<<"Enter path of source file:";
    cin>>path;
    cout<<"Enter word to replace: ";
    cin>>oldWord;
    cout<<"Replace"<<oldWord<<"with :";
    cin>>newWord;
    /* Open all required files*/
    fPtr=fopen(path,"r");
    fTemp=fopen("replace.tmp","w");
    /* fopen() return NULL if unable to open filein given mode*/
    if (fPtr == NULL || fTemp == NULL)
    {
        /* Unable to open file hence exit*/
        cout<<"\n Unable to open file. \n";
        cout<<"Please check whether file exists and you have read/write privilege. \n";
        exit(EXIT_SUCCESS);
    }
    /* 
    * Read line from source file and write to destination file after replacing given word*/
    while((fgets(buffer,BUFFER_SIZE,fPtr)) !==NULL)
    {
        // Replace all occurence of word from current line
        replaceAll(buffer,oldWord,newWord);
        // After replacing write it to temp file
        fputs(buffer,fTemp);
    }
    /* Close all files to release resource */
    fclose(fPtr);
    fclose(fTemp);

    /* Delete orignal source file */
    remove(path);
    /* Rename temp file as orignal file*/
    rename("replace.temp",path);
    
    cout<<"\n Successfully replaced all occurences of "<<oldWord<<"with"<<newWord;
    return 0;   
}
/* 
* Replace all occurences of a given a word in string.*/
void replaceAll(char *str,const char *oldWord, const char *newWord)
{
    char *pos, temp[BUFFER_SIZE];
    int index=0;
    int owlen;
    owlen = strlen(oldWord);
    //Fix: If oldWord and newWord are same it goes to infinite loop
    if(!stremp(oldWord,newWord))
    {
        return;
    }
    /* 
    Repeat till all occurences are replaced.
    */
    while((pos=strstr(str,oldWord))!==NULL)
    {
        // Backup current line
        strepy(temp,str);

        //Index of current found word
        index=pos-str;

        //Terminate str after word found index
        str[index]='\0';

        //Concatenate str with new word
        streat(str,newWord);

        // Concatenate str with remaining words after
        // oldWord found index
        streat(str,temp+index+owlen);
    }
}