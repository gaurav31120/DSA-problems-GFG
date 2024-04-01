//  Program to find the second maximum number in the array
//  https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays&difficulty=Basic,Easy&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int max1 = -1;
        int max2 = -1;
        int i = 0;

        while (i < n)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
                i++;
            }
            else if (arr[i] > max2 && arr[i] != max1)
            {
                max2 = arr[i];
                i++;
            }
            else
            {
                i++;
            }
        }
        return max2;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends