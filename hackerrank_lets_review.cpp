#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
   // string s1;
    
     cin>>n;
     for(int x=0;x<n;x++)
     {
         string s1;
     
         cin>>s1;
     
     
     for(int i=0;i<s1.length();i++)
     {
     if(i%2==0)
     {
         cout<<s1[i];
     }
     }
     cout<<" ";
     for(int i=0;i<s1.length();i++)
     {
     if(i%2!=0) {
     cout<<s1[i];
     }
     }
     cout<<"\n";
     }
     
    return 0;
}
