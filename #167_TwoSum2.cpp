/*
# Complexity
- Time complexity:
O(N)

- Space complexity:
O(1)
# Code
```cpp []
*/class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) {
                return {l + 1, r + 1};
            } else if (sum < target) {
                l++;  
            } else {
                r--;
            }
        }
            return {};
    }
};

```
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while(l<r){
            if(target>numbers[l]+numbers[r]) l++;
            if(target<numbers[l]+numbers[r]) r--;
            if(target==numbers[l]+numbers[r]) return {l+1,r+1};
        }
            return{};
    }
};