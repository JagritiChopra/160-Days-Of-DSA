/* Problem statement :


Intersection of two Arrays

Given two arrays a[] and b[], the task is find intersection of the two arrays. Intersection of two arrays is said to be elements that are common in both arrays. The intersection should not count duplicate elements and the result should contain items in any order.

Input: a[] = {1, 2, 1, 3, 1}, b[] = {3, 1, 3, 4, 1}
Output: {1, 3}
Explanation: 1 and 3 are the only common elements and we need to print only one occurrence of common elements

Input: a[] = {1, 1, 1}, b[] = {1, 1, 1, 1, 1}
Output: {1}
Explanation: 1 is the only common element present in both the arrays.

Input: a[] = {1, 2, 3}, b[] = {4, 5, 6}
Output: {}
Explanation: No common element in both the arrays.*/

/* Brute Force*/

vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int> res;

    // Traverse through a[] and search every element
    // a[i] in b[]
    for (int i = 0; i < a.size(); i++) {    
        for (int j = 0; j < b.size(); j++) {
          
            // If found, check if the element is already 
            // in the result to avoid duplicates
            if (a[i] == b[j]) { 
                int k;
                for (k = 0; k < res.size(); k++) 
                    if (res[k] == a[i]) 
                        break;
                if (k == res.size()) {
                    res.push_back(a[i]);
                }
            }
        }
    }

    return res;
}

