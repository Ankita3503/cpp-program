/* wap to take function which will take pointer and dispaly the number on the screen . */
/* take number from user and orint it on screen using that function */
#include<iostream>
using namespace std;
class pointer3
{
    public:
    int a;
    void in(int *x)
    {
        cout<<"number = "<<*x;
    }

       
};
int main()
{
    pointer3 ob;
    int a=10;
    ob.in(&a);
    return 0;
}
