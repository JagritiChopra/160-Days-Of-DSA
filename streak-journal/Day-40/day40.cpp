/* Problem Statement : 

Search element in a sorted matrix
Given a sorted matrix mat[][] of size nxm and an element x, the task is to find if x is present in the matrix or not. Matrix is sorted in a way such that all elements in a row are sorted in increasing order and for row i, where 1 <= i <= n-1, the first element of row i is greater than or equal to the last element of row i-1.

Examples:

Input: x = 14, mat[][] = [[ 1, 5, 9],
[14, 20, 21],
[30, 34, 43]]
Output: true

Input: x = 42, mat[][] = [[ 1, 5, 9, 11],
[14, 20, 21, 26],
[30, 34, 43, 50]]
Output: false

*/

/* Brute force*/

int n = mat.size(), m = mat[0].size();
bool search(int x, vector<vector<int>> &mat)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(mat[i][j] == x)
            {
                return true;
            }
        }
    }
    return false;
}