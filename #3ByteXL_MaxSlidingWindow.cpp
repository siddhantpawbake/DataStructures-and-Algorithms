Problem Statement
You’re building a real-time analytics dashboard that reports the peak metric over the most recent k events. As new events arrive and old ones expire, the dashboard must quickly show the maximum value inside the sliding window of size k. Your function must efficiently produce these maxima for every window position.

Given an integer array nums and an integer k, return the array of the maximum value in each sliding window of size k as the window moves from left to right by one position.

Input Format
First line: integer n — number of elements.
Second line: n space-separated integers — the array nums.
Third line: integer k — window size.
Output Format
Print the sequence of window maxima as space-separated integers on one line. If k > n, you may assume inputs are valid such that 1 ≤ k ≤ n.
Constraints
1 ≤ n ≤ 10^5
-10^9 ≤ nums[i] ≤ 10^9
1 ≤ k ≤ n
Sample Test Cases
Sample Test Case 1
Input:
8
1 3 -1 -3 5 3 6 7
3
Output:
3 3 5 5 6 7 
Explanation:
Each window of size 3 yields maxima:
[1,3,-1]→3, [3,-1,-3]→3, [-1,-3,5]→5, [-3,5,3]→5, [5,3,6]→6, [3,6,7]→7.

Sample Test Case 2
Input:
5
9 8 7 6 5
2
Output:
9 8 7 6
Explanation:
Each window of length 2 slides left to right; maximum always equals the first element of each window.


vector<int> maxSlidingWindow(const vector<int>& a, int k){
    // start your solution
    vector<int>ans;
    for(int i=0;i<=a.size()-k;i++){
    int maxi=INT_MIN;
    int left=i,right=i+k-1;
    while(left<=right){
        maxi=max(a[left],maxi);
        left++;
}
    ans.push_back(maxi);
}
return ans;
// end your solution
}