class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        int count = 0;
        int i = 0, j = 0;
        unordered_set<char> seen;
        while (j < s.size()) {
            if (seen.find(s[j]) == seen.end()) {
                seen.insert(s[j]);
                count = max(count, j - i + 1);
                j++;
            } else {
                seen.erase(s[i]);
                i++;
            }
        }
        return count;
    }
};
