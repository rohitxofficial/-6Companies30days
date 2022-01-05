// Question : https://leetcode.com/problems/minimum-size-subarray-sum/
// Solution : https://leetcode.com/submissions/detail/613573589/

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int numsize = nums.size();

        int start = 0;
        int end = 0;

        int minSize = INT_MAX;

        int currSum = 0;

        while (end < numsize)
        {
            currSum += nums[end];

            while (currSum >= target)
            {
                if (end - start + 1 < minSize)
                    minSize = end - start + 1;

                currSum -= nums[start];
                start++;
            }

            end++;
        }

        if (minSize == INT_MAX)
            return 0;

        return minSize;
    }
};
