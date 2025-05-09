/* Problem Statement : 
Number of occurrence
Difficulty: Easy
Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

Examples :

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: target = 2 occurs 4 times in the given array so the output is 4.

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 4
Output: 0
Explanation: target = 4 is not present in the given array so the output is 0.

Input: arr[] = [8, 9, 10, 12, 12, 12], target = 12
Output: 3
Explanation: target = 12 occurs 3 times in the given array so the output is 3.

Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106
1 ≤ target ≤ 106


*/

/* solution */

/* Brute Force*/

// C++ program to find the occurence of given
// target using linear search

#include <iostream>
#include <vector>
using namespace std;

int countFreq(vector<int> &arr, int target) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {

      	// If the current element is equal to 
      	// target, increment the result
        if (arr[i] == target)
            res++;
    }

    return res;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int target = 2;
    cout<< countFreq(arr, target);
    return 0;
}

/* better approach 
Binary search 

| Aspect | Complexity     |
| ------ | -------------- |
| Time   | `O(log n + k)` |
| Space  | `O(1)`         |  */


int countFreq(vector<int> &arr, int target) {
    int low = 0 , high = arr.size()-1;
    int count=0;

    while(low <= high ){
        int mid = low + (high-low)/2 ;
        
        if(arr[mid]==target){
            int leftcount=mid ,  rightcount=mid;

            //left-count
            while(leftcount>=0 && arr[leftcount]==target){
                count++;
                leftcount--;
            }
        

            //right-count
            rightcount=mid+1;
            while(rightcount<arr.size() && arr[rightcount]==target){
                count++;
                rightcount++;
            } return count;
        }

        else if(arr[mid] < target){
            low = mid+1;
        }

        else{
            high= mid-1;
        }
    }

    return 0;
}

/* Optimised Approach*/

// O(logn) Time and O(1) Space

#include <vector>
#include <algorithm>
using namespace std;

int countFreq(vector<int>& arr, int target) {
    int l = lower_bound(arr.begin(), arr.end(), target) - arr.begin();  //lower_bound: returns iterator to the first element ≥ target
    int r = upper_bound(arr.begin(), arr.end(), target) - arr.begin();  //upper_bound: returns iterator to the first element > target
    
    // The difference gives the number of occurrences
    return r - l;
}





