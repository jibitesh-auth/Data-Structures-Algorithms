#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    //*unique,ascending order(key)
    map<int,string> mpp;
    mpp.insert({4,"raj"});
    mpp.emplace(5,"vivek");
    mpp[1] = "abc";
    mpp[1] = "wik"; //*Latest one (updated)
    mpp[2] = "jibitesh";
    mpp[3] = "ankita";

    cout << mpp.size();

    // for(auto it: mpp){
    //     cout << it.first << "->" << it.second<<endl;
    //*Pair is used(Points to the pair)
    // }

    //-------------x----------------

    //*find
    // auto it = mpp.find(2);
    // cout << (*it).first << "->"<< (*it).second << endl;

    // auto it = mpp.find(5);
    // if(it == mpp.end()){
    //     cout << "end";
    // }

    //--------------------x-----------

    //*lowerbound
    // auto it = mpp.lower_bound(2);
    // cout << (*it).first << "->"<<(*it).second<<endl;

    //*upperbound
    // auto it = mpp.upper_bound(2);
    // cout << (*it).first << "->"<<(*it).second<<endl;







}


int main(){
    explainMap();
    return 0;
}