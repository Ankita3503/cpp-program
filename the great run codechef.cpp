#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    int ar[n], g = 0;
	    for (int i = 0; i < n; i ++) {
	        cin >> ar[i];
	    }
	    for (int i = 0; i <= n-k; i ++) {
	        int l = 0;
	        for ( int j = i; j < i+k; j ++) {
	            l += ar[j];
	        }
	            if (g < l)
	            g = l;
	    }
	    cout << g << "\n";
	}
	return 0;
}
