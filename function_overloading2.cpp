/* same no. of arguments */
/*#include<iostream>
using namespace std;
void sum(int ,int );
void sum(int ,int,int);
void sum(int a,int b)
{
    cout<<"sum= "<<a+b<<"\n";
}
void sum(int x,int y,int z)
{
    cout<<"sum= "<<x+y+z;
}
int main()
{
  sum(2,7); //this function calls the function with two arguments
  sum(4,5,8);//this function calls the function with three arguments
  return 0;
}*/

//lets do some experiment

/*#include<iostream>
#include<iomanip>
using namespace std;
void sum(float,float );
void sum(int ,int,int);
void sum(float a,float b)
{
    cout<<"sum= "<<fixed<<setprecision(6)<<a+b<<"\n";
}
void sum(int x,int y,int z)
{
    cout<<"sum= "<<x+y+z;
}
int main()
{
  sum(2.89,7.670); //this function calls the function with two arguments
  sum(4,5,8);//this function calls the function with three arguments
  return 0;
}
*/
// another experiment
/*#include<iostream>
#include<iomanip>
using namespace std;
void sum(double);
void sum(int);
void sum(double a)
{
    cout<<"value of a= "<<fixed<<setprecision(6)<<a<<"\n";
}
void sum(int x)
{
    cout<<"value of x= "<<x;
}
int main()
{
  sum(2.8897);    // error: call of overloaded 'sum(double)' is ambiguous
                // so during overloading of function float value is not used instead of that double is used
  sum(4);
  return 0;
}
*/

//another experiment 
/*#include<iostream>
#include<iomanip>
using namespace std;
void sum(double);
void sum(int);
void sum(double a)
{
    cout<<"value of a= "<<fixed<<setprecision(6)<<a<<"\n";
}
void sum(int x)
{
    cout<<"value of x= "<<x;
}
int main()
{
  sum(23);   // output : value of x= 23
  return 0;
}*/

// another experiment
/*#include<iostream>
#include<iomanip>
using namespace std;
void sum(char);
void sum(int);
void sum( const char *a)   // so if we want to print char we should take contant character
{
    cout<<"value of a= "<<fixed<<setprecision(6)<<a<<"\n";
}
void sum(int x)
{
    cout<<"value of x= "<<x;
}
int main()
{
  sum("ankita kumari");   // error: error: invalid conversion from 'const char*' to 'char' 
  return 0;
}*/

// another experiment

/*#include<iostream>
#include<iomanip>
using namespace std;
void sum(int );
void sum(int,int);
void sum(int a)   
{
    cout<<"value of a= "<<fixed<<setprecision(6)<<a<<"\n";
}
void sum(int x,int y=9)
{
    cout<<"value of x= "<<x<<"and value of y= "<<y<<endl;
}
int main()
{
  sum(2);     //error: call of overloaded 'sum(int)' is ambiguous
              //this function confuses which function to call
  sum(6,8);
  return 0;
}   */

// another experiment
/*#include<iostream>
#include<iomanip>
using namespace std;
void sum(int );
void sum(int &);
void sum(int a)   
{
    cout<<"value of a= "<<fixed<<setprecision(6)<<a<<"\n";
}
void sum(int *x)
{
    cout<<"value of x= "<<x<<endl;
}
int main()
{ int y=90;
   int *p=&y;
  sum(&p);     // error: invalid conversion from 'int**' to 'int' 
  return 0;
}   */

// another experiment

#include<iostream>
#include<iomanip>
using namespace std;
void sum(int );
void sum(int & );
void sum(int a)   
{
    cout<<"value of a= "<<fixed<<setprecision(6)<<a<<"\n";
}
void sum(int *x)
{
    cout<<"value of x= "<<x<<endl;
}
int main()
{ 
   int y=90;
   int *p=&y;
   sum(&p);    
   return 0;
}
