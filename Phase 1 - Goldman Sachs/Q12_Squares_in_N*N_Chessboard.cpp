// Question : https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=a975ede30f11147815a60a2528a4f6f1&pid=704775&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long squaresInChessBoard(long long n)
    {
        return (n * (n + 1) * (2 * n + 1)) / 6;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;

        cin >> N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}
