/*
# Complexity
- Time complexity:
O(N)
- Space complexity:
O(N)
# Code
```cpp []
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>p;

        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
        }
        int maxi=0;
        int ans=0;
        for(auto i:p){
            if(i.second>maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};
```