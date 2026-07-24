#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printX(int X, int N){
            if(N == 0){
                cout << endl;
            }
            for(int i=1; i<=N; i++){

                cout << X;
                if(i != N){
                    cout << " ";
                }

            }
            cout << endl;
        }
};

int main(){
    int X,N;
    cin >> X >> N;
    Solution s;
    s.printX(X,N);

    return 0;
    
}