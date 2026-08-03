#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    int arr[5];   //*Can't change size
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    vec.emplace_back(5);
    // cout<<vec.size()<<endl;

    //*0 based indexing
    // for(int i=0; i<vec.size();i++){
    //     cout <<vec[i]<<endl;
    // }

    //*Iterator
    // vector<int>:: iterator beginItr = vec.begin();

    // vector<int>:: iterator endItr = 
    // vec.end();

    // endItr = endItr -1;

    // cout<< *endItr <<" "<< *beginItr;
    // for(vector<int>:: iterator i = beginItr; i<endItr; i++){
    //     cout << *i << " ";
    // }


    //*auto
    auto beginItr = vec.begin();
    auto endItr = vec.end();
    // for(auto i=beginItr; i<endItr; i++){
    //     cout << *i<<" ";
    // }

    for(auto i: vec){
        cout << i<<" ";    
    }






    
}

int main(){
    explainVector();


    return 0;
}