#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> insertionSort(vector<int>& nums){
            insertionSortHelper(nums,nums.size());
            return nums;

        }
        void insertionSortHelper(vector<int>& nums, int n){
            if(n<=1){
                return;
            }
            insertionSortHelper(nums,n-1);
            int last = nums[n-1];
            int j = n-2;
            while(j>=0 && nums[j] > last){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = last;
        }
};

int main(){
    Solution sol;
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    for(auto it: sol.insertionSort(nums)){
        cout << it << " ";
    }
    return 0;

}

//*T.C: O(N^2)
//*S.C: O(N)