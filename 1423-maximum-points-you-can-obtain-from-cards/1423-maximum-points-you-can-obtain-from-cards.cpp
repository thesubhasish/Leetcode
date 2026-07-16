class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
       int  lsum=0;
        for(int i=0; i<k;i++){
            lsum+=nums[i];
        }
        int rsum=0;
        int maxsum=lsum;
        for(int i=0;i<k;i++){
            rsum+=nums[n-1-i];
            lsum-=nums[k-1-i];
            maxsum=max(maxsum,rsum+lsum);
        }
        return maxsum;
    }
};