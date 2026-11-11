/*
Given an M * N matrix, print the elements in a clockwise spiral manner.

Return an array with the elements in the order of their appearance when printed in a spiral manner.

Example 1:
Input: matrix = [[1, 2, 3], [4 ,5 ,6], [7, 8, 9]]

Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]

Explanation:

The elements in the spiral order are 1, 2, 3 -> 6, 9 -> 8, 7 -> 4, 5

Example 2:
Input: matrix = [[1, 2, 3, 4], [5, 6, 7, 8]]

Output: [1, 2, 3, 4, 8, 7, 6, 5]

Explanation:

The elements in the spiral order are 1, 2, 3, 4 -> 8, 7, 6, 5
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> spiralOrder(vector<vector<int>> & matrix){
            vector<int> ans;
            int n = matrix.size();
            int m = matrix[0].size();
            int top = 0,left = 0;
            int bottom = n-1, right = m-1;

            while(top <= bottom && left <= right){
                for(int i=left; i<= right; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
                for(int i=top; i<=bottom; i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
                if(top <= bottom){
                  for(int i=right; i>=left; i--){
                      ans.push_back(matrix[bottom][i]);

                  }
                  bottom--;
                }
                if(left <= right){
                  for(int i=bottom; i>=top; i--){
                      ans.push_back(matrix[i][left]);
                  }
                  left++;
                }

            }
            return ans;

        }
};

int main(){
    vector<vector<int>> vec;
    int row, col;
    cin >> row >> col;

    for(int i=0; i<row; i++){
        vector<int> currentRow;
        for(int j=0; j<col; j++){
            int val;
            cin >> val;
            currentRow.push_back(val);
        }
        vec.push_back(currentRow);
    }
    Solution sol;
    for(auto it: sol.spiralOrder(vec)){
        cout << it << " ";
    }

    return 0;
}

//*T.C: O(NxM)
//*S.C: O(1) -> Solving, O(N) -> Display