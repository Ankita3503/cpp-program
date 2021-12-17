#include<iostream>
#include<math.h>
using namespace std;
class maximum
{
    public:
    int x,y;
      int bada_number()
      {
          cout<<"enter any number";
          cin>>x>>y;
      //   return(max(x,y));
      if(x>y)
      {
          return 0;
      }
      else
      {
          return 1;
      }
      }
};
 int main()
{
   maximum obj;
   int  ans=obj.bada_number();
   //cout<<"answer is"<<ans;
    switch(ans)
    { 
        case 0:

            cout<<"x is greater";
            break;
        case 1:
            cout<<"y is greater";
      break;

    }
    return 0;
}