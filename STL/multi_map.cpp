#include <bits/stdc++.h>
using namespace std;

void explainMultiMap(){
    //*same as map with duplicate key & values
    multimap<int, char> mpp;
    mpp.insert({3,'b'});
    mpp.insert({1,'a'});
    mpp.insert({1,'b'});
    mpp.insert({1,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'b'});

    // for(auto it: mpp){
    //     cout << it.first << "->" <<it.second << endl;
    // }


    //*here it.second act as it.end()
    //*To print the existance of all 2
    auto it = mpp.equal_range(2);
    for(auto i = it.first; i!=it.second; i++){
        //*Map are not consecutive as they are sorted on basis of keys
        cout << (*i).first << "->" << (*i).second << endl;

    }



}

int main(){
    explainMultiMap();
    return 0;
}

