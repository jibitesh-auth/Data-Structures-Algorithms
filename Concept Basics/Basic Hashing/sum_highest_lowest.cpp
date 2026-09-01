
//*OPTIMAL
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int mostFrequentElement(vector<int> &nums){
//             unordered_map<int,int> mpp;
//             for(auto it:nums){
//                 mpp[it]++;
//             }
//             int maxcnt = 0;

//             for(auto it: mpp){
//                 int ele = it.first;
//                 int freq = it.second;

//                 if(freq > maxcnt){
//                     maxcnt = freq;
//                 }

//             }
//             return maxcnt;

//         }
//         int minFrequentElement(vector<int> &nums){
//             unordered_map<int,int> mpp;
//             int n = nums.size();
//             for(auto it:nums){
//                 mpp[it]++;
//             }
//             int mincnt = n;

//             for(auto it: mpp){
//                 int ele = it.first;
//                 int freq = it.second;

//                 if(freq < mincnt){
//                     mincnt = freq;
//                 }

//             }
//             return mincnt;

//         }
        
// };

// int main(){
//     int n,x;
//     cin >> n;
//     vector <int> nums;
//     for(int i=0; i<n; i++){
//          cin >> x;
//          nums.push_back(x);
//     }
//     Solution s1;
//     int a = s1.mostFrequentElement(nums);
//     int b = s1.minFrequentElement(nums);
//     cout << a+b;

//     return 0;

    
// }
//*T.C: O(N)
//*S.C: O(N)
//-------------------------------------------X--------------------------------------------------------------
//*Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int sum_highest_lowest(vector<int> vec){
//             int n = vec.size();
//             vector<bool> vis(n,false);
//             int maxFreq = 0, minFreq = n;
//             for(int i=0; i<n; i++){
//                 if(vis[i]){
//                     continue;
//                 }
//                 int Freq = 0;
//                 for(int j=0; j<n; j++){
//                     if(vec[i] == vec[j]){
//                         Freq++;
//                         vis[j] = true;
//                     }

//                 }
//                 maxFreq = max(Freq,maxFreq);
//                 minFreq = min(Freq,minFreq);



//             }
//             return minFreq+maxFreq;
//         }
// };

// int main(){
//     int n;
//     cin >> n;
//     vector<int> vec;
//     int x;
//     for(int i=0; i<n; i++){
//         cin >> x;
//         vec.push_back(x);

//     }

//     Solution s;
//     cout << s.sum_highest_lowest(vec);
//     return 0;
// }

//*T.C: O(N^2)
//*S.C: O(N)

//-----------------------------x--------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
//      int sumHighestAndLowestFrequency(vector<int> &nums){
//         int n=nums.size();
//         int maxFreq=0;
//         int minFreq=n;
//         unordered_map<int,int> mpp;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }
//         for(auto it:mpp){
//             int freq=it.second;
//             if(freq>maxFreq){
//                 maxFreq=freq;
//             }
//             if(freq<minFreq){
//                 minFreq=freq;
//             }
//         }
//         return maxFreq+minFreq;
//      }
// };

// int main(){
//     vector<int> nums={4,4,5,5,6};

//     Solution sol;
//     int ans=sol.sumHighestAndLowestFrequency(nums);
//     cout<<ans;
//     return 0;

// }

//*T.C: O(N)
//*S.C: O(N)

//-----------x-------------------

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int sum_highest_lowest(vector<int> vec,int n){
            int maxcount = 0, lowcount = n;
            int maxi = -1e9;
            for(int i=0; i<n; i++){
                if(vec[i] > maxi){
                    maxi = vec[i];
                }

            }
            vector<int> vis(maxi+1);

            for(int i=0; i<n; i++){
                if(vis[vec[i]] != 1){
                    int count = 0;
                    for(int j=0; j<n; j++){
                        if(vec[i] == vec[j]){
                            count++;

                        }
                        
                    }
                    vis[vec[i]] = 1;
                    
                    maxcount = max(count,maxcount);
                    lowcount = min(lowcount,count);

                }
            }
            return maxcount+lowcount;


        }
};
int main(){
    int n,x;
    cin >> n;
    vector<int> vec;
    for(int i=0; i<n; i++){
        cin >> x;
        vec.push_back(x);
    }
    Solution s;
    cout << s.sum_highest_lowest(vec,n);

}

//*T.C: O(N^2)
//*S.C: O(N)