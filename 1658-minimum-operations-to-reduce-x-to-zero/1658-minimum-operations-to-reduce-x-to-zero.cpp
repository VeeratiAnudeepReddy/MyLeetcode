class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        int tar;
        for(int i:nums)sum+=i;
        int l=0,r=0;
        tar=sum-x;
        int ans=0;
        int m=INT_MIN;
        if(tar<0)return -1;
        if(tar==0)return n;
        for(int ri=0;ri<n;ri++){
            ans+=nums[ri];
            while(l<=ri&&ans>tar){
                ans-=nums[l++];
            }
            if(ans==tar){
                m=max(m,ri-l+1);
            }
        }
        if(m==INT_MIN)return -1;
        else return n-m;

    }
};