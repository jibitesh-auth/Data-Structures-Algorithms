/*
Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

Example 1:
Input: nums = [1, 2, 3, 4, 5, 6], k = 2

Output: nums = [3, 4, 5, 6, 1, 2]

Explanation:

rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

*/

//*BRUTE
#include <bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//         void rotateArray(vector<int>& nums, int k){
//             int n = nums.size();
//             k = k % n;

//             vector<int> temp;
//             for(int i = 0; i<k ; i++){
//                 temp.push_back(nums[i]);
//             }
//             for(int i=k; i<n; i++){
//                 nums[i-k]=nums[i];
//             }
//             for(int i=n-k; i<n; i++){
//                 nums[i] = temp[i-(n-k)];
//             }

//         }
        
// };

// int main(){
//     vector<int> vec;
//     int k;
//     cin >> k;
//     int x;
//     while(cin >> x){
//         vec.push_back(x);
//     }
//     Solution sol;
//     sol.rotateArray(vec,k);
//     for(auto it: vec){
//         cout << it << " ";
//     }

//     return 0;
// }

//*T.C: O(n)
//*S.C: O(K)

//*OPTIMAL

class Solution{
    private:
        void reverseArray(vector<int>& nums, int start, int end){
            while(start < end){
                int temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;
                start++, end--;
            }

        }

    public:
        void rotateArray(vector<int>& nums, int k){
            int n = nums.size();
            k = k % n;
            reverseArray(nums,0,k-1);
            reverseArray(nums,k,n-1);
            reverseArray(nums,0,n-1);
        }
};

void printArray(vector<int> vec){
    for(auto it: vec){
        cout << it << " ";
    }
    cout << endl;

}


int main(){
    vector<int> vec;
    int k;
    cin >> k;
    int x;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution sol;
    sol.rotateArray(vec,k);
    printArray(vec);

    return 0;
}

//*T.C: O(N)  -> O(k), O(N-k) and O(N)
//*S.C: O(1)
