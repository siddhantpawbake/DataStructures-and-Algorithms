#Approach 1:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
         for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
         }
    return count;
    }
}

#Approach 2:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int j=i;
            loop:
            if(j>=nums.size()) goto end;
            sum+=nums[j];
            if(sum==k){
                cnt++;
            }
            j++;
            goto loop;
            end: continue;
        }
        return cnt;
    }
};

#Approach 3:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> map;
        map[0]=1;      
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
           int need=sum-k;
           cnt+=map[need];
           map[sum]++;
        }
        return cnt;
    }
};