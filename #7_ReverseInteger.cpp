/*# Complexity
Time complexity:
O(log(n))
# Code
```cpp []
*/
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x != 0) {
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && x % 10 > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && x % 10 < -8)) return 0;
            
            ans = (ans * 10) + (x % 10);
            x /= 10;
        }
        
        return ans;
    }
};

```

class Solution {
public:
    int helper(int x, long rev){
        if (x == 0) {
            return rev;
        } 
        int digit = x % 10;
        if (rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
        rev = rev * 10 + digit;
        return helper(x / 10, rev);
    }
    int reverse(int x) {
        return helper(x, 0);
    }
};
