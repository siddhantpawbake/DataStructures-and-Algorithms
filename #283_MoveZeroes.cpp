/*
# Complexity
- Time complexity:
O(N)
- Space complexity:
O(N)
# Code
```cpp []*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, 0); // Initialize ans with zeros
        int i = 0, j = 0;

    same:
        while (i < nums.size()) {
            if (nums[i] != 0) {
                ans[j] = nums[i];
                j++;
            }
            i++;
            goto same;
        }

        nums = ans; // Copy back the modified array
    }
};

```