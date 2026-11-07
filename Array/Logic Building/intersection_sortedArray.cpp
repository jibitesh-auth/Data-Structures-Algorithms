#include <bits/stdc++.h>
using namespace std;

//*Brute
class Solution{
    public:
        vector<int> intersectionArray(vector<int>& num1, vector<int>& num2){
            vector<int> ans;
            vector<int> visited(num2.size(),0);

            for(int i = 0; i<num1.size(); i++){
                for(int j=0; j<num2.size(); j++){
                    if(num1[i] == num2[j] && visited[j] == 0){
                        ans.push_back(num2[j]);

                        visited[j] = 1;
                        break;

                    }
                    else if(num1[i] < num2[j]){
                        break;
                    }
                }
            }

            return ans;
        }


};

//*T.C: O(MxN)
//*S.C: O(N)

int main(){
    vector<int> num1,num2;
    int x;
    int y;
    cin >> x;
    cin >> y;
    for(int i=0; i<x; i++){
        int val;
        cin >> val;
        num1.push_back(val);
    }
    for(int i=0; i<y; i++){
        int val1;
        cin >> val1;
        num2.push_back(val1);
    }

    Solution sol;
    for(auto it: sol.intersectionArray(num1,num2)){
        cout << it << " ";
    }

    return 0;
}