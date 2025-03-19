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
    bool divideArray(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>p;
        if(size%2!=0){
            return false;
        }
        for(int i=0;i<size;i++){
            p[nums[i]]++;
        }
        for(auto i:p){
            if(i.second %2 !=0){
                return false;
            }
        }
    return true;}
};
```