/*
Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [2, 3, 5, -2, 7, -4]

Output: 15

Explanation:

The subarray from index 0 to index 4 has the largest sum = 15

Example 2:
Input: nums = [-2, -3, -7, -2, -10, -4]

Output: -2

Explanation:

The element on index 0 or index 3 make up the largest sum when taken as a subarray
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
class Solution{
    public:
        int maxSubArray(vector<int>& nums){
            int maxi = INT_MIN;
            int n = nums.size();

            for(int i=0; i<n; i++){
                for(int j=i; j<n; j++){
                    int sum = 0;
                    for(int k=i; k<=j; k++){
                        sum+=nums[k];
                        maxi = max(maxi,sum);
                    }
                }
            }

            return maxi;
        }

};
//*T.C: O(N^3)
//*S.C: O(1)

//*Better
class Solution{
    public:
        int maxSubArray(vector<int>& nums){
            int maxi = INT_MIN;
            int n = nums.size();
            for(int i=0; i<n; i++){
                int sum=0;
                for(int j=i; j<n; j++){
                    sum+=nums[j];
                    maxi = max(maxi,sum);
                }
            }
        }
};
//*T.C: O(n^2)
//*S.C: O(1)


int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    Solution sol;
    cout << sol.maxSubArray(nums);

    return 0;
}