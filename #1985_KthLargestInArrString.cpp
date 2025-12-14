struct Comparator
{
    bool operator()(const string &a, const string &b) const
    {
        if (a.length() != b.length())
            return a.length() > b.length();
        return a > b;
    }
};

class Solution
{
public:
    string kthLargestNumber(vector<string> &nums, int k)
    {
        priority_queue<string, vector<string>, Comparator> pq;

        for (auto &x : nums)
        {
            pq.push(x);

            if (pq.size() > k)
            {
                pq.pop();
            }
        }

        return pq.top();
    }
};