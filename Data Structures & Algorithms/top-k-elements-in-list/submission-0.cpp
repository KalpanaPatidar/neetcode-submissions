#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Frequency map create karein
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        // Step 2: Bucket array (index = frequency, value = list of numbers)
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        for (auto& pair : count) {
            buckets[pair.second].push_back(pair.first);
        }

        // Step 3: Highest frequency se top k elements collect karein
        vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};