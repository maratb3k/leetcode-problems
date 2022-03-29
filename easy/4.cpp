// 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int sum = 0;
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "+") {
                int x = v[v.size() - 1] + v[v.size() - 2];
                v.push_back(x);
            } 
            else if(ops[i] == "D") {
                int x = v[v.size() - 1] * 2;
                v.push_back(x);
            }
            else if(ops[i] == "C") 
                v.pop_back();
            else { 
                int x = stoi(ops[i]);
                v.push_back(x);
            }
        }
        for(int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        return sum;
    }
};