
/* A simple program to print subarray  with sum as given sum */
#include <bits/stdc++.h>
using namespace std;
int subArraySum(int arr[], int n, int sum)
{
    int curr_sum, i, j;

    for (i = 0; i < n; i++) 
    {
        curr_sum = arr[i];
        for (j = i + 1; j <= n; j++)
         {
            if (curr_sum == sum) 
            {
                cout << "Sum found between indexes " << i << " and " << j - 1<<" \n ";
                return 1;
            }
            if (curr_sum > sum || j == n)
                break;

            curr_sum = curr_sum + arr[j];
        }
    }
    cout << "No subarray found";
    return 0;
}

int main()
{
      int n;
    cout<<"enter the size of array \n";
    cin>>n;
      int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   
    int sum ;
    cout<<"enter the value \n";
    cin>>sum;
    subArraySum(arr, n, sum);
    return 0;
}


