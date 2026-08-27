// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int mostFrequentElement(int arr[],int n){
//             int maxi = 0;
//             for(int i=0; i<n; i++){
//                 maxi = max(maxi, arr[i]);

//             }
//             int vis[maxi+1] = {0};
//             int maxcnt = 0,el=-1;
//             for(int i=0; i<n; i++){
//                 int cnt = 0;
//                 if(vis[arr[i]] == 0){
//                     vis[arr[i]] = 1;
//                     for(int j=0; j<n; j++){
//                         if(arr[i] == arr[j]){
//                             cnt++;
//                         }

//                     }
//                     if(cnt > maxcnt){
//                         maxcnt = cnt;
//                         el = arr[i];
//                     }
//                     else if(cnt == maxcnt && arr[i] < el){
//                         el = arr[i];

//                     }
//                 }

//             }
//             return el;

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
//     cout << s.mostFrequentElement(arr,n);

//     return 0;
    
// }

//*T.C: O(N2)
//*S.C: O(10^6)

//---------------X-------------

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int mostFrequentElement(int arr[],int n){
            int maxi = 0;
            for(int i=0; i<n; i++){
                maxi = max(maxi, arr[i]);

            }
            int hash[maxi+1] = {0};

            for(int i =0; i<n; i++){
                hash[arr[i]]++;
            }
            int maxcnt =0,el=-1;
            for(int i=0; i<=maxi; i++){
                if(hash[i] > maxcnt){
                    maxcnt = hash[i];
                    el = i;
                }
            }
            return el;
           

        }
};

//*Note: In precomputation our index is sorted

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Solution s;
    cout << s.mostFrequentElement(arr,n);

    return 0;
    
}
//*T.C: O(N)
//*S.C: O(maxi)