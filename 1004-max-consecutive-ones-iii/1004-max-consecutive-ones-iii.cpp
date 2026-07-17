class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
         int left=0;  int zero=0;
         int max_length=0;
         for(int right=0;right<n;right++){
            if(nums[right]==0){
                zero++;
            }
            while(zero>k){
                if(nums[left]==0){
                zero--;
               
            }
            left++;
            }
            
                max_length= max(max_length, right-left+1);
            
         }
         return max_length;
    }
};