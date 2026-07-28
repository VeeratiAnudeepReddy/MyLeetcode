class Solution {
public:
    bool checkValidString(string s) {
        int a=0,b=0;
        for(char c:s){
            if(c=='('){
                a++;
                b++;
            }else if(c==')'){
                b--;
                a--;
            }else{
                a--;
                b++;
            }
            if(b<0)return false;
            if(a<0)a=0;
        }
        return a==0;
    }
};