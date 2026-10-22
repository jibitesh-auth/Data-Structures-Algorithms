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

class Solution{
    public:
        int secondLargestElement(vector<int>& nums){
            int n = nums.size();
            if(n<2){
                return -1;
            }

            int largest = INT_MIN, secondLargest = INT_MIN;

            for(int i=0; i<n; i++){
                // if(nums[i] > largest){
                //     largest = nums[i];
                // }
                largest = max(largest,nums[i]);

            }

            for(int i=0; i<n; i++){
                if(nums[i] > secondLargest && nums[i] != largest){
                    secondLargest = nums[i];
                }
            }

            return secondLargest == INT_MIN ? -1:secondLargest;


        }
};



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

