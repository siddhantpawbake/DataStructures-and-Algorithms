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
        vector<int> ans(size, 0);
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

        nums = ans;
    }
};

```
A2:USING TWO POINTER
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                 if (i != j) {
                    nums[j] = 0;
                   }
                i++;
            }
    }
};};

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
         int index=0;
         for(int i=0;i<arr.size();i++){   
            if(arr[i]!=0){
                swap(arr[i],arr[index]);
                index++;
            }
         }
    }
};