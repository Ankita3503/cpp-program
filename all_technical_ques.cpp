/* leap year */
/*#include<iostream>
using namespace std;
int main()
{
    int year;
   cout<<"Enter the year to check whether it is leap or not\n" ;
   cin>>year;
   /*logic change*/
  /* if(year%4==0&&year%100==0||year%400==0)
   cout<<"Leap year";
   else
   cout<<"Not a leap year";
   /*if(year%4==0)
   {
       if(year%100)
       {
           if(year%400)
           {
            cout<<"Leap year";
           }
           else
        cout<<"Not a leap year";   
       }
       else
       cout<<"Leap year";
   }
   else
   cout<<"Not a leap year";*/
 //  return 0;
//}

/* Prime No.*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i;
    cout<<"Enter any no. to check prime or not";
    cin>>n;
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
        count++;
    }
    }
    if(count==0)
    {
        cout<<"Prime number";
    }
    else
    cout<<" Not a prime number";
    return 0;
}*/


/* Reverse a number  */
/*#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r;
    cout<<"Enter any number to reverse";
    cin>>n;
    while(n>0)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10; 
    }
    cout<<"Reverse number is "<<sum;
return 0;
} */


/* Armstrong number */
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,r,l=0,t;
    cout<<"Enter any number to check whether it is armstrong no. or not";
    cin>>n;
    t=n;
    while(n>0)
    {
       
       l++;
       n=n/10;
    }
    while(n>0)
    {
       r=n%10;
       sum=sum+pow(r,l);
       n=n/10; 
    }
    cout<<"sum"<<sum;
    if(t==sum)
    {
        cout<<"Armstrong number";
    }
    else
    cout<<"Not a armstrong number";
 return 0;
}    */


/* Nested loop  */
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"Enter  no. to start a table and also end number";
    cin>>a>>b;
    for(j=a;j<=b;j++)
    {
    for(i=1;i<=10;i++)
    {
      cout<<j <<"x"<< i<< "="<< j*i<<"\n";
    }
    cout<<"\n";
    }
    return 0;
}
*/

/* Print prime number between given number to given number */
/*#include<iostream>

using namespace std;
int main()
{
    int num,t,count=0,i;
   
    for(num=1;num<=10;num++)
    {
        t=num;
    for(i=2;i<num;i++)
    {
      if(num%i==0)
      {
          count++;
          break;
      }
    }
    num=t;
    }
    if(count==0)
    {
        cout<<t<<"\n";
    }
    return 0;
}  */


/* array */
/* find maximum element in a array*/
/*#include<iostream>
using namespace std;
int main()
{
    int a[5],i,max;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
    if(max<a[i])
    {
        max=a[i];
    }
    }
    cout<<"Max element is \n"<<max;
    return 0;
}*/

/* linear search  */
/*#include<iostream>
using namespace std;
int main()
{
    int a[5],i,item;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"  Enter the search item ";
    cin>>item;
    for(i=0;i<5;i++)
    {
    if(item==a[i])
    {
      cout<<" Search element is found at index "<<i+1; 
      break; 
    }
    }
    if(i==5)
    {
        cout<<"Not found";
    }
   
    return 0;
}
*/
/* Binary search */
/*#include<iostream>
using namespace std;
int main()
{
    int a[5],i,item;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
   int beg=0 ,end=4,mid=(beg+end)/2;
   cout<<" search item ";
   cin>>item;
  while(beg<=end)
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            cout<<"Element found";
            break;
        }
      if(item<a[mid])
       {
          end=mid-1;
       }
        else
        {
         beg=mid+1;
         }
    }
    if(beg>end)
    {
      cout<<"Not found";
    }
    return 0;
 
} 
*/


/* bubble sort  */
#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(j=0;j<5;j++)
    {
    cout<<a[j];
    }
    return 0;
}
