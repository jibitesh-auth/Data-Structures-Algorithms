#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int sumOfFirstAndLast(vector<int>& nums){

            if(nums.empty()){
                return 0;
            }

            int sum = nums[0] + nums[nums.size() - 1];
            
            return sum;
        }
};

int main(){
    int size;
    cin >> size;
    vector<int> nums(size);
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    Solution solution;
    cout << solution.sumOfFirstAndLast(nums);

    return 0;

}