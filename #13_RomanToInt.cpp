class Solution
{
public:
    int helper(char a)
    {
        switch (a)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

    int romanToInt(string s)
    {
        int ans = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            int val = helper(s[i]);
            if (i + 1 < (int)s.size() && val < helper(s[i + 1]))
            {
                ans -= val;
            }
            else
            {
                ans += val;
            }
        }
        return ans;
    }
};