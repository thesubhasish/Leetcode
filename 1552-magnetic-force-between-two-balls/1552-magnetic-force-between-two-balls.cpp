class Solution {
public:
    bool check(vector<int>&nums,int dist,int balls){
         int count=1; int last=nums[0];
         for(int i=1; i<nums.size();i++){
            if(nums[i]-last>=dist){
                count++;
                 last =nums[i];
            }
            if(count>=balls)return true;
         }
         return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int low= 1; int high =position[n-1]-position[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(check(position,mid,m)==true){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
    }
};