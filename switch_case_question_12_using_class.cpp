/* wap to take the hours and minutes as input by the user and show that whether it is AM or PM by using the switch statement */

#include<iostream>
using namespace std;
class time
{
  public:
  int hour,min;
   int take_time()
  {
     cout<<"enter the time in hour and min in 24 hour format";
     cin>>hour>>min;
     return hour;
  }
};
int main()
{
    time ob;
    int h= ob.take_time();
    switch(h>=12&&h<=24)
    {
        case 1:
        cout<<"time is in PM";
        break;
        case 0:
        switch(h>=0&&h<=11)
        {
            case 1:
            cout<<"time is in AM";
            break;
        }
    }
 return 0;
}