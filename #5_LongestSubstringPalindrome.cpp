class Solution
{
public:
    bool isPalindrome(string &s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s)
    {
        string answer = "";
        for (int i = 0; i < s.size(); i++)
        {
            int l = 0;
            while (l <= i)
            {
                if (isPalindrome(s, l, i))
                {
                    string temp = s.substr(l, i - l + 1);
                    if (temp.size() > answer.size())
                    {
                        answer = temp;
                    }
                }
                l++;
            }
        }
        return answer;
    }
};
