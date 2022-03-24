#include <iostream>
using namespace std;

int main() {
	char c1,c2;
	cin>>c1>>c2;
	if(c1=='R'||c2=='R')
	cout<<"R\n";
	else if(c1=='B'||c2=='B')
	cout<<"B\n";
	else
	cout<<"G\n";
	return 0;
}
