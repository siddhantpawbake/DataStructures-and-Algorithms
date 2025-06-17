class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> count;
        int n=nums.size();
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(auto i:count){
            if(i.second >n/3){
                result.push_back(i.first);
            }
        }
    return result;
    }
};