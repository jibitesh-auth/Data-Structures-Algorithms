/*
Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

Example 1:
Input: nums = [1, 2, 1, 1, 3, 2]

Output: [1]

Explanation:

Here, n / 3 = 6 / 3 = 2.

Therefore the elements appearing 3 or more times is : [1]

Example 2:
Input: nums = [1, 2, 1, 1, 3, 2, 2]

Output: [1, 2]

Explanation:

Here, n / 3 = 7 / 3 = 2.

Therefore the elements appearing 3 or more times is : [1, 2]
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution{
//     public:
//         vector<int> majorityElement(vector<int>& nums){
//             int n = nums.size();
//             vector<int> result;

//             for(int i=0; i<n; i++){
//                 if(result.size() == 0 || result[0] != nums[i] ){
//                     int cnt = 0;
//                     for(int j=0; j<n; j++){
//                         if(nums[j] == nums[i]){
//                             cnt++;
//                         }
//                     }
//                     if(cnt > (n/3)){
//                         result.push_back(nums[i]);
//                     }

//                 }
//                 if(result.size() == 2) break;
//             }

//             return result;

            
//         }
// };
//*T.C: O(N^2)
//*S.C: O(1)

//*Better
// class Solution{
//     public:
//         vector<int> majorityElement(vector<int>& nums){
//             int n = nums.size();
//             vector<int> result;

//             unordered_map<int,int> mpp;
//             int mini = int(n/3)+1;
//             for(int i=0; i<n; i++){
//                 mpp[nums[i]]++;
//                 if(mpp[nums[i]] == mini){
//                     result.push_back(nums[i]);
//                 }
//                 if(result.size() == 2){
//                     break;
//                 }
//             }

//             return result;
//         }
// };
//*T.C: O(N) -> Unordered_Map(O(1))
//*S.C: O(N)

//*Optimal
class Solution{
    public:
        vector<int> majorityElement(vector<int>& nums){
            int n = nums.size();
            int cnt1=0,cnt2=0;
            int el1 = INT_MIN, el2= INT_MIN;

            for(int i=0; i<n; i++){
                if(cnt1 == 0 && nums[i] != el2){
                    cnt1 = 1;
                    el1 = nums[i];
                }
                else if(cnt2 == 0 && nums[i] != el1){
                    cnt2 = 1;
                    el2 = nums[i];
                }
                else if(nums[i] == el1){
                    cnt1++;
                }
                else if(nums[i] == el2){
                    cnt2++;
                }
                else{
                    cnt1--,cnt2--;
                }
            }
            cnt1 = 0, cnt2 = 0;
            for(int i=0; i<n; i++){
                if(nums[i] == el1){
                    cnt1++;
                }
                if(nums[i] == el2){
                    cnt2++;
                }
            }

            int mini = n/3+1;
            vector<int> ans;
            if(cnt1 >= mini){
                ans.push_back(el1);
            }
            if(cnt2 >= mini){
                ans.push_back(el2);
            }

            return ans;

        }

};
//*T.C: O(N)+O(N)
//*S.C: O(1)

int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    Solution sol;
    for(auto it: sol.majorityElement(nums)){
        cout << it << " ";
    }


    return 0;
}