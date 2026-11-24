#include <bits/stdc++.h>
using namespace std;

//*Brute
class Solution{
    public:
        vector<int> findMissingRepeatingNumbers(vector<int>& nums){
            int n = nums.size();
            int repeating =-1,missing = -1;
            for(int i=1; i<=n; i++){
                int cnt=0;
                for(int j=0; j<n; j++){
                    if(i == nums[j]){
                        cnt++;
                    }
                }
                if(cnt == 2) repeating=i;
                else if(cnt == 0) missing = i;

                if(repeating != -1 && missing != -1) break;

            }

            return {repeating,missing};

        }

};

int main(){
    vector<int> ans;
    int x;
    while(cin >> x){
        ans.push_back(x);
    }
    Solution sol;
    for(auto it: sol.findMissingRepeatingNumbers(ans)){
        cout << it << " ";
    }

    return 0;
}