/*
# Complexity
- Time complexity:
O(n^2)

- Space complexity:
O(1)

# Code
```cpp []
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        for (int i = 0; i <= n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) return i;
        }
        return -1;
    }
};

```
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
        return nums.size();
    }
};