    /* wap to count the total number of notes in a given amount using switch statement*/
    
    
#include<iostream>
#include<math.h>
using namespace std;
class count_notes
{
   public:
   int note;
   int  count()
   {
       cout<<"enter the amount ";
       cin>>note;
       return note;
   }
};
int main()
{
    int note1=0,note2=0,note3=0,note4=0,note5=0,note6=0,note7=0,note8=0;
    count_notes ob;
    int  y =ob.count();
     switch(y>=2000)
     {
         case 1:
         note1=y/2000;
         y=y-(note1*2000);
         case 0:
         switch(y>=500)
         {
             case 1:
             note2=y/500;
             y=y-(note2*500);
             case 0:
             switch(y>=200)
             {
             case 1:
             note3=y/200;
             y=y-(note3*200);
             case 0:
             switch(y>100)
             {
                 case 1:
                 note4=y/100;
                 y=y-(note4*100);
                 case 0:
                 switch(y>=50)
                 {
                     case 1:
                     note5=y/50;
                     y=y-(note5*50);
                     case 0:
                     switch(y>=20)
                     {
                         case 1:
                         note6=y/20;
                         y=y-(note6*20);
                         case 0:
                         switch(y>=10)
                         {
                             case 1:
                             note7=y/10;
                             y=y-(note7*10);
                             case 0:
                             switch(y>=5)
                             {
                                 case 1:
                                 note8=y/5;
                                 y=y-(note8*5);
                             }

                         }
                     }
                 }
             }
        }
    }
}  
     cout<<"2000 note="<<note1<<"\n";
     cout<<"500 note="<<note2<<"\n";
     cout<<"200 note="<<note3<<"\n";
     cout<<"100 note="<<note4<<"\n";
     cout<<"50 note="<<note5<<"\n";
     cout<<"20 note="<<note6<<"\n";
     cout<<"10 note="<<note7<<"\n";
     cout<<"5 note="<<note8;
     return 0;
}