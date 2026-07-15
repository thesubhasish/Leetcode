class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n =arr.size();
         int currentmax =arr[0];
         int currentmin=arr[0];
         int maxprod=arr[0];
         for (int i=1; i<n; i++){
             int temp=max({arr[i],arr[i]*currentmax,arr[i]*currentmin});
             int temp2=min({arr[i],arr[i]*currentmax,arr[i]*currentmin});
             currentmax=temp;
             currentmin=temp2;
             maxprod=max(currentmax,maxprod);
         }
         return maxprod;

    }
};