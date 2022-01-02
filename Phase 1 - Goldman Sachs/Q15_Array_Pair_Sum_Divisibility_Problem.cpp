// Question : https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
// Solution : https://practice.geeksforgeeks.org/viewSol.php?subId=5f031073eff3b307e7955fd0e5b2193e&pid=704691&user=rohitxofficial

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        int length = nums.size();

        if (length % 2 != 0)
            return false;

        unordered_map<int, int> myMap;

        for (int i = 0; i < length; i++)
        {
            int rem = nums[i] % k;

            if (myMap.count(k - rem) > 0)
            {
                // erase that key
                if (myMap[k - rem] == 1)
                    myMap.erase(k - rem);
                else
                    myMap[k - rem]--;
            }
            else
            {
                // add that key
                if (rem == 0)
                    rem = k;
                myMap[rem]++;
            }
        }

        if (myMap.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);

        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];

        Solution ob;

        bool ans = ob.canPair(nums, k);

        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    
    return 0;
}
