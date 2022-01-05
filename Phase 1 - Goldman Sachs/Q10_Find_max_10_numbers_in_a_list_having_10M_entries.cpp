// Approach 1 - Sorting
// Time Complexity : O(n log n) can be O(n^2) worst case (Quick Sort)
// Space Complexity : O(log n)
// Sorting the given array and then printing the first 10 elements.

// Approach 2 - Using Priority Queue
// Time Complexity : O(n log 10), since log 10 is a constant it would be O(n)
// Space Complexity : O(11) which is again constant, therefore O(1).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Creating a Priority Queue and Initializing it with first 10 entries.
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < 10; i++)
    {
        pq.push(arr[i]);
    }

    // Adding next element and removing the smallest.
    for (int i = 10; i < n; i++)
    {
        pq.push(arr[i]);
        pq.pop();
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
