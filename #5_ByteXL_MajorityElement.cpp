Problem Statement
In an election poll, an array lists votes (each vote is an integer candidate ID). One candidate receives more than half of all votes. The election management wants to quickly determine which candidate has the majority to issue a provisional certificate. Given the vote array, find and return the candidate ID who has the majority.

Input Format
Single line: space-separated integers (the votes).
Output Format
Single integer: the majority candidate ID.
Constraints
1 ≤ nums.length ≤ 5 * 10
4
4
 
-10
9
9
  ≤ nums[i] ≤ 10
9
9
 
The majority element always exists in the array.
Sample Test Cases
Sample Test Case 1
Input:
3 2 3
Output:
3
Sample Test Case 2
Input:
1 -1 -1 -1 2
Output:
-1


int majorityElement(vector<int>& nums) {
        // start your solution

unordered_map<int,int>freq;
for(auto i:nums){
    freq[i]++;
}
int max=0,maxi=0;

for(auto p:freq){
    if(p.second>max){
        max=p.second;
        maxi=p.first;
    }
}
return maxi;
// end your solution
}