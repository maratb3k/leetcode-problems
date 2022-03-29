// 1047. Remove All Adjacent Duplicates In String

class Solution {
public:
    string removeDuplicates(string s) {
    stack<char> st;
    string new_s = "";

    for (int i = 0; i < s.size(); i++){
        if (st.empty())
            st.push(s[i]);
        else{
            char ch = st.top();
            if(ch == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
    }

    while(!st.empty()){
        new_s.insert(new_s.begin(), st.top());
        st.pop();
    }
    return new_s; 
    }
};