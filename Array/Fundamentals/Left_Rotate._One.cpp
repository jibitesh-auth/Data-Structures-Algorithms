/*
Given an integer array nums, rotate the array to the left by one.

Note: There is no need to return anything, just modify the given array.

Example 1:
Input: nums = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation:

Initially, nums = [1, 2, 3, 4, 5]

Rotating once to left -> nums = [2, 3, 4, 5, 1]

Example 2:
Input: nums = [-1, 0, 3, 6]

Output: [0, 3, 6, -1]

Explanation:

Initially, nums = [-1, 0, 3, 6]

Rotating once to left -> nums = [0, 3, 6, -1]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void rotateArrayByOne(vector<int>& nums){
            int temp = nums[0];
            for(int i=1; i<nums.size(); i++){
                nums[i-1] = nums[i];
            }
            nums[nums.size()-1] = temp;
        }
};

int main(){
    int x;
    vector<int> vec;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution sol;
    sol.rotateArrayByOne(vec);

    for(auto it: vec){
        cout << it << " ";

    }
    return 0;
}

//*T.C: O(N)
//*S.C: O(1)