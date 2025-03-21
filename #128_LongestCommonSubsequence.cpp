class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            if (nums.empty()){
                return 0;
            }
            int cnt=1;
            int maxi=1;
              for (int i=1; i<nums.size();i++) {
                if (nums[i]==nums[i-1]){
                    continue;
                }
                if (nums[i]==nums[i-1]+1) {
                    cnt++;
                    } else {
                    cnt=1;
                }
                maxi=max(cnt,maxi);
            }
            return maxi;
        }
    };