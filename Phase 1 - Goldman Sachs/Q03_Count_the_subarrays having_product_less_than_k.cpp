// Question : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=b8fd99d058a6fc4d9035c160e33cb229&pid=703804&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(int *&a, int n, long long k)
{
    int output = 0;

    long long product = 1;
    for (int i = 0, j = 0; j < n; j++)
    {
        product *= a[j];

        while (product >= k && i < j)
        {
            product /= a[i];
            i++;
        }

        if (product < k)
        {
            output += j - i + 1;
        }
    }

    return output;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long k;
    cin >> k;

    cout << countSubArrayProductLessThanK(arr, n, k);

    return 0;
}
