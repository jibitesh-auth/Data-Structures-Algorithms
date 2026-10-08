#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> bubbleSort(vector<int>& nums){
            int n = nums.size();
            for(int i=n-1; i>=0; i--){
                bool didSwap = false;
                for(int j=0;j<i; j++){
                    if(nums[j] > nums[j+1]){
                        swap(nums[j],nums[j+1]);
                        didSwap = true;
                    }

                }
                if(!didSwap){
                    break;
                }

            }
            return nums;
        }
};

int main(){
    vector<int> num;
    int x;
    while(cin >> x){
        num.push_back(x);
    }
    Solution sol;
    for(auto it: sol.bubbleSort(num)){
        cout << it << " ";
    }
    return 0;

}

//*T.C: O(N^2)
//*S.C: O(1)