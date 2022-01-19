#include<iostream>
using namespace std;
void tower_of_hanoi(int n,string source,string helper,string destinition)
{
    if(n==1)
    {
        cout<<"Transfer disk "<< n <<"from "<<source<<"to "<<destinition;
        return;
    }
    
    tower_of_hanoi(n-1,source,destinition,helper);
    cout<<endl;
    cout<<"transfer disk "<<n<<" from "<<source <<" to "<<destinition<<endl;
    tower_of_hanoi(n-1,helper,source,destinition);
}

int main()
{
    int n=4;
    tower_of_hanoi(n,"Source","Helper","Destinition");
    return 0;
}
