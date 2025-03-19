/*
# Complexity
- Time complexity:
O(N)

- Space complexity:
O(1)

# Code
```cpp []
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxi=INT_MIN;
        for(int i:nums){
            currsum += i;
            maxi=max(currsum,maxi);
            if(currsum<0){
                currsum=0;
            }
        }
    return maxi;}
};
```