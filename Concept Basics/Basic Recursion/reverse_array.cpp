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