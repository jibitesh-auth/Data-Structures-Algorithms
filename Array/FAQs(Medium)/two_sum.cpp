/*
Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.

Example 1:
Input: nums = [1, 6, 2, 10, 3], target = 7

Output: [0, 1]

Explanation:

nums[0] + nums[1] = 1 + 6 = 7

Example 2:
Input: nums = [1, 3, 5, -7, 6, -3], target = 0

Output: [1, 5]

Explanation:

nums[1] + nums[5] = 3 + (-3) = 0
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution{
//     public:
//         vector<int> twoSum(vector<int>& nums, int target){
//             vector<int> ans;
//             int n = nums.size();
//             for(int i=0; i<n; i++){
//                 for(int j=i+1; j<n; j++){
//                     if(nums[i] + nums[j] == target){
//                         ans.push_back(i);
//                         ans.push_back(j);
//                         return ans;

//                     }

//                 }
//             }
//             return {-1,-1};
//         }

// };

//*T.C: O(n^2)
//*S.C: O(n) -> display, O(1) -> solving

//*Better
// class Solution{
//     public:
//     vector<int> twoSum(vector<int>& nums, int target){
//         unordered_map<int,int> mpp;
//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             int num = nums[i];
//             int moreNeeded = target - num;
//             if(mpp.find(moreNeeded) != mpp.end()){
//                 return {mpp[moreNeeded],i};
//             }
//             mpp[num] = i;

//         }
//         return {-1,-1};

//     }
// };

//*T.C: O(N)
//if ordered map -> worst complexity: O(Nlogn)
//if unordered map worst complexity: O(N^2)
//*S.C: O(N)

//*Optimal
class Solution{
    public:
        vector<int> twoSum(vector<int>& nums,int target){
            int n = nums.size();
            vector<int> ans;

            vector<vector<int>> eleIndex;
            for(int i=0; i<n; i++){
                eleIndex.push_back({nums[i],i});
            }

            sort(eleIndex.begin(),eleIndex.end(),[](const vector<int>& a, const vector<int>& b) {
                return a[0] < b[0];

            });
            int left =0, right=n-1;
            while(left < right){
                int sum= eleIndex[left][0] + eleIndex[right][0];

                if(sum == target){
                    ans.push_back(eleIndex[left][1]);
                    ans.push_back(eleIndex[right][1]);
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }


            return {-1,-1};


        }
};

//*T.C: O(N)+O(NlogN)
//*S.C: O(N) -> as column only 2


int main(){
    vector<int> vec;
    int target;
    cin >> target;
    int x;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution sol;
    for(auto it: sol.twoSum(vec,target)){
        cout << it << " ";
    }

    return 0;
}