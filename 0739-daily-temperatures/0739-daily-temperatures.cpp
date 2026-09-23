class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>s;
        vector<int>res(t.size(),0);
        for(int i=0;i<t.size();i++){
            while(!s.empty()&&t[i]>t[s.top()]){
                int idx=s.top();
                s.pop();
                res[idx]=i-idx;
            }
            s.push(i);
        }
        return res;
    }
};