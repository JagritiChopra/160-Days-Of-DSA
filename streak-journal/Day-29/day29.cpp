#include <vector>

/* Problem Statement :
Minimum in a Sorted and Rotated Array
Given a sorted array of distinct elements arr[] of size n that is rotated at some unknown point, the task is to find the minimum element in it. 

Examples: 

Input: arr[] = [5, 6, 1, 2, 3, 4]
Output: 1
Explanation: 1 is the minimum element present in the array.

Input: arr[] = [3, 1, 2]
Output: 1
Explanation: 1 is the minimum element present in the array.

Input: arr[] = [4, 2, 3]
Output: 2
Explanation: 2 is the only minimum element in the array.*/


/*  Brute Force approach  : linear search */

int findMinBrute(vector<int>& arr) {
    int minVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

/*  Time Complexity: O(n)  */
/*  Space Complexity: O(1)  */


/*  Optimized approach : binary search  */

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    // Early check if already sorted
    if (arr[low] <= arr[high])
        return arr[low];

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }

    return arr[low];
}

/*  Time Complexity: O(log n)  */
/*  Space Complexity: O(1)  */
