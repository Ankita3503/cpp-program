/*print the ascii value of any character */
/*#include<iostream>
using namespace std;
int main()
{
 int a='A';//char a='k';
 cout<<a;   //cout<<int(a);
 return 0;    
} */

/*PRINT ascii value of all character*/
#include<iostream>
using namespace std;
int main()
{
 int i;
 for(i='A';i<='Z';i++)
  {                      
 cout<<char(i)<<"\t"<<i<<"\n";
 }                
 return 0;    
}