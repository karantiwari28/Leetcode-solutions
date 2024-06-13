class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> mp;
    int max_length = 0;
    int start = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp.count(s[i]) && mp[s[i]] >= start) 
        {
            max_length = max(max_length, i - start);
            start = mp[s[i]] + 1;
        }
        mp[s[i]] = i;
    }
    return max(max_length, (int)s.size() - start);
    }
};