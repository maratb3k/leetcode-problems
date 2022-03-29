// 1441. Build an Array With Stack Operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> output;
        int cnt = 0;
        int sz = target.size();
        for(int i = 1; i <= n; i++) {
            if (cnt >= sz)
                break;
            if (i == target[cnt]) {
                output.push_back("Push");
                cnt++;
            }
            else {
                output.push_back("Push");
                output.push_back("Pop");
            }
            
        }
        return output;
    }
};