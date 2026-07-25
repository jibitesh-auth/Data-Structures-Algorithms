#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static void pattern2(int n){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    cout << "*";
                }
                cout << endl;
            }


        }
};

int main(){
    int n;
    cin >> n;
    // Solution s;
    Solution::pattern2(n);
    return 0;


    //*Note:
    //If we are using static then we need to use ::(scope resolution) to call the function without object
}