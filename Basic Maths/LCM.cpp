// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int LCM(int n1, int n2){
//             int i = 1;
//             int max1 = max(n1,n2);
//             do{
//                 int multiple = i * max1;
//                 if(multiple % n1 == 0 && multiple % n2 == 0){
//                     return multiple;
//                 }
//                 i = i+1;
//             }while(1);


//         }
// };

// int main(){
//     int n1, n2;
//     cin >> n1 >> n2;
//     Solution s;
//     cout << s.LCM(n1,n2);
//     return 0;


// }

//*T.C: O(min(n1,n2)) 
//min(n1,n2) : gives no of iteration(operation)
//*S.C: O(1)


//*OR
#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
        int GCD(int n1, int n2){
            while(n2 != 0){
                int r = n1 % n2;
                n1 = n2;
                n2 = r;
            }
            return n1;
        }
    public:
        int LCM(int n1,int n2){
            return (n1*n2)/GCD(n1,n2);
        }

};

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    Solution s;
    cout << s.LCM(n1,n2);
    return 0;
}

//*T.C: O(log(min(n1,n2)))
//*S.C: O(1)



