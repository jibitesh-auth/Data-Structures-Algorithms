/*
Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.

Example 1:
Input: n = 5, arr = [1,2,3,4,5]

Output: True

Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

Example 2:
Input: n = 5, arr = [5,4,6,7,8]

Output: False

Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False. Here element 5 is not smaller than or equal to its future elements.
*/

//*----------------------------x-----------------------------------------------


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

