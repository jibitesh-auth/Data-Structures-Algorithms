#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void pattern15(int n){
            for(int i=0; i<n; i++){
                for(char j='A';j <'A'+(n-i); j++){
                    cout << j;
                }
                cout << endl;
            }

        }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern15(n);
    return 0;
}