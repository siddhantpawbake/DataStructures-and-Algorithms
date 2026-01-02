class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int it : nums)
        {
            freq[it]++;
        }
        int n = nums.size() / 2;
        for (auto &f : freq)
        {
            if (f.second == n)
                return f.first;
        }
        return -1;
    }
};