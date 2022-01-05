// Question : https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=afbe5c9f5c7f81efe1198ce52999ba37&pid=703093&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

int getNthUglyNo(int n)
{
    int *arr = new int[n];
    arr[0] = 1;

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;

    for (int i = 1; i < n; i++)
    {
        int next = min(2 * arr[p1], min(3 * arr[p2], 5 * arr[p3]));

        arr[i] = next;

        if (next == 2 * arr[p1])
            p1++;
        if (next == 3 * arr[p2])
            p2++;
        if (next == 5 * arr[p3])
            p3++;
    }

    return arr[n - 1];
}

int main()
{
    int n;
    cin >> n;

    cout << getNthUglyNo(n) << endl;

    return 0;
}
