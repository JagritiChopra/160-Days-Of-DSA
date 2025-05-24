/* PRoblem statement :

3 Sum - Find All Triplets with Zero Sum
Given an array arr[], the task is to find all possible indices {i, j, k} of triplet {arr[i], arr[j], arr[k]} such that their sum is equal to zero and all indices in a triplet should be distinct (i != j, j != k, k != i). We need to return indices of a triplet in sorted order, i.e., i < j < k.

Examples :

Input: arr[] = {0, -1, 2, -3, 1}
Output: {{0, 1, 4}, {2, 3, 4}}
Explanation:  Two triplets with sum 0 are:
arr[0] + arr[1] + arr[4] = 0 + (-1) + 1 = 0
arr[2] + arr[3] + arr[4] = 2 + (-3) + 1 = 0

Input: arr[] = {1, -2, 1, 0, 5}
Output: {{0, 1, 2}}
Explanation: Only triplet which satisfies the condition is arr[0] + arr[1] + arr[2] = 1 + (-2) + 1 = 0

Input: arr[] = {2, 3, 1, 0, 5}
Output: {{}}
Explanation: There is no triplet with sum 0 */

/* Brute force solution */

// C++ program to find triplet having sum zero using
// three nested loops



vector<vector<int>> findTriplets(vector<int> &arr) {
    vector<vector<int>> res; 
    int n = arr.size(); 

    // Generating all triplets
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {

                // If the sum of a triplet equals to zero
              	// then add it's indices to the result
                if (arr[i] + arr[j] + arr[k] == 0) 
                    res.push_back({i, j, k});
            }
        }
    }
    return res; 
}

