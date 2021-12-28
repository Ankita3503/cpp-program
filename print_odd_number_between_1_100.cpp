#include<iostream>
using namespace std;
class odd
{
    public:
    int i;
    void odd_number()
    {
       i=1;
       while(i<=100) // for(i=1;i<=100;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
            i++;
        }
    }
};
int main()
{
    odd ob;
    ob.odd_number();
    return 0;
}