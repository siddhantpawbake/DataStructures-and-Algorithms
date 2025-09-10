class Solution {
public:
    int mySqrt(int x) {
        int l=0;int r=x;
        while(l<=r){
            int mid=r+(l-r)/2;
            int mids=mid*mid;
            if(mids==x) return mid;
            else if(mids<x) l=mid+1;
            else if(mids>x) r=mid-1;
        }
            return r;
    }
};