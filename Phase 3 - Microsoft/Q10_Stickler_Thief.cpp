// Question : https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/#
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=0ab00fb75f9439042863f2ccfc8802dd&pid=701417&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int FindMaxSum(int arr[], int n, int *dp)
    {
        if (n <= 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        int a = FindMaxSum(arr + 1, n - 1, dp);

        int b = arr[0] + FindMaxSum(arr + 2, n - 2, dp);

        dp[n] = max(a, b);

        return dp[n];
    }

    int FindMaxSum(int arr[], int n)
    {
        int *dp = new int[n + 1];

        for (int i = 0; i <= n; i++)
            dp[i] = -1;

        FindMaxSum(arr, n, dp);
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        Solution ob;
        cout << ob.FindMaxSum(a, n) << endl;
    }

    return 0;
}