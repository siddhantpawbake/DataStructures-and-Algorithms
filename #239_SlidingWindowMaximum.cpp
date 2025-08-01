class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> maxi;
        int n = nums.size();
        for (int i = 0; i <= n - k; i++) {
            int currmax = nums[i];
            for (int j = i; j < i + k; j++) {
                currmax = max(currmax, nums[j]);
            }
            maxi.push_back(currmax);
        }
        return maxi;
    }
};
