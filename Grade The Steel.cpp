#include<iostream>
using namespace std;
int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int hardness,tensile_strength;
	    float carbon_content;
	    cin>>hardness>>carbon_content>>tensile_strength;
	    if(hardness>50 && carbon_content<0.7 && tensile_strength>5600)
	    {
	        cout<<"10\n";
	    }
	     else if(hardness>50 && carbon_content<0.7)
	      {
	          cout<<"9\n";
	      }
	       else if( carbon_content<0.7 && tensile_strength>5600)
	        {
	            cout<<"8\n";
	        }
	         else if(hardness>50  && tensile_strength>5600)
	          {
	              cout<<"7\n";
	          }
	           else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600)
	            {
	                cout<<"6\n";
	            }
	              else
	              {
	                  cout<<"5\n";
	              }
	}
	return 0;
}
