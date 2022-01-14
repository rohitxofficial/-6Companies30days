// Question : https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/#
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=47529dffa6bf9fb8a571e901b983abcd&pid=701347&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{
    vector<string> ans;

    queue<string> q;

    q.push("1");

    while (N--)
    {
        string front = q.front();
        q.pop();
        ans.push_back(front);

        q.push(front + "0");
        q.push(front + "1");
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> ans = generate(n);

        for (auto it : ans)
            cout << it << " ";

        cout << endl;
    }

    return 0;
}