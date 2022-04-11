#include<iostream>

using namespace std;


 

int main(){

int N,rem,sum_odd=0,sum_even=0;

cin>>N;


 

int A[N];


 

for(int i=0;i<N;i++)

cin>>A[i];


 

int M=N/2;


 

for(int i=0;i<M;i++)

{

while(A[i]!=0)

{

rem=A[i]%10;

A[i]/=10;

}

A[i]=rem;

}


 

for(int i=M;i<N;i++)

{

rem=A[i]%10;

A[i]=rem;

}


 

for(int i=0;i<N/2;i++)

{

sum_odd+=A[2*i];

sum_even+=A[2*i+1];

}


 

int n=sum_odd-sum_even;


 

if(n%11==0)

cout<<"OUI";

else

cout<<"NON";

}
