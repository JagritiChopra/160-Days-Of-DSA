/*problem statement:

K-th Element of Merged Two Sorted Arrays
Given two sorted arrays of sizes m and n respectively, the task is to find the element that would be at the k-th position in the final sorted array formed by merging these two arrays.

Examples: 

Input: a[] = [2, 3, 6, 7, 9], b[] = [1, 4, 8, 10], k = 5
Output: 6
Explanation: The final sorted array is [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element is 6.

Input: a[] = [100, 112, 256, 349, 770], b[] = [72, 86, 113, 119, 265, 445, 892], k = 7
Output: 256
Explanation: The final sorted array is [72, 86, 100, 112, 113, 119, 256, 265, 349, 445, 770, 892]. The 7th element is 256
*/

/* brute Force Approach*/

// create a new array that will store the merged arrays a & b then we will sort the new array and return the kth element
#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &a, vector<int> &b, int k) {

    // to merge both the arrays
    vector<int> arr;

    // add the elements of array a
    for(auto i: a)
        arr.push_back(i);

    // add the elements of array a
    for(auto i: b)
        arr.push_back(i);

    // sort the merged array
    sort(arr.begin(), arr.end());

    // return the kth element
    return arr[k-1];
}

int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;

    cout << kthElement(a, b, k);
    return 0;
}


