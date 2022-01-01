#include <bits/stdc++.h>
using namespace std;

// USING SORTING
// Time Complexity: O(N logN)
// Space Complexity: O(log N)

// USING COUNTING SORT
// Time Complexity: O(N)
// Space Complexity: O(N)

// USING HASH TABLE
// Time Complexity: O(N)
// Space Complexity: O(N)

/*
int *findTwoElement(int *arr, int n)
{
    unordered_map<int, int> numbers;

    int *output = new int[2]();

    for (int i = 0; i < n; i++)
    {
        numbers[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (numbers.count(i) > 0)
        {
            if (numbers[i] == 2)
                output[0] = i;
        }
        else
            output[1] = i;
    }

    return output;
}
*/

// USING BASIC MATHS
// Time Complexity: O(N)
// Space Complexity: O(1)

/*
int *findTwoElement(int *arr, int n)
{
    int *output = new int[2]();

    long long sumN = ((long long)n * (n + 1)) / 2;

    long long sumNSquare = ((long long)n * (n + 1) * (2 * n + 1)) / 6;

    for (int i = 0; i < n; i++)
    {
        sumN -= arr[i];
        sumNSquare -= (long long)arr[i] * arr[i];
    }

    long twice = ((sumNSquare / sumN) - sumN) / 2;

    long missing = sumN + twice;

    output[0] = twice;
    output[1] = missing;

    return output;
}
*/

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *output = findTwoElement(arr, n);

    cout << output[0] << " " << output[1] << endl;

    return 0;
}