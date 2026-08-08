#include <bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    //*Similar to set but also contatins duplicate
    multiset<int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(6);
    ms.insert(21);
    ms.emplace(21);

    // for(auto it: ms){
    //     cout << it << " ";
    // }

    //*size
    // cout << ms.size();
//---------------x-----------------
    //*Find()
    //*Finds first one
    // auto it = ms.find(2);
    // cout << *it;

//----------------x------------------
    //*Erase
    // auto it = ms.erase(2);
    // for(auto it: ms){
    //     cout << it << " ";
    // }//*will erase entire all 2

    // auto it = ms.erase(ms.find(2));
    for(auto it: ms){
        cout << it << " ";

    }

    //*count
    // cout << ms.count(2); //2

    //*upperBound
    // auto it = ms.upper_bound(2);
    // cout << *it;

    //*lowerBound
    // auto it1 = ms.lower_bound(2);
    // cout << *it1;








}

int main(){
    explainMultiSet();
    return 0;
}