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

A2:O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        vector<int>prefix(nums.size(),1);
        vector<int>suffix(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
        }
    
};