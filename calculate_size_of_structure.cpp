/**********************************************************
 Statement - Calculate Size of Structure
 Programmer - Vineet Choudhary
 Written For - http://developerinsider.co
 **********************************************************/


#include<iostream>
using namespace std;
struct stud {
    int roll;
    char name[10];
    int marks;
};

int main() {
    int size;
    struct stud s;
    
    size = sizeof(s);
    printf("nSize of Structure : %d", size);
    
    return(0);
}

/*
 Explanation :
 ---------------
 Structure is Collection of elements of the Different data Types.
 Size of the Structure Can be Evaluated using “sizeof Operator”
 
 size = sizeof(s);
 
 Formula for Calculating Size of Structure :
 -------------------------------------------
 Size of Structure 'S' = sizeof(roll) + sizeof(name) + sizeof(mark)
 = 2 + 10 + 2
 = 14
 ->Size depends on your computer
 
 Remember :
 ----------
 sizeof is Operator not function
 sizeof Operator Takes any Variable as Parameter.
 */