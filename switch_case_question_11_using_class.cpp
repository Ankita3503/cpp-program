/*  wap to take  the value from the user as input electricity unit charges and calculate total 
   bill according to the given condition :  
    for the first 50 unit rs. 0.50/unit...
    for the next 100 units rs 0.75/unit ...
    for the next 100 units rs 1.20/unit....
    for above 250 rs  1.50/unit....
    an additional subcharge of 20% is added to the bill ...using the switch statement. */


    #include<iostream>
    using namespace std;
    class electricity
    { int t;
      public:
      int  take_unit()
      {
          cout<<"enter the unit ";
          cin>>t;
              return t;
      }
    };
    int main()
    {
        int total,total_unit;
       electricity ob;
        int res=ob.take_unit();

        switch(res<=50)
        {
            case 1:
            total=(res*0.50);
            total_unit=total+((20*total)/100);
            cout<<"total electricity  bill= "<<total_unit;
            break;
            case 0:
            switch(res<=150)
            {
                case 1:
                total=((res-50)*0.75) +25;
                total_unit=total +((20*total)/100);
                 cout<<"total electricity  bill= "<<total_unit;
                  break;
                  case 0:
                  switch(res<=250)
                   {
                      case 1:
                      total=((res-150)*1.20) +100;
                      total_unit=total +((20*total)/100);
                     cout<<"total electricity  bill= "<<total_unit;
                      break;
                      case 0:
                       switch(res>250)
                    { 
                      case 1:
                      total=((res-250)*1.50) +220;
                      total_unit=total +((20*total)/100);
                     cout<<"total electricity  bill= "<<total_unit;
                      break;
                    }
            }   }   
        } 
        return 0;
    }