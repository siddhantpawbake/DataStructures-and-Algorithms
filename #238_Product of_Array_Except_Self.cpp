A1:O(n^2)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int mul=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    mul*=nums[j];
                }
            }ans.push_back(mul);
        }return ans;
    }
};

