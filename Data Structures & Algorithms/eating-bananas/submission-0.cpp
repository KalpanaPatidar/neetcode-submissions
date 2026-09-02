class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *std::max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            long long hours_needed = 0;
            for (int p : piles) {
                // Equivalent to ceil(p / mid) without floating-point inaccuracies
                hours_needed += (p + mid - 1LL) / mid;
            }

            if (hours_needed <= h) {
                ans = mid;
                right = mid - 1; // Try to find a smaller valid speed
            } else {
                left = mid + 1;  // Speed too slow, need to increase
            }
        }

        return ans;
        
    }
};
