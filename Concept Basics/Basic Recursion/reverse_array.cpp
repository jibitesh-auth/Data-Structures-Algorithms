/*
Given an array nums of n integers, return reverse of the array.

Example 1:
Input : nums = [1, 2, 3, 4, 5]

Output : [5, 4, 3, 2, 1]

Example 2:
Input : nums = [1, 3, 3, 3, 5]

Output : [5, 3, 3, 3, 1]
*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> reverseArray(vector<int>& nums){
            reverse(nums,0,nums.size()-1);
            return nums;
        }

    private:
        void reverse(vector<int>& nums, int left, int right){
            if(left >= right){
                return;
            }
            swap(nums[left],nums[right]);
            reverse(nums,left+1,right-1);
        }
};

int main(){
    vector<int> vec;
    int x;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution sol;
    for(auto it: sol.reverseArray(vec)){
        cout << it << " ";
    }


    return 0;
}
//*T.C: O(N/2)
//*S.C: O(N/2)