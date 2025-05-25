/* Problem statement : 

Union of Two Arrays
Given two arrays a[] and b[], the task is to return union of both the arrays in any order.

Note: Union of two arrays is an array having all distinct elements that are present in either array.

Examples:

Input : a[] = {1, 2, 3, 2, 1}, b[] = {3, 2, 2, 3, 3, 2}
Output : {3, 2, 1}
Explanation: 3, 2 and 1 are the distinct elements present in either array.

Input : a[] = {1, 2, 3}, b[] = {4, 5, 6}
Output : {1, 2, 3, 4, 5, 6}
Explanation: 1, 2, 3, 4, 5 and 6 are the elements present in either array.

*/

/*  Brute Froce Approach*/

// User function template in C++

/* ✅ Approach:
You are using a hash set (unordered_set) to store the union of two arrays.

Steps:

Create an unordered set st which automatically handles duplicates.

Insert all elements of array a into st.

Insert all elements of array b into st.

Since sets store only unique elements, the final size of the set is the count of unique elements, i.e., the union of both arrays.

🕒 Time Complexity:
Inserting an element into an unordered_set takes O(1) on average.

Let n = size of array a, and m = size of array b.

So:

Inserting all elements of a → O(n)

Inserting all elements of b → O(m)

Total Time Complexity:
👉 O(n + m) (average case)

Note: In rare worst cases due to hash collisions, insertions can degrade to O(n²), but this is uncommon.

💾 Space Complexity:
The unordered set st stores at most n + m elements (in case all are unique).

Total Space Complexity:
👉 O(n + m) (in worst case when no duplicates)  
*/

class Solution {
public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> st;
        // put all elements of a[] in st
        for(int i = 0;i<a.size() ;i++){
            st.insert(a[i]);
        }
        
        // put all elements of b[] in st
        for(int i = 0;i<b.size() ;i++){
            st.insert(b[i]);
        }
        
        return st.size();
        
    }
};