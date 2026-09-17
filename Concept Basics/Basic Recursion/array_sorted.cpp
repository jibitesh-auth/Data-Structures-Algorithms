#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isSorted(vector<int>& nums ){
            if(nums.empty()){
                return true;
            }
            return isSorted(nums,0);

        }
    private:
        bool isSorted(vector<int>& nums, int left){

            if(left == nums.size() -1 ){
                return true;
            }
            if(nums[left] > nums[left + 1]){
                return false;
            }


            return isSorted(nums,left+1);
        }
};

int main(){
    vector<int> vec;
    int x;
    while(cin >> x){
        vec.emplace_back(x);
    }
    Solution s;
    cout << s.isSorted(vec);


    return 0;
}

//*T.C: O(N)
//*S.C: O(N)