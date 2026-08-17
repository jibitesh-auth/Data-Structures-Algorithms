#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int LCM(int n1, int n2){
            int i = 1;
            int max1 = max(n1,n2);
            do{
                int multiple = i * max1;
                if(multiple % n1 == 0 && multiple % n2 == 0){
                    return multiple;
                }
                i = i+1;
            }while(1);


        }
};

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    Solution s;
    cout << s.LCM(n1,n2);
    return 0;


}