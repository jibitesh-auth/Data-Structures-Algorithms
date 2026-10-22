/*
Given an array of integers nums, return the value of the largest element in the array

Example 1:
Input: nums = [3, 3, 6, 1]

Output: 6

Explanation: The largest element in array is 6

Example 2:
Input: nums = [3, 3, 0, 99, -40]

Output: 99

Explanation: The largest element in array is 99
*/


#include <bits/stdc++.h>
using namespace std;

//*BRUTE

// class Solution{
//     public:
//         int largestElement(vector<int>& vec){
//             sort(vec.begin(),vec.end());

//             int largest = vec[vec.size()-1];
//             return largest;
//         }
// };
//*T.C:O(N*LogN)
//*S.C:O(logN)

//*Optimal

class Solution{
    public:
        int largestElement(vector<int>& vec){
            int largest = vec[0];
            for(int i=1; i<vec.size(); i++){
                if(vec[i] > largest){
                    largest = vec[i];
                }
            }
            return largest;

        }
};

//*T.C: O(N)
//*S.C: O(1)



int main(){
    vector<int> vec;
    int x;
    while (cin >> x){
        vec.push_back(x);
    }
    
    Solution sol;
    cout << sol.largestElement(vec);
    return 0;


}