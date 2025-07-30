A1:
O((m+n)log(m+n))
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cnt=0;
        int i=0;
        while(cnt<n){
            if(nums1[i]==0){
            nums1[i]=nums2[cnt];
            cnt++;}
            else i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
A2:
