class Solution {
public:
    string reverseWords(std::string s) {
        istringstream stream(s);
        string word, result;
        while (stream >> word) 
        {
            reverse(word.begin(), word.end());
            result += word + " ";
        }
        if (!result.empty()) 
        {
            result.pop_back(); 
        }
        return result;
    }
};