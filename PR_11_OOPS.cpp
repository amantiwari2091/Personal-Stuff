// Aman Brijbhushan Tiwari Roll No. 21 CSE (Cyber Security) PR_11_OOPS
#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
    int a,b;
    cout<<"Enter Value of 1st no.";
    cin>>a;
    cout<<"Enter Value of 2nd no.";
    cin>>b;
    cout<<"Before swapping\n Value of 1st no. is"<<a<<"\n Value of 2nd no. is"<<b;
    swap(a,b);
    cout<<"\n Outside function after swapping \n Value of 1st no.is"<<a<<"\n Value of 2nd no is"<<b;
}
void swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"\nInside function after swapping\n Value of 1st no.is"<<a<<"\n Value of 2nd no. is"<<b;
}
