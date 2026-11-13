/*
Given an integer n, return the first n (1-Indexed) rows of Pascal's triangle.

In Pascal's triangle:

The first row has one element with a value of 1.
Each row has one more element in it than its previous row.
The value of each element is equal to the sum of the elements directly above it when arranged in a triangle format.

Example 1:
Input: n = 4

Output: [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1]]

Explanation: The Pascal's Triangle is as follows:

1
1 1
1 2 1
1 3 3 1

1st Row has its value set to 1.

All other cells take their value as the sum of the values directly above them

Example 2:
Input: n = 5

Output: [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1], [1, 4, 6, 4, 1]]

Explanation: The Pascal's Triangle is as follows:

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

1st Row has its value set to 1.

All other cells take their value as the sum of the values directly above them
*/

//*Brute Approach
/*
vector<int> ans;
for(i = 1 to r){
    temp[];
    for(j = 1 to i){
        temp.add(nCr(i-1,j-1));
    }
    ans.add(temp);
}
//*T.C: O(N^3)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<vector<int>> pascalTriangleIII(int n){
            vector<vector<int>> pascalTriangle;
            for(int row=1; row<=n; row++){
                pascalTriangle.push_back(generateRow(row));
            }
            return pascalTriangle;

        }

    private:
        vector<int> generateRow(int row){
            vector<int> ansRow;
            long long ans = 1;
            ansRow.push_back(1);

            for(int col=1; col<row; col++){
                ans = ans * (row - col);
                ans = ans/col;
                ansRow.push_back(ans);
            }
            return ansRow;
        }
};
//*T.C: O(N^2)
//*S.C: O(N) -> Solving, O(N^2) -> Display(Total)

int main(){
    int n;
    cin >> n;
    Solution sol;
    vector<vector<int>> ans = sol.pascalTriangleIII(n);

    for(auto row: ans){
        for(auto element: row){
            cout << element << " ";

        }
        cout << endl;
    }

    return 0;
}