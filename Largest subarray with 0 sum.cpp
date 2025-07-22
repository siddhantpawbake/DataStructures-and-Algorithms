A1:Bruteforce
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int len=0;
        int size=arr.size();
        for(int i=0;i<size;i++){
            int sum=0;
            for(int j=i;j<size;j++){
                sum+=arr[j];
                if(sum==0){
                    len=max(len,j-i+1);
                }
            }
        }
        return len;
    }
};

A2:Optimal
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>map;
        int sum=0;
        map[0]=-1;
        int len=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(map.find(sum)!=map.end()){
                len=max(len,i-map[sum]);
                continue;
            }
            map[sum]=i;
        }
        return len;
    }
};