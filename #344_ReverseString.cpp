class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        while(l<=r){
            swap(s[l],s[r]);
            l++;r--;
        }
    }
};

java:
class Solution {
    public void reverseString(char[] s) {
        int l=0;
        int r=s.length-1;
        while(l<r){
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;r--;
        }
    }
}