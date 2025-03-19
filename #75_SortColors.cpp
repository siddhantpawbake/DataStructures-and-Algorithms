/*
# Complexity
- Time complexity:
O(N^2)
- Space complexity:
O(N)
# Code
```cpp []
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int i, j, temp;
    int swapped;
    int n=nums.size();
    for (i = 0; i < n - 1; i++){
        swapped = false;
        for (j = 0; j < n - i - 1; j++){
            if (nums[j] > nums[j + 1]) 
            {
                // Swap arr[j] and arr[j+1]
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        break;
    }
}
};
```