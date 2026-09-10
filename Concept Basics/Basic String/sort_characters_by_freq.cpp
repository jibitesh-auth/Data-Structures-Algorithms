//* Our Approach

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     vector<char> frequencySort(string& s){
//         map<char,int> mpp;
//         for(int i=0; i<s.length(); i++){
//             mpp[s[i]]++;

//         }
//         map<int,string,greater<int>> mpp1;
//         for(auto it: mpp){
//             char ch = it.first;
//             int val = it.second;
//             mpp1[val] += ch;
//         }

//         vector<char> vec;
//         for(auto it: mpp1){
//             string str = it.second;
//             vec.insert(vec.end(),str.begin(),str.end());
//         }
//         return vec;

//     }
// };

// int main()
// {
//     Solution sol;
//     string s;
//     cin >> s;
//     vector<char> result = sol.frequencySort(s);

//     for(char c : result) {
//         cout << c << " ";
//     }
//     return 0;

// }

//* T.C: O(N log N)[Worst], O(N log K)[Average] ----> as map takes log k or log N
//* S.C: O(N)

//---------------------x--------------------------------

//*Editorial

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    static bool comparator(pair<int, char> p1, pair<int, char> p2)
    {
        if (p1.first > p2.first)
            return true;
        if (p1.first < p2.first)
            return false;
        return p1.second < p2.second;
    }

public:
    vector<char> frequencySort(string &s)
    {
        pair<int, char> freq[26];
        for (int i = 0; i < 26; i++)
        {
            freq[i] = {0, i + 'a'};
        }
        for (char ch : s)
        {
            freq[ch - 'a'].first++;
        }

        sort(freq, freq + 26, comparator);

        vector<char> ans;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i].first > 0)
            {
                ans.push_back(freq[i].second);
            }
        }
        return ans;
    }
};

int main()
{
    string s;
    cin >> s;
    vector<char> vec;

    Solution sol;
    vec = sol.frequencySort(s);
    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}

//*T.C: O(N) + O(26 log 26) ------> O(N)
//*S.C: O(K) ----> O(26) : O(1)