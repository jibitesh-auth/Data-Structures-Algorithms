// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         bool arraySortedOrNot(int arr[], int n){
//             for(int i = 1; i<n; i++){
//                 if(arr[i-1] > arr[i]){
//                     return false;
//                 }
//             }
//             return true;
//         }
// };

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     Solution s;
//     bool res = s.arraySortedOrNot(arr,n);
//     if(res){
//         cout << "Sorted";
//     }
//     else{
//         cout << "Not Sorted";
//     }
//     return 0;
// }
//*T.C: O(N)
//*S.C: O(1)

//--------------x------------
//*OR

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool arraySortedOrNot(int arr[], int n){
            for(int i = 0; i<n-1; i++){
                for(int j = i+1; j<n; j++){
                    if(arr[i] > arr[j]){
                    return false;
                }
            }
        }
            return true;
    }
};


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Solution s;
    bool res = s.arraySortedOrNot(arr,n);
    if(res){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
    return 0;
}

//*T.C: O(N^2)
//*S.C: O(1)

