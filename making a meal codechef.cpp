#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s[n];
	    int a[6]={0};
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
	       string sr=s[i];
	        for(int j=0;j<sr.length();j++){
	            if(sr[j]=='c'){
	                a[0]++;
	            }
	             if(sr[j]=='o'){
	                a[1]++;
	            }
	             if(sr[j]=='d'){
	                a[2]++;
	            }
	             if(sr[j]=='e'){
	                a[3]++;
	            }
	             if(sr[j]=='h'){
	                a[4]++;
	            }
	             if(sr[j]=='f'){
	                a[5]++;
	            }
	        }
	       
	    } a[0]=a[0]/2;
	    a[3]=a[3]/2;
	    cout<< *min_element(a,a+6)<<endl;
	}
	return 0;
}
