#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
long long int p;
p=1;
for(int i=0;i<n;i++)
{
p=(p*a[i])%(1000000007);
}
cout<<p;
return 0;
}
