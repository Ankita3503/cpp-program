#include<iostream>
using namespace std;
class even
{
    public:
    int i;
    void even_number()
    {
       i=1;
       while(i<=100)// for(i=1;i<=100;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
            i++;
        }
    }
};
int main()
{
    even ob;
    ob.even_number();
    return 0;
}