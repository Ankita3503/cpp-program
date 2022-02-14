
 // 1 rupee-1 chocolate
 // 3 wrapper - 1 chocolate
 //find maximum chocolate in 20 rupees


/*#include<iostream>
using namespace std;
int main()
{
    int size,min,t;
    cout<<" total  number of rupees available = 20\n";
     int  no_of_wrappers=20/3;
  int  total_no_of_chocolate =no_of_wrappers/3;
 cout<< total_no_of_chocolate +20 ;
    return 0;
} */

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<" total  number of rupees available = \t";
    cin>>r;

     int  no_of_wrappers=r/3;
   int  total_no_of_chocolate =no_of_wrappers/3;
   cout<<"maximum number of chocolate =  ";
   cout<< total_no_of_chocolate +r;
    return 0;
}