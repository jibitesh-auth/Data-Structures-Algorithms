/*
Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order.

The sorting must be done in-place, without making a copy of the original array.

Example 1:
Input: nums = [1, 0, 2, 1, 0]

Output: [0, 0, 1, 1, 2]

Explanation:

The nums array in sorted order has 2 zeroes, 2 ones and 1 two

Example 2:
Input: nums = [0, 0, 1, 1, 1]

Output: [0, 0, 1, 1, 1]

Explanation:

The nums array in sorted order has 2 zeroes, 3 ones and zero twos
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution{
//     public:
//         void sortZeroOneTwo(vector<int>& nums){
//             sort(nums.begin(),nums.end());
//         }
// };

//*T.C: O(NlogN)
//*S.C: O(1)

//*Better
// class Solution{
//     public:
//         void sortZeroOneTwo(vector<int>& nums){
//             int cnt0 = 0,cnt1 = 0, cnt2 = 0;

//             for(int i=0; i<nums.size(); i++){
//                 if(nums[i] == 0) cnt0++;
//                 else if(nums[i]==1) cnt1++;
//                 else cnt2++;
//             }

//             for(int i=0; i<cnt0; i++) nums[i] = 0;
//             for(int i=cnt0;i<cnt0+cnt1; i++) nums[i] = 1;
//             for(int i=cnt0+cnt1;i<nums.size(); i++) nums[i] = 2;

//         }
// };
//*T.C: O(4*N)
//*S.C: O(1)

//*Optimal(Dutch National Flag Algorithm)

class Solution{
    public:
        void sortZeroOneTwo(vector<int>& nums){
            int low=0,mid=0,high=nums.size()-1;

            while(mid <= high){
                if(nums[mid] == 0){
                    swap(nums[low],nums[mid]);
                    low++,mid++;
                }
                else if(nums[mid] == 1){
                    mid++;
                }
                else{
                    swap(nums[mid],nums[high]);
                    high--;
                }
            }
        }
        
};
//*T.C: O(N)
//*S.C: O(1)

int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }

    Solution sol;
    sol.sortZeroOneTwo(nums);

    for(auto it: nums){
        cout << it << " ";
    }

    return 0;
}