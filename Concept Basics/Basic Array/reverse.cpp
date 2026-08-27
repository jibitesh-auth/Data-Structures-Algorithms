// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
        // void reverse(int arr[], int n){
        //     int temp[n];
        //     for(int i =n-1; i>=0; i--){
        //       temp[n-i -1] = arr[i];
        //     }

        //     for(int i=0; i<n; i++){
        //         arr[i] = temp[i];
        //     }

        //     for(int i=0; i<n; i++){
        //         cout << arr[i] << " ";
        //     }

        // }
// };

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     Solution s;
//     s.reverse(arr,n);
//     return 0;
// }

//*T.C: O(N)
//*S.C: O(1)

//--------------------------x-----------------------------
//*OR
//*2 Pointer approach

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverse(int arr[], int n){
//             int left = 0, right = n-1;
//             while(left < right){
//                 swap(arr[left],arr[right]);
                 /*
                    int temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp
                 */
//                 left++;
//                 right--;
//             }

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
//     s.reverse(arr,n);
//     return 0;
// }

//*T.C: O(N)
//*S.C: O(1)

//---------------------x-----------------------------------

//*OR

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverse(int arr[], int n){
//              for(int i=0; i<n/2; i++){
//                  swap(arr[i],arr[n-i-1]);
//              }
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
//     s.reverse(arr,n);
//     return 0;
// }

//*T.C: O(N)
//*S.C: O(1)

