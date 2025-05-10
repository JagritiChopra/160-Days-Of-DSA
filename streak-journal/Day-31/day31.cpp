/* Problem Statement :

Peak Element in Array
Given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered to be a peak element if it is strictly greater than its adjacent elements. If there are multiple peak elements, return the index of any one of them.

Note: Consider the element before the first element and the element after the last element to be negative infinity.

Examples:

Input: arr[] = [1, 2, 4, 5, 7, 8, 3]
Output: 5
Explanation: arr[5] = 8 is a peak element because arr[4] < arr[5] > arr[6].

Input: arr[] = [10, 20, 15, 2, 23, 90, 80]
Output: 1 or 5
Explanation: arr[1] = 20 and arr[5] = 90 are peak elements because arr[0] < arr[1] > arr[2] and arr[4] < arr[5] > arr[6].

Input: arr[] = [1, 2, 3]
Output: 2
Explanation: arr[2] is a peak element because arr[1] < arr[2] and arr[2] is the last element, so it has negative infinity to its right.*/

/* Brute Force Approach*/

for(int i=1 ; i<arr.size() ; i++){
    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
        return i;
    }
}

/* Optimised Approach */

// Using Binary Search
int peakElement(vector<int> &arr) {
    int n = arr.size();
  
    // If there is only one element, then it's a peak
    if (n == 1) 
        return 0;
        
    // Check if the first element is a peak
    if (arr[0] > arr[1])
        return 0;
        
    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2])
        return n - 1;
    
    // Search Space for binary Search
    int lo = 1, hi = n - 2;
    
    while(lo <= hi) {
        int mid = lo + (hi - lo)/2;
        
        // If the element at mid is a  
        // peak element return  mid
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        
        // If next neighbor is greater, then peak
        // element will exist in the right subarray
        if(arr[mid] < arr[mid + 1])
            lo = mid + 1;
            
        // Otherwise, it will exist in left subarray
        else
            hi = mid - 1;
    }
    
    return 0;
}

