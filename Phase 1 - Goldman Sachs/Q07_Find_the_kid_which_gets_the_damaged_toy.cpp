// Question : https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1#
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=dea5dda38e40c96980bfd1e96ef7c064&pid=704216&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {
        if (M > N)
            M = M % N;

        int output = K + M - 1;

        if (output > N)
            output = output % N;

        return output;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, M, K;

        cin >> N >> M >> K;

        Solution ob;
        cout << ob.findPosition(N, M, K) << endl;
    }

    return 0;
}
