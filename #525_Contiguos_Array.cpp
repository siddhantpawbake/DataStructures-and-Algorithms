class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     unordered_map<int,int>map;
    int sum=0;
    int length=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
           sum+=-1;
        }else{
            sum+=1;
        }
        if(sum==0){
            length=i+1;
        }else if(map.find(sum)!=map.end()){
            length=max(length,i-map[sum]);
        }else{
            map[sum]=i;
        }
    }
        return length;
}
};