/* using switch statement  wap to input marks of five marks of five subjects 
physics,chemistry ,biology,mathematics and computer science . calculate percentage and grade according to following
percent>=90%: grade A
percent>=80%: grade b
percent>=70%: grade c
percent>=60%: grade d
percent>=50%: grade e
percent<40%: grade f     */


#include<iostream>
using namespace std;
class grade
{
    int a,b,c,d,e,sum,marks;
   public:
   void get()
   {
       cout<<"enter the marks of the following subjects out of 100:-\n";
       cout<<"physics-\n ";
       cin>>a;
        cout<<"chemistry-\n ";
       cin>>b;
       cout<<"biology-\n ";
       cin>>c;
       cout<<"mathematics-\n ";
       cin>>d;
       cout<<"computer science-\n ";
       cin>>e;
   }
    int cal()
    {
        sum=a+b+c+d+e;
        marks=(sum*100)/500;
        return marks;
    }
};
int main()
{
    grade object;
    object.get();
     int res=object.cal();
     switch(res>=90&&res<100)
     {
         case 1:
         cout<<" A !!! ";
         break;
         case 0:
         switch(res>=80&&res<89)
         {
             case 1:
             cout<<" B !!!!";
             break;
             case 0:
             switch(res>=70&&res<79)
             {
                 case 1:
                 cout<<" C !!!! ";
                 break;
                 case 0:
                 switch(res>=60&&res<69)
                 {
                     case 1:
                     cout<<" D !!!!";
                     break;
                     case 0:
                     switch(res>=50&&res<59)
                     {
                         case 1:
                         cout<<" E !!!!";
                         break;
                         case 0:
                         switch(res<=40)
                         {
                             case 1:
                             cout<<" Fail ";
                             break;
                             
                         }
                     }
                 }
             }
         }
     }
     return 0;
}
