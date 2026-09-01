class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int x=0;
        unordered_set<int> st;
      for(int x:nums){
        st.insert(x);
      }

        if(st.size()!=nums.size()){
            return true;
        }
            return false;
     
     
  
    }
};