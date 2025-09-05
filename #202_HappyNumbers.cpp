class Solution {
public:
    int nextNum(int n){
    int s=0;
    while(n>0){
        int d=n%10;
        s+=d*d;
        n/=10; 
    }
    return s;    
}
    bool isHappy(int n){
    map<int, bool>seen;
        while(n!=1&&seen[n]==false){
            seen[n]=true;
            n=nextNum(n);
            }
    return n==1;
    }
};