/*
Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

a, b, c, d are all distinct valid indices of nums.
nums[a] + nums[b] + nums[c] + nums[d] == target.
Notice that the solution set must not contain duplicate quadruplets. One element can be a part of multiple quadruplets. The output and the quadruplets can be returned in any order.

Example 1:
Input: nums = [1, -2, 3, 5, 7, 9], target = 7

Output: [[-2, 1, 3, 5]]

Explanation:

nums[1] + nums[0] + nums[2] + nums[3] = 7

Example 2:
Input: nums = [7, -7, 1, 2, 14, 3], target = 9

Output: []

Explanation:

No quadruplets are present which add upto 9
*/

#include <bits/stdc++.h>
using namespace std;

//*Brute
// class Solution{
//     public:
//         vector<vector<int>> fourSum(vector<int>& nums, int target){
//             int n = nums.size();
//             set<vector<int>> st;

//             for(int i=0; i<n; i++){
//                 for(int j=i+1; j<n; j++){
//                     for(int k=j+1; k<n; k++){
//                         for(int l=k+1;l<n; l++){
//                             long long sum = (long long)nums[i]+nums[j] + nums[k] + nums[l];

//                             if(sum == target){
//                                 vector<int> temp = {nums[i],nums[j],nums[k], nums[l]};
//                                 sort(temp.begin(),temp.end());
//                                 st.insert(temp);


//                             }


//                         }
//                     }
//                 }
//             }
//             vector<vector<int>> ans(st.begin(),st.end());
//             return ans;
//         }
// };
//*T.C: O(n^4)
//*S.C: O(2*no of quadruplets)

//*Better
// class Solution{
//     public:
//         vector<vector<int>> fourSum(vector<int>& nums, int target){
//             int n = nums.size();
//             set<vector<int>> st;
//             for(int i=0; i<n; i++){
//                 for(int j=i+1; j<n; j++){
//                     set<long long> hashset;
//                     for(int k=j+1; k<n; k++){
//                         long long sum = nums[i] + nums[j];
//                         sum+=nums[k];
//                         long long fourth = target - sum;

//                         if(hashset.find(fourth) != hashset.end()){
//                             vector<int> temp = {nums[i],nums[j],nums[k],fourth};

//                             sort(temp.begin(),temp.end());

//                             st.insert(temp);

//                         }
//                         hashset.insert(nums[k]);
//                     }
                    

//                 }
//             }
//             vector<vector<int>> ans(st.begin(),st.end());
//             return ans;
//         }
// };
//*T.C: O(n^3 * log(M)) 
// M-> no of elements in the set
//*S.C: O(2 * no of the quadruplets) + O(N)

//*Optimal
class Solution{
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target){
            vector<vector<int>> ans;

            int n = nums.size();
            sort(nums.begin(),nums.end());
            for(int i=0; i<n; i++){
                if(i > 0 && nums[i-1] == nums[i]){
                    continue;
                }

                for(int j=i+1; j<n; j++){
                    if(j>i+1 && nums[j-1] == nums[j]){
                        continue;
                    }

                    int k= j+1;
                    int l = n-1;
                    while(k<l){
                        long long sum = nums[i] + nums[j] + nums[k] + nums[l];

                        if(sum == target){
                            vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                            ans.push_back(temp);

                            k++;
                            l--;
                            while(k<l && nums[k-1] == nums[k]) k++;
                            while(k<l && nums[l] == nums[l+1]) l--;
                        }
                        else if(sum < target){
                            k++;
                        }
                        else{
                            l--;
                        }
                    }
                }

            }
            return ans;
            

        }
};
//*T.C: O(N^3)
//*S.C: O(N) -> Display, O(1) -> Solving

int main(){
    vector<int> nums;
    int target;
    cin >> target;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    Solution sol;
    vector<vector<int>> ans = sol.fourSum(nums,target);

    for(auto& it: ans){
        cout<< "[";
        for(auto& ele: it){
            cout << ele << " ";
        }
        cout << "]";
    }
    cout << endl;
}