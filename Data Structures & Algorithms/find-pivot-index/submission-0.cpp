class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int leftSum=0;
        int totalsum=0;
        for(int x:nums){
           totalsum+=x;
        }
        for(int i=0;i<n;i++){
             
            int rightSum=totalsum-leftSum-nums[i];
            if(leftSum==rightSum){
                return i;
            }
            leftSum+=nums[i];

        }
       return -1; 
    }
};