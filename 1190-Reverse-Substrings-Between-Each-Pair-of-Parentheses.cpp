class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> charStack;
        
        s = "((" + s;
        s = s + "))";
        
        string result = "";
        int n = s.size();
        int index = n;
        
        for (int i = 0; i < n; i++) {
            if (charStack.empty() || s[i] != ')') {
                charStack.push(s[i]);
            } 
            else {
                string temp = "";
                
                while (charStack.top() != '(') {
                    temp += charStack.top();
                    charStack.pop();
                }
                
                charStack.pop();
                
                result = temp;
                
                for (int j = 0; j < temp.size(); j++) {
                    charStack.push(temp[j]);
                }
            }
        }
        return result;
    }
};