/*  wap to take value from user as input the basic salary of an employee and calculate its gross salary 
  according to the following : basic salary<=10000 ; HRA=20% ,DA=80%.......
  basic salary<=20000 ; HRA=25% ,DA=90%......
  basic salary >20000 ; HRA=30% ,DA=95%.       */
  

  #include<iostream>
  using namespace std;
  class salary
  {
     public:
     int sal;
     int  input()
     {
         cout<<"Enter your salary";
         cin>>sal;
         return sal;
     }
  };
  int main()
  {
      int d,h,total;
      salary ob;
     int y=ob.input();
     switch(y<=10000)
     {
         case 1:
        h=(20*y)/100;
         d=(80*y)/100;
         total= y+h+d;
         cout<<"gross salary ="<<total<<"\n";
             break;
             case 0:
             switch(y<=20000)
            {
                 case 1:
                 h=(25*y)/100;
                     d=(90*y)/100;
                 total= y+h+d;
                    cout<<"gross salary ="<<total<<"\n";
             break; 
             case 0:
             switch(y>20000)
               {
                 case 1:
                  h=(30*y)/100;
                     d=(95*y)/100;
                 total= y+h+d;
                    cout<<"gross salary ="<<total<<"\n";
                    break;
                }
            }   
     }
     return 0;
  }


   