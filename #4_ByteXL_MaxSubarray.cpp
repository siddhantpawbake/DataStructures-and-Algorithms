Problem Statement
A stock market analyst wants to determine the maximum profit streak from a series of daily gains and losses. Each element in the array represents the profit (positive) or loss (negative) on a given day. The analyst needs to find the contiguous sequence of days with the highest net profit.
Write a program to compute the maximum subarray sum.

Input Format
First line: integer n
Second line: n space-separated integers
Output Format
Maximum subarray sum
Constraints
1 ≤ n ≤ 10
5
5
 
-10
6
6
  ≤ arr[i] ≤ 10
6
6
 
Time Complexity: O(n)
Sample Test Cases
Sample Test Case 1
Input:
9
-2 1 -3 4 -1 2 1 -5 4
Output:
6
Sample Test Case 2
Input:
5
1 2 3 4 5
Output:
15

long long max_subarray(const vector<long long> &arr) {
    // start your solution
// write your solution here 
    int maxi=-999999;
for(int i=0;i<arr.size();i++){
    int sum=0;
    for(int j=i;j<arr.size();j++){
        sum+=arr[j];
        maxi=max(sum,maxi);
    }
}
return maxi;
// end your solution
}