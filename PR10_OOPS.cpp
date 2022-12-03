#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define BUFFER_SIZE 1000
/* Function declaration */
void replaceAll(char *str, const char *oldword, const char *newWord):
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
    fPtr=fOpen(path,"r");
    fTemp=fOpen("replace.tmp","w");
    /* fopen() return NULL if unable to open filein given mode*/
    if (fPtr = NULL || fTemp = NULL)
    {
        /* Unable to open file hence exit*/
        cout<<"\n Unable to open file. \n";
        cout<<"Please check whether file exists and you have read/write privilege. \n";
        exit(EXIT_SUCCESS);
    }


    
}