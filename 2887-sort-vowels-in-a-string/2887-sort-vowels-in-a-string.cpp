class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel;
        for(char c : s)
        {
            if(string("aeiouAEIOU").find(c)!=string::npos)
                vowel.push_back(c);
        }
        sort(vowel.begin(),vowel.end(),greater<char>());
        string ans;
        for(char c : s)
        {
            if(string("aeiouAEIOU").find(c)!=string::npos)
            {
                ans += vowel.back();
                vowel.pop_back();
            }
            else
                ans += c;
        }
        return ans;
    }
};