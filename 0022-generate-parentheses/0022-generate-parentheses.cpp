class Solution {
public:
    vector<string>result;
    void rec(int o,int c,int n,string cur){
        if(cur.length()==n*2){
            result.push_back(cur);
            return;
        }
        if(o<n) rec(o+1,c,n,cur+"(");
        if(c<o) rec(o,c+1,n,cur+")");
    }
    vector<string> generateParenthesis(int n) {
        rec(0,0,n,"");
        return result;
    }
};