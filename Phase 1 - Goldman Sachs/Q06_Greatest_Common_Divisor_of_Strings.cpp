// Question : https://leetcode.com/problems/greatest-common-divisor-of-strings/
// Solution : https://leetcode.com/submissions/detail/611574754/

class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if (s1.size() < s2.size())
            return gcdOfStrings(s2, s1);
        else if (s2.empty())
            return s1;
        else if (s2 != s1.substr(0, s2.size()))
            return "";
        else
            return gcdOfStrings(s1.substr(s2.size()), s2);
    }
};
