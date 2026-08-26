class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        int left=0;

        for(int mid=0;mid<n;mid++){
            if(nums[mid]!=0){
               nums[left]=nums[mid];
               left++;   
            }
           
        }

       while(left<n){
        nums[left]=0;
        left++;
       }
        
        
    }
};