class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
    for(int i=0;i<n;i++){
        int maxval=-1;
        for(int j=i+1;j<n;j++){
            maxval=max(maxval,arr[j]);
        }
        arr[i]=maxval;
    }
    arr[n-1]=-1;
    return arr;
    }
};