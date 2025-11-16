class Solution {
public:
    double myPow(double x, long n) {
    if (n == 0) return 1;
    double half = myPow(x, n / 2);
    if (n % 2 == 0) return half * half;
    if (n > 0) return half * half * x;
    else return (half * half) / x;
}
};

class Solution {
public:
double myPow(double x, int n) {
    if(n == 0) return 1;

    if(n > 0)
        return x * myPow(x, n - 1);
    else
        return (1/x) * myPow(x, n + 1);
}
};