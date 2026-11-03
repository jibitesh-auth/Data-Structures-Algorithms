#include <bits/stdc++.h>
using namespace std;

//*Optimal-1
// class Solution{
//     public:
//         int missingNumber(vector<int>& vec){
//             int sum = accumulate(vec.begin(), vec.end(),0);

//             int n = vec.size();
//             int x = (n*(n+1))/2;
//             return x - sum;

//         }
// };
//*T.C: O(N)
//*S.C: O(1)

//*Brute
// class Solution{
//     public:
//         int missingNumber(vector<int> nums){
//             int n = nums.size();
//             for(int i=0; i<=n; i++){
//                 int flag = 0;
//                 for(int j=0; j<n; j++){
//                     if(nums[j] == i){
//                         flag = 1;
//                         break;
//                     }
                    
//                 }
//                 if(flag == 0){
//                     return i;
//                 }
//             }
//             return -1;
//         }
// };
//*T.C: O(N^2)
//*S.C: O(1)

//*Better
// class Solution{
//     public:
//         int missingNumber(vector<int>& nums){
//             int n = nums.size();
//             int freq[n+1] = {0};
//             for(int num: nums){
//                 freq[num]++;
//             }

//             for(int i=0; i<n; i++){
//                 if(freq[i] == 0){
//                     return i;
//                 }
//             }

//             return -1;
//         }
// };
//*T.C: O(N) + O(N) = O(2N)
//*S.C: O(N)


//*Optimal-2
class Solution{
    public:
        int missingNumber(vector<int>& nums){
            int xor1 = 0, xor2 = 0;
            for(int i=0; i<nums.size(); i++){
                xor1 = xor1 ^ (i+1);
                xor2 = xor2 ^ nums[i];

            }
            return (xor1 ^ xor2);

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
    cout << sol.missingNumber(nums);

    return 0;
}