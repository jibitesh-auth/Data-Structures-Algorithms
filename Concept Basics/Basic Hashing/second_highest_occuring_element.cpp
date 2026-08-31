// OPTIMAL
//  #include <bits/stdc++.h>
//  using namespace std;

// class Solution{
//     public:
//         int secondMostFrequentElement(vector<int> &nums){
//             int n = nums.size();
//             unordered_map<int,int> mpp;
//             int maxcnt = 0,secondcnt = 0, el1 = -1, el2=-1;
//             for(int i=0; i<n; i++){
//                 mpp[nums[i]]++;

//             }
//             for(auto it: mpp){
//                 int element = it.first;
//                 int freq = it.second;
//                 if(freq > maxcnt){
//                     el2 = el1;
//                     secondcnt = maxcnt;
//                     maxcnt = freq;
//                     el1 = element;
//                 }
//                 else if(freq == maxcnt){

//                     el1 = min(element,el1);
//                 }
//                 else if(freq > secondcnt){
//                     secondcnt = freq;
//                     el2 = element;

//                 }
//                 else if(freq == secondcnt){
//                     el2 = min(element,el2);
//                 }

//             }
//             return el2;

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
//     Solution s;
//     cout<< s.secondMostFrequentElement(nums);

//     return 0;

// }

//*T.C: O(N)
//*S.C: O(N)
//--------------x-----------------

// BRUTE FORCE

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondMostFrequentElement(vector<int> &vec)
    {
        int n = vec.size();
        int maxFreq = 0, secMaxFreq = 0;

        int maxEle = -1, secEle = -1;

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
        {
            if (visited[i])
                continue;

            int freq = 0;
            for (int j = 0; j < n; j++)
            {
                if (vec[i] == vec[j])
                {
                    freq++;
                    visited[j] = true;
                }
            }
            if (freq > maxFreq)
            {
                secMaxFreq = maxFreq;
                maxFreq = freq;
                secEle = maxEle;
                maxEle = vec[i];
            }
            else if (freq == maxFreq)
            {
                maxEle = min(vec[i], maxEle);
            }
            else if (freq > secMaxFreq)
            {
                secMaxFreq = freq;
                secEle = vec[i];
            }
            else if (freq == secMaxFreq)
            {
                secEle = min(secEle, vec[i]);
            }
        }
        return secEle;
    }
};

int main()
{
    vector<int> vec = {4, 4, 5, 5, 6, 7};
    Solution s;
    cout << s.secondMostFrequentElement(vec);
}
