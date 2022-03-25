#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
using namespace std;
string inttostring1(int  );
string inttostring2(int  );
string inttostring3(int  );
string  getFormattedDate(int day ,int month ,int year)
{
	string x =inttostring1(day);	
      	string y =inttostring2(month);
      		string z =inttostring3(year);
      		return (z+y+x);
}
string  inttostring1(int day  )
{
	string d="";

	while(day!=0)
	{
	   int r=day%10;
	   char ch1=r+48;
	    d= ch1+d;
	   day=day/10;
	}

	return d;
}
string  inttostring2(int month  )
{
	string m="";

	while(month!=0)
	{
	   int r=month%10;
	   char ch2=r+48;
	    m= ch2+m;
	   month=month/10;
	}

	return m ;
}
string  inttostring3(int year )
{
	string y="";

	while(year!=0)
	{
	   int r=year%10;
	   char ch3=r+48;
	    y= ch3+y;
	   year=year/10;
	}

	return y;
}


int main()
{
	int date,month,year;
	date=rand() % 30 + 1;
	month =rand() % 12 + 1;
	year =rand() % 2022 + 1;
   cout<<"The given date is day "<<date<<" month "<<month<<" year "<<year<<"\n";
   string yyyymmdd = getFormattedDate(date,month,year);
   cout<<" the given date in yyyymmdd is : "<<yyyymmdd;
   return 0;
}
