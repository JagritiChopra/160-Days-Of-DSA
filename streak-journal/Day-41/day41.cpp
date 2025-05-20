/* Problem statement : 

Set Matrix Rows and Columns to Zeroes
Given a matrix mat[][] of size nxm, the task is to update the matrix such that if an element is zero, set its entire row and column to zeroes.

Examples:

Input: mat[][] = [[1, -1, 1],
[-1, 0, 1],
[1, -1, 1]]
Output: [[1, 0, 1],
[0, 0, 0],
[1, 0, 1]]
Explanation: mat[1][1] = 0, so all elements in row 1 and column 1 are updated to zeroes.

Input: mat[][] = [[0, 1, 2, 0],
[3, 4, 0, 2],
[1, 3, 1, 5]]
Output: [[0, 0, 0, 0],
[0, 0, 0, 0],
[0, 3, 0, 0]]
Explanation: mat[0][0], mat[1][2] and mat[0][3] are 0s, so all elements in row 0, row 1, column 0, column 2 and column 3 are updated to zeroes.*/

/* Brute force */


void setMatrixZeroes(vector<vector<int>> &mat) {
    int n = mat.size(), m = mat[0].size();

    // To store which rows and columns are
    // supposed to mark with zeroes
    vector<bool> rows(n, false), cols(m, false);

    // Traverse the matrix to fill rows[] and cols[]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // If the cell contains zero then mark
            // its row and column as zero
            if (mat[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Mark cell (i, j) with zero if either
            // of rows[i] or cols[j] is true
            if (rows[i] || cols[j])
                mat[i][j] = 0;
        }
    }
}