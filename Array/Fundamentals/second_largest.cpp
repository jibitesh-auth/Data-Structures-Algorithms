/*
Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

Example 1:
Input: nums = [8, 8, 7, 6, 5]

Output: 7

Explanation:

The largest value in nums is 8, the second largest is 7

Example 2:
Input: nums = [10, 10, 10, 10, 10]

Output: -1

Explanation:

The only value in nums is 10, so there is no second largest value, thus -1 is returned
*/


#include <bits/stdc++.h>
using namespace std;

//*BRUTE
// class Solution{
//     public:
//         int secondLargestElement(vector<int>& nums){
//             int n = nums.size();
//             if(n<2){
//                 return -1;
//             }
//             sort(nums.begin(),nums.end());
//             int largest = nums.back();

//             int secondLargest = -1;

//             for(int i= n-2; i>=0; i--){
//                 if(nums[i] != largest){
//                     secondLargest = nums[i];
//                     break;
//                 }

//             }
//             return secondLargest;

//         }
// };
//*T.C: O(NlogN)
//*S.C: O(logN)


//*BETTER

// class Solution{
//     public:
//         int secondLargestElement(vector<int>& nums){
//             int n = nums.size();
//             if(n<2){
//                 return -1;
//             }

//             int largest = INT_MIN, secondLargest = INT_MIN;

//             for(int i=0; i<n; i++){
//                  if(nums[i] > largest){
//                      largest = nums[i];
//                  }
//                 largest = max(largest,nums[i]);

//             }

//             for(int i=0; i<n; i++){
//                 if(nums[i] > secondLargest && nums[i] != largest){
//                     secondLargest = nums[i];
//                 }
//             }

//             return secondLargest == INT_MIN ? -1:secondLargest;


//         }
// };
//*T.C: O(2n) -> O(n)
//*S.C: O(1)

//*OPTIMAL

class Solution{
    public:
        int secondLargestElement(vector<int>& nums){
            int n = nums.size();
            if(nums.size() < 2){
                return -1;
            }
            int large = INT_MIN;
            int second_large = INT_MIN;

            for(int i=0; i<nums.size(); i++){
                if(nums[i] > large){
                    second_large = large;
                    large = nums[i];
                }
                else if(nums[i] > second_large && nums[i] != large){
                    second_large = nums[i];
                }

            }
            return second_large == INT_MIN ? -1:second_large;

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
    cout << sol.secondLargestElement(nums);
    return 0;
}

