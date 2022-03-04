#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1;
    cout<<"enter the string \n";
    getline(cin,s1);
    string s2=s1;
    for(int i=0;i<s1.length()/2;i++)
    {
        char t=s1[i];
        s1[i]=s1[s1.length()-i-1];
        s1[s1.length()-i-1]=s1[i];
    }
    if(s2==s1)
    {
        cout<<"string is palindrome \n";
    }
    else
    {
        cout<<"string is not palindrome \n";
    }
    return 0;
}
