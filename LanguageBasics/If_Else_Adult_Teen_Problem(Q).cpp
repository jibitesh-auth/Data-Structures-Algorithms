// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//       void check(int age){
//         cin >> age;
//         if(age >= 18){
//             cout <<"Adult" <<endl;

//         }
//         else{
//             cout <<"Teen" << endl;
//         }
//       }

// };

// int main(){
//     Solution s;
//     int age;
//     s.check(age);
//     return 0;

// }


//--------------------------x------------------------------------

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
      void check(int age){
        if(age >= 18){
            cout <<"Adult" <<endl;

        }
        else{
            cout <<"Teen" << endl;
        }
      }

};

int main(){
    int age;
    cin >> age;
    Solution s;
    s.check(age);
    return 0;

}