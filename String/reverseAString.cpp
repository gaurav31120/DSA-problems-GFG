// https://www.geeksforgeeks.org/problems/reverse-a-string/1?page=1&difficulty%255B%255D=-1&category%255B%255D=Strings&sortBy=submissions

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        int i = 0, j = str.length() - 1, temp;
        while (i < j)
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++, j--;
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends