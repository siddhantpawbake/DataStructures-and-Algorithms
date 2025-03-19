/*# Complexity
- Time complexity:
O(n)

- Space complexity:
O(n)

# Code
```cpp []
*/
class Solution {
public:
   bool isPalindrome(int x) {
        if (x < 0) return false;
        string z = to_string(x);
        string rev = z;
        reverse(rev.begin(), rev.end());
        return z == rev;
    }
};
```