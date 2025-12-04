Problem Statement
You manage data ingestion where sorted integer streams may contain duplicate measurements. To optimize downstream processing, you must shrink each sorted array in place by removing duplicate entries so that each unique value appears only once at the front.

Given a sorted integer array nums, modify it in-place (in O(1) extra space) such that each unique element appears only once in the first portion of the array. Return the new length k (number of unique elements) and ensure the first k elements of the array hold the unique elements in their original sorted order. The elements after k can be any value.

Input Format
First line: integer n — number of elements in nums.
Second line: n space-separated integers — the sorted array nums.
Output Format
First line: integer k — the number of unique elements.
Second line: the first k elements of the modified nums (space-separated).
Constraints
1
≤
n
≤
10
5
1≤n≤10 
5
 
−
10
4
≤
n
u
m
s
[
i
]
≤
10
4
−10 
4
 ≤nums[i]≤10 
4
 
nums is sorted in non-decreasing order.
Sample Test Cases
Sample Test Case 1
Input:
8
1 1 2 2 3 4 4 5
Output:
5
1 2 3 4 5
Explanation:
Unique elements in order: 1, 2, 3, 4, 5 → total k = 5.
These occupy the first 5 positions of the modified array.

Sample Test Case 2
Input:
5
1 2 3 4 5
Output:
5
1 2 3 4 5
Explanation:
Array is already strictly increasing, so there are no duplicates.
All 5 elements are unique → k = 5.

int removeDuplicates(vector<int>& a){
    // start your solution
    int j=0;
    if(a.size()==0) return 0;
    for(int i=1;i<a.size();i++){
        if(a[j]!=a[i]){
            j++;
            a[j]=a[i];
        }
    }return j+1;
// end your solution
}