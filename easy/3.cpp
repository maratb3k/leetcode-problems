// 1021. Remove Outermost Parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
    string new_s = "";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){   
        if(s[i] == ')')
            cnt--;
        if(cnt > 0)
            new_s += s[i];
        if(s[i] == '(')
            cnt++;
    }
    return new_s;
  }
    
};