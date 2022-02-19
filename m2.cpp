#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int count=1;
  string str;
  cout<<"enter the string \n";
 
  getline(cin,str);
  int length=str.begin()-str.end();
  cout<<" string is : "<<str<<"\n";
  int c=0;
  for(int i=0;str[i]!='\0';i++)
  {
      if(str[i]==' ')
      {
          if(c!=0)
          count++;
          c=0;
      }
      else{
          c++;
      }
  }
  cout<<"number of words in a sentence is "<<count;
  return 0;
}
