/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.

Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation:

Element at position (1,1) is 0, so set entire row 1 and column 1 to 0.

Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:

There are two zeroes: (0,0) and (0,3).

Row 0 → all elements become 0
Column 0 and column 3 → all elements become 0
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution{
//     public:
//         void setZeroes(vector<vector<int>>& matrix){
//             int m = matrix.size();
//             int n = matrix[0].size();

//             vector<bool> rows(m,false);
//             vector<bool> cols(n,false);

//             for(int i=0; i<m; i++){
//                 for(int j=0; j<n; j++){
//                     if(matrix[i][j] == 0){
//                         rows[i] = true;
//                         cols[j] = true;
//                     }
//                 }
//             }

//             for(int i=0; i<m; i++){
//                 for(int j=0; j<n; j++){
//                     if(rows[i] || cols[j]){
//                         matrix[i][j] = 0;
//                     }
//                 }
//             }

//         }
// };
//*T.C: O(m*n)
//*S.C: O(m+n)

//*Optimal
class Solution{
    public:
        void setZeroes(vector<vector<int>>& matrix){
            int m = matrix.size();
            int n = matrix[0].size(); 

            bool firstRowZero = false;
            bool firstColZero = false;

            for(int i=0; i<m; i++){
                if(matrix[i][0] == 0){
                    firstColZero = true;
                    break;
                }
            }
            for(int j = 0; j<n; j++){
                if(matrix[0][j] == 0){
                    firstRowZero = true;
                    break;
                }
            }


            for(int i=1; i<m; i++){
                for(int j=1; j<n; j++){
                    if(matrix[i][j] == 0){
                        matrix[0][j] = 0;
                        matrix[i][0] = 0;
                    }
                }
            }

            for(int i=1; i<m; i++){
                for(int j=1; j<n; j++){
                    if(matrix[0][j] == 0 || matrix[i][0] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }

            if(firstRowZero){
                for(int j=0; j<n; j++){
                    matrix[0][j] = 0;

                }
            }
            if(firstColZero){
                for(int i=0; i<m; i++){
                    matrix[i][0] = 0;

                }
            }

        }
};
//*T.C: O(m*n)
//*S.C: O(1)

int main(){
    vector<vector<int>> matrix;
    int m,n;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        vector<int> arr;
        for(int j=0; j<n; j++){
            int value;
            cin >> value;
            arr.push_back(value);
        }
        matrix.push_back(arr);

    }
    Solution sol;
    sol.setZeroes(matrix);

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}