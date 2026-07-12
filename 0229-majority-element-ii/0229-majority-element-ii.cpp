class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int appear= (int)n/3 +1;
        map<int,int>mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
            if (mpp[nums[i]]==appear){
                ans.push_back(nums[i]);
            }
        }
  return ans;
    }
};