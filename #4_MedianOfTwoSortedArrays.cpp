class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> merged;
        int size1 = nums1.size() - 1;
        int size2 = nums2.size() - 1;
        for (int i = 0; i <= size1; i++)
        {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i <= size2; i++)
        {
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(), merged.end());
        double mid = 0;
        double median = 0;
        if (merged.size() % 2 == 0)
        {
            mid = merged[merged.size() / 2] + merged[merged.size() / 2 - 1];
            median = mid / 2;
        }
        else
        {
            median = merged[merged.size() / 2];
        }
        return median;
    }
};