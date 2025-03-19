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
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int num : nums) {
            ans ^= num;
        }
        return ans;
    }
};
```