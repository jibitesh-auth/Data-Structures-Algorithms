#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void pattern14(int n){
            
            for(int i=0; i<n; i++){
                // char ch = 'A';
                for(char j='A'; j<='A'+i; j++){
                    cout << j ;
                    
                }
                cout << endl;


            }


            

        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern14(n);
    return 0;
}