#include<iostream>
using namespace std;
int main()
{
	int i,j,item_sold,day;
	cout<<" Number of  item sold = \n";
	cin>>item_sold;
	cout<<"Number of days = ";
	cin>>day;
	int a[item_sold][day];
	cout<<"profit made each days-\n";
	for(i=0;i<item_sold;i++)
	{
		for(j=0;j<day;j++)
		{
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<item_sold;i++)
	{
		for(j=0;j<day;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"minimum number of sales of each day\n";
	for(i=0;i<day;i++)
	{
		int min=a[0][i];
		for(j=0;j<item_sold;j++)
		{
			if(min>a[j][i])
			{
				min=a[j][i];
			}
		}
		cout<<min<<"\t";
	}
	return 0;
}
