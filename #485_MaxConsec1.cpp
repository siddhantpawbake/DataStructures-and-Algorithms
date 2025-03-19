/*
# Complexity
- Time complexity:
O(n)
- Space complexity:
O(1)

# Code
```cpp []
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxi = 0;
        for (int i = 0; i < nums.size(); i++) {  // Fix out-of-bounds error
            if (nums[i] == 1) {
                cnt++;
                maxi = max(cnt, maxi); // Update maxi only when cnt increases
            } else {
                cnt = 0; // Reset count after updating maxi
            }
        }
        return maxi;
    }
};

```