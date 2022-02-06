#include <iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
  char Ch;
  cin>>Ch;
  if(Ch=='B'||Ch=='b')
  {
      cout<<"BattleShip\n";
  }
   else if(Ch=='C'||Ch=='c')
  {
      cout<<"Cruiser\n";
  }
   else if(Ch=='D'||Ch=='d')
  {
      cout<<"Destroyer\n";
  }
   else if(Ch=='f'||Ch=='F')
  {
      cout<<"Frigate\n";
  }
}
return 0;
}
