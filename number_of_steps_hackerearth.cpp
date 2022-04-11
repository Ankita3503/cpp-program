#include<bits/stdc++.h>
using namespace std;
int printSteps(int arr1[], int arr2[], int n, int cnt, int min)
{                                                         //function  to calculate the counting 

for(int i=0;i<n;i++){             // Loop to iterate in n times

while(arr1[i]>min){             // To check if  any element is greater than minimum element

arr1[i]-=arr2[i];                  // if greater element fount then perform this operation  arr1[i]=arr1[i]-arr2[i]

cnt++;                              // count how many time you did above operation 

}

if(arr1[i]<min){               // after performing above operation check if you arr[i] is less than minimum or not

min=arr1[i];                  // if found less, update minimum value

i=-1;                            // to start iteration from beginning set i=-1

}

else if(arr1[i]<0)return -1;        // if your a[i] < 0 then return then present is not required so return -1

}

for(int i=0;i<n-1;i++){                // iterate till (n-1) to check whether all elements of arr1 are equal

if(arr1[i]^arr1[i+1])return -1;     // in this line i used XOR you can use assignment operator too to check if previous element is equal to next element. if any element found not equal                                                   return -1

}

return cnt;              // this return is outside for loop and will be executed if all element are found equal

}

 

int main(){               //-------------------------------------------execution starts from here--------------------------------------------------

int n,min=10000,cnt=0;

cin>>n;

int arr1[n],arr2[n];         //declare two array of size n;

for(int i=0;i<n;i++){               //take input for arr1

cin>>arr1[i];

if(min<arr1[i])min=arr1[i];      // find minimum element in arr1

}

for(int i=0;i<n;i++)cin>>arr2[i];      //take input for arr2

cout<<printSteps(arr1,arr2,n,cnt,min);     //call the function

}
