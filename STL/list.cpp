#include <bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls = {7,8,9};
    ls.push_back(1);
    // ls.emplace_front(1);
    for(auto it: ls){
        cout << it << " ";
    }

    // cout << ls.front();

    //*Not Possible
    // auto it = ls.end() -1;
}

int main(){
    explainList();


    return 0;
}