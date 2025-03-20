/*
#A1:Bruteforce
# Complexity
- Time complexity:
O(n)

- Space complexity:
O(n)

# Code
```cpp []
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> pos(size / 2), neg(size / 2);
        int pcnt = 0, ncnt = 0;
        for (int i = 0; i < size; i++) {
            if (nums[i] > 0) {
                pos[pcnt++] = nums[i];
            } else {
                neg[ncnt++] = nums[i];
            }
        }
        vector<int> result(size);
        int p = 0, n = 0, i = 0;
        while (p < size / 2 && n < size / 2) {
            result[i++] = pos[p++];
            result[i++] = neg[n++];
        }
        return result;
    }
};

/*
#A2:Optimal (REDUCES SPACE USAGE)


# Complexity
- Time complexity:
O(n)

- Space complexity:
O(n)

# Code
```cpp []
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        int pi=0;
        int ni=1;
        vector<int>result(size);
        for (int i = 0; i < size; i++) {
            if(nums[i]<0){
                result[ni]=nums[i];
                ni+=2;
            }else{
                result[pi]=nums[i];
                pi+=2;
            }
        }
        return result;
    }
};
