#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, count = 0;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (arr[0] != 0)
            count++;
        for (long long i = 1; i < n; i++)
        {
            if (arr[i] != 0 && arr[i] != arr[i - 1])
            {
                count++;
            }
        }
         cout << count << endl;
    }
    return 0;
}
