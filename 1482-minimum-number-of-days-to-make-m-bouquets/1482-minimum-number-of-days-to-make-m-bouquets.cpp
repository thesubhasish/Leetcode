class Solution {
public:
    int possible(vector<int>nums,int day, int m, int k){
        int count =0;
        int noofB=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<=day){
                count++;
            }
            else {
                noofB +=(count/k);
                count =0;
            }
            
        }
            noofB +=(count/k);
            return (noofB>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val = m*1LL*k*1LL;
        if(n<val) return -1;
        int low =INT_MAX;
        int high =INT_MIN;
        for(int i=0; i<n; i++){
            low= min(low,bloomDay[i]);
            high=max(high, bloomDay[i]);
        }
        while(low<=high){
            int mid = (low+high)/2;
            if (possible(bloomDay,mid,m,k)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};