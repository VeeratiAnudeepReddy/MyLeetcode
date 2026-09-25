class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int m=0,c=0;
        
        vector<vector<int>>a;
        for(int i=0;i<(1<<n);i++){
           
           int x=0;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    x=x|nums[j];
                   
                }
            }
            if(x>m){
                m=x;
                c=1;
            }else if(x==m){
                c++;
            }
        }
        return c;
    }
};