class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n)return -1;
        int k=0;
        for(int i=0;i<n;i++){
            int r=min(9,s);
            k=k*10+r;
            s-=r;
        }
        return k;
    }
};