class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(int x : nums){
            if(x > 0){
                pos.push_back(x);
            }else{
                neg.push_back(x);
            }
        }

     vector<int> result(nums.size());
     int p=0,n=0;
 
      
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                result[i]=pos[p++];
            }
            else{
                result[i]=neg[n++];
            }
        }
        return result;
     

    }
};