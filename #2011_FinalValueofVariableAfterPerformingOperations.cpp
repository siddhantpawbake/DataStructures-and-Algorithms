class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int value = 0;
        for (auto i : operations)
        {
            if (i == "--X")
                --value;
            if (i == "X++")
                value++;
            if (i == "++X")
                ++value;
            if (i == "X--")
                value--;
        }
        return value;
    }
};