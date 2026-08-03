class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long  m=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long g=gcd(nums[i],nums[j]);
                long long a=1LL*nums[i]*nums[j]/(g*g);
                m=max(m,a);
            }
        }
        return m;
    }
};