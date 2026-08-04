#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void pattern12(int n){
            
        //   for(int i=1; i<=n; i++){
        //     for(int j=1; j<=i; j++){
        //         cout << j;
        //     }
        //     for(int j =1;j<=2*(n-i); j++){
        //         cout << " ";
        //     }
        //     for(int j=i; j>=1; j--){
        //         cout << j;

        //     }
        //     cout <<endl;
        //   }



        for(int i =1; i<=n; i++){
            // int x = i;
            for(int j=1; j<=2*n; j++){
               
                if(j <= i){
                    cout << j;
                }
                else if(j <= 2*n -i){
                    cout << " ";
                }
                else{
                    // cout << x;
                    // x--;
                    cout << 2*n-j+1;
                }
                

            }
            cout << endl;
        }

        }

};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern12(n);
    return 0;
}

//T.C: O(N^2)
//S.C: O(1)