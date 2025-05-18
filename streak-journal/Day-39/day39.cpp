/*  Problem statement:

Search in row wise sorted matrix
Given a row-wise sorted matrix mat[][] and an integer x, the task is to check if x is present in mat[][] or not. Note that there is no ordering among column elements.

Examples:

Input: x = 9, mat[][] = [[3, 4, 9],
[2, 5, 6],
[9, 25, 27]]
Output: true
Explanation: mat[0][2] is equal to 9.

Input: x = 56, mat[][] = [[19, 22, 27, 38, 55, 67]]
Output: false
Explanation: 56 is not present in mat[][].   */

/*  Brute force approach*/
int n =mat.size() , m = mat[0].size();
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