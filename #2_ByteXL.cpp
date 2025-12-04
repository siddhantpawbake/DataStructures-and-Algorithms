Problem Statement
You are developing a Human Resource Management System (HRMS) for a large company.
The employee records are stored in a sorted list of Employee IDs to allow efficient lookups.

Whenever an employee logs in or performs a task, the system must quickly verify if their Employee ID exists in the company database.
To make this lookup process fast and reliable, you decide to implement a recursive binary search algorithm.

The search works by repeatedly dividing the dataset in half:

If the target ID is smaller than the middle element, it searches in the left half.
If it’s larger, it searches in the right half.
The process repeats recursively until the ID is found or the search range becomes empty.
Input Format
The first line contains an integer n, the number of employee records.
The second line contains n space-separated integers — the sorted list of Employee IDs in ascending order.
The third line contains an integer x, the Employee ID to search for.
Output Format
Print the index (0-based) of the Employee ID if it exists.
Print -1 if the Employee ID is not found.
Constraints
1 ≤ n ≤ 1000
−10⁶ ≤ Employee ID ≤ 10⁶
The Employee ID list is sorted in ascending order
Sample Test Cases
Sample Test Case 1
Input:
6
2 4 6 8 10 12
10
Output:
4
Sample Test Case 2
Input:
3
-5 0 5
-5
Output:
0

int binarySearch(int arr[], int left, int right, int x) {
     // start your solution
    
    while(left<=right){
    int mid=left+(right-left)/2;
    if(x==arr[mid]) return mid;
    else if(x>arr[mid]){
        left=mid+1;
    }
    else if(x<arr[mid]){
        right=mid-1;
    }
     }
        return -1;
// write your solution here 
// end your solution
}