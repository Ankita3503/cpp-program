using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
         if(initialAge>0)
         {
              age=initialAge;
         }
         else
         {

         
              
                   
             cout<<"Age is not valid, setting age to 0\n";
            age=0;
               
         } 
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
       if(age<13)
        {
             cout<<"you are young.\n";
             
             
        }
          else if(age>=13 && age<18)
        {
            cout<<"you are teenager.\n";
        }
        else 
        {
            cout<<"you are old.\n";
        
        }
    }

    void Person::yearPasses()
    {
        // Increment the age of the person in here
          
       
           age=age+1;;
           
       
       
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}