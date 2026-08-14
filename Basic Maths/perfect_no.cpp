#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // bool isPerfect(int n){
        //     int sum = 0;
        //     int org = n;
        //     for(int i = 1; i<n; i++){
        //         if(n%i == 0){
        //             sum += i;
        //         }

        //     }
            
        //     if(sum == org){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
        // }

        //*OR
        bool isPerfect(int n){
            if(n <=1) return false;
            int sum = 0;
            for(int i=1; i<=sqrt(n); i++){
        //  for(int i=1; i*i<=n; i++){
                if(n % i == 0){
                    sum+=i;
                    if(i != n/i){
                        sum += (n/i);
                    }
                }
            }
            return sum == n;




        }

};

int main(){
    int n;
    cin >> n;
    Solution s;
    if(s.isPerfect(n)){
        cout << "Yes, Perfect No";
    }
    else{
        cout << "No, Not Perfect No";
    }
    return 0;

}

//*T.C: O(sqrt(N))
//*S.C: O(1)