#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int amount,note1,note2,note3,note4,note5,note6,note7,note8,note9;
    cout<<"enter the amount\n ";
    cin>>amount;
     
    if(amount>=2000)
    {
    note1=amount/2000;
    amount= amount-(note1*2000);
    }
    
    if(amount>=500)
    {
    note2=amount/500;
    amount= amount-(note2*500);
    }
   
    
    if(amount>=200)
    {
    note3=amount/200;
       amount= amount-(note3*200);
    }
     
    
    if(amount>=100)
    {
    note4=amount/100;
       amount=amount-(note4*100);
    }
     
   
    if(amount>=50)
    {
    note5=amount/50;
   amount=amount-(note5*50);
    }
     
      
     if(amount>=20)
    {
    note6= amount/20;
      amount=amount-(note6*20);
    }
     
      
if(amount>=10)
    {
    note7=amount/10;
     amount= amount-(note7*10);
    }
    
     if(amount>=5)
    {
    note8=amount/5;
       amount= amount-(note8*5);
    }
    
      if(amount>=2)
    {
    note9=amount/2;
   amount= amount-(note9*2);
    }
    
    cout<<" 2000="<<note1<<"\n";
    cout<<" 500="<<note2<<"\n";
    cout<<" 200="<<note3<<"\n";
    cout<<" 100="<<note4<<"\n";
    cout<<" 50="<<note5<<"\n";
    cout<<" 20="<<note6<<"\n";
    cout<<" 10="<<note7<<"\n";
    cout<<" 5="<<note8<<"\n";
      cout<<" 2="<<note9<<"\n";
      cout<<"1="<<amount;
      
      
    
     //cout<<" 2="<<note9<<"\t"<<"left amount"<<amount<<"\n";
      
     /* if(amount>=1)
    {
   
 cout<<" 1="<<note<<"\n";
    }*/
    return 0;
}
