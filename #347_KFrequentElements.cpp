class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        vector<int>ans;
        for(auto i:nums){
            a[i]++;
        }
        priority_queue<pair<int,int>>abc;
        for(auto i:a){
            abc.push({i.second,i.first});
        }
        while(k!=0){
            ans.push_back(abc.top().second);
            abc.pop();
            --k;
        }
        return ans;
    }
};