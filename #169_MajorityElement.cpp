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

A2:
# Code
```cpp []
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int max;
       int size=nums.size();
       int out=0;
       for(int i=0;i<size;i++){
        if(nums[i]!=out){
        int count=0;
        for(int j=0;j<size;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }if(max<count){
            max=count;
            out=nums[i];
        }
       }}
       return out;
    }
};
```