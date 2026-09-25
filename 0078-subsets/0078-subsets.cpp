class Solution {
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a;
       int n=nums.size();
       for(int i=0;i<(1<<n);i++){
        vector<int>res;
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                res.push_back(nums[j]);
            }
        }
        a.push_back(res);
       }
        return a;
    }
};