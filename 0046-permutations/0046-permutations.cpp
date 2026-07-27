class Solution {
public:
    vector<vector<int>>res;
    void rec(vector<int>& nums,int l,int r){
        if(l==r){
            res.push_back(nums);
        }
        for(int i=l;i<r;i++){
            swap(nums[l],nums[i]);
            rec(nums,l+1,r);
            swap(nums[l],nums[i]);
        }
       
    }
    vector<vector<int>> permute(vector<int>& nums) {
        rec(nums,0,nums.size());
        return res;
    }
};