#include<iostream>
using namespace std;
int main()
{
    char name[]="ankita";
    char *x;
    x=name;
    while(*x !='\0')
    {
        cout<< *x;   
        x++;  
    }
    return 0;
}
