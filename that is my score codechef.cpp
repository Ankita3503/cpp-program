#include<iostream>
using namespace std;
void solution( )
{
    int s ;
      cin>>s ;
     int arr[9] = {0};
      int q , p ;    
    for( int i = 0 ; i<s ; i++ )
    {
        cin>>q >> p;
        if(q>8)
        continue ;
        if( arr[q] < p) 
        arr[q] = p ;
    }
    
    for( int i = 1  ; i<9; i++)
    {
        arr[0]+= arr[i] ;
    }
    cout<<arr[0] <<endl ;
}

int main()
{
    int T ;
     cin>>T ;
     for(int i = 0 ; i<T ; i++ )
     solution() ;
     return  0 ;
     
}
