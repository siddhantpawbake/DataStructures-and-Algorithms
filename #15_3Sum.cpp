A1:O(n^3)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> abc;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(i!=j&&i!=k&&j!=k){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        abc.insert(temp);
                    }
                    }
                }
            }
        } 
        vector<vector<int>>ans(abc.begin(),abc.end());
        return ans;
    }
};
A2:O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<size;i++) {
            if (i>0&&nums[i]==nums[i-1]) continue;
            int j=i+1,k=size-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[j+1])j++;
                    while(j<k&&nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};
