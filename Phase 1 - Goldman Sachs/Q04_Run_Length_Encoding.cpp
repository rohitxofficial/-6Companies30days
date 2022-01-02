// Question : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=2158ec090f46beca5686739f2464c2a3&pid=700243&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
    string output;
    int length = src.size();

    int i = 0;
    while (i < length)
    {
        int tempSize = 1;
        char curr = src[i];
        i++;

        while (i < length && src[i] == curr)
        {
            tempSize++;
            i++;
        }

        output += curr;
        output += to_string(tempSize);
    }

    return output;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
}
