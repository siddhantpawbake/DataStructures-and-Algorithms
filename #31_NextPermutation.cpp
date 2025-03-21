/*
#A1: Using built in function
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
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};
/*
#A2:
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
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]){
            i--;
        }
        if (i >= 0) { 
            int j = n - 1;
            while (nums[j] <= nums[i]) 
                j--;
            swap(nums[i], nums[j]); 
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
