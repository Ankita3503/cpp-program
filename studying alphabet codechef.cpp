# include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--)
    {
     string s1;
     cin>>s1;
     int count=0;
     for(int i=0;i<s.length();i++)
     {
         for(int j=0;j<s1.length();j++)
         {
             if(s[i]==s1[j])
             {
             count++;
         }
     }
    }
    if(count==s1.length())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}

	return 0;
}
