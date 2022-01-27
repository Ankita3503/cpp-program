   // 1. ++ operators (unary operator) overloading

  // overload ++ (Operator) when used as prefix

/* #include<iostream>
using namespace std;
class count
{
    int value;
   public:
   count():value(0)   //constructor to initialize value
   {}
   void operator++()   // overload ++ when used as prefix
   {
       ++value;
   }
   void display()
   {
       cout<<"count= "<<value<<endl;
   }
};
int main()
{
    count obj;
    ++obj;  // call the " void operator++()" function
    obj.display();
    return 0;
} 
// output: count= 1   */


// another way 
/* #include<iostream>
using namespace std;
class count
{
    int value;
   public:
   count() // another way of constructor to initialize value
   {
       value=5;
   }
   void operator++()   // overload ++ when used as prefix
   {
       ++value;
   }
   void display()
   {
       cout<<"count= "<<value<<endl;
   }
};
int main()
{
    count obj;
    ++obj;  // call the " void operator++()" function
    obj.display();
    return 0;
}
*/


// 2. ++ operator (unary operator ) overloading 
//  overload++ when used as  postfix

/*#include<iostream>
using namespace std;
class count
{
    int value;
   public:
   count():value(7)   //constructor to initialize value
   {}
   void operator++(int)   // overload ++ when used as postfix
   {
       value++;
   }
   void display()
   {
       cout<<"count= "<<value<<endl;
   }
};
int main()
{
    count obj;
    obj++;  // call the " void operator++(int )" function
    obj.display();
    return 0;
}  */
// output: count= 8

//  3.  ++ operator (unary operator ) overloading
//  overload++ when used as prefix and postfix

/*#include<iostream>
using namespace std;
class count
{
    int value;
   public:
   count():value(7)   //constructor to initialize value
   {}
   void operator++(int)   // overload ++ when used as postfix
   {
       value++;
   }  
    void operator++()  // overload ++ when used as prefix
    {
        ++value;
    }
   void display()
   {
       cout<<"count= "<<value<<endl;
   }
};
int main()
{
    count obj;
    obj++;  // call the " void operator++(int )" function
    obj.display();
    ++obj;
    obj.display();   // call the " void operator++()" function 
    return 0;
}   */ 
  
/* output : count= 8
            count= 9  */ 



// 4. ++ operator (unary operator ) overloading and returning a value from it
// return value from operator function(++) 

#include<iostream>
using namespace std;
class count
{
    int value;
   public:
   count():value(7)   //constructor to initialize value
   {}
   count operator++(int)   // overload ++ when used as postfix
   {
      count t;
      t.value=value++;  // here value is the value attribute of calling object
       return t;
   }  
    count operator++()  // overload ++ when used as prefix
    {
        count t1;
        t1.value=++value;
        return t1;
    }
   void display()
   {
       cout<<"count= "<<value<<endl;
   }
};
int main()
{
    count obj , result ;
    result=obj++;  // call the " void operator++(int )" function
    result.display();
     result=++obj;
    result.display();   // call the " void operator++()" function 
    return 0;
}  