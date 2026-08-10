#include <bits/stdc++.h>
using namespace std;

void explainUnorderedMap(){
    unordered_map<int,string> um;
    //*Not in Order
    um.insert({4,"jibitesh"});
    um[1] = "abc";
    um[2] = "vik";
    um[3] = "bcd";

    for(auto it: um){
        cout << it.first << "->" << it.second <<endl;
    }

    auto it1 = um.find(4);
    cout << (*it1).first << "->" << (*it1).second;
    //*O(1)
}

int main(){
    explainUnorderedMap();
    return 0;
}