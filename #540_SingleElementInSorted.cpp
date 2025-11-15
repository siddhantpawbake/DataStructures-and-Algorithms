class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left < right){
            int mid = left + (right - left) / 2;
            if(mid % 2 == 1)
                mid--;
            if(nums[mid] == nums[mid + 1]){
                left = mid + 2;
            } else {
                right = mid;
            }
        }
        
        return nums[left];
    }
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto& pair : freq) {
            if (pair.second == 1) return pair.first;
        }
        return -1;
    }
};