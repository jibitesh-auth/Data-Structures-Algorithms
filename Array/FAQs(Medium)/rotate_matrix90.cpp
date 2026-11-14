/*
Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.

The rotation must be done in place, meaning the input 2D matrix must be modified directly.

Example 1:
Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

Output: matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]

Example 2:
Input: matrix = [[0, 1, 1, 2], [2, 0, 3, 1], [4, 5, 0, 5], [5, 6, 7, 0]]

Output: matrix = [[5, 4, 2, 0], [6, 5, 0, 1], [7, 0, 3, 1], [0, 5, 1, 2]]
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution{
//     public:
//     void rotateMatrix(vector<vector<int>>& matrix){
//         int n = matrix.size();

//         vector<vector<int>> rotated(n,vector<int>(n,0));

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 rotated[j][n-i-1] = matrix[i][j];
//             }
//         }

//         for(int i=0; i<rotated.size(); i++){
//             for(int j=0; j<rotated[0].size(); j++){
//                 matrix[i][j] = rotated[i][j];
//             }
//         }
//     }
// };
//*T.C: O(n^2) + O(n^2)
//*S.C: O(n^2)

//*Optimal
class Solution{
    public:
        void rotateMatrix(vector<vector<int>>& matrix){
            int n = matrix.size();
            
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }

            for(int i=0; i<n; i++){
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
};
//*T.C: O(n^2)+O(n^2)
//*S.C: O(1)


int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr;
    for(int i=0; i<n; i++){
        vector<int> vec;
        for(int j=0; j<m; j++){
            int value;
            cin >> value;
            vec.push_back(value);
        }
        arr.push_back(vec);

    }

    Solution sol;
    sol.rotateMatrix(arr);

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
