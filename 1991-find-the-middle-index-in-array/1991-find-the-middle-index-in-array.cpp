class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>pre(nums.size());
        vector<int>suf(nums.size());
        pre[0]=nums[0];
        suf[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i];
        }
        for(int i=0;i<pre.size();i++){
            if(pre[i]==suf[i]){
                return i;
            }
        }
        return -1;
    }
};