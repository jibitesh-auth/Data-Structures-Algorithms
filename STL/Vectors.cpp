#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    // int arr[5];   //*Can't change size
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
    // auto beginItr = vec.begin();
    // auto endItr = vec.end();
    // for(auto i=beginItr; i<endItr; i++){
    //     cout << *i<<" ";
    // }

    // for(auto i: vec){
    //     cout << i<<" ";    
    // }

    //*reverse iterator
    // auto reverseBegin = vec.rbegin();
    // auto reverseEnd = vec.rend();
    // for(auto i= reverseBegin; i<reverseEnd; i++){
    //     cout << *i << " ";
    // }


    //-------------x----------------------

    // vector<int> vec1(5);
    //*O/P: 0 0 0 0 0

    //vector<int> vec1(5,8);
    //* O/P: 8 8 8 8 8
    // vec1.push_back(1);
    // vec1.push_back(2);
    // vec1.push_back(0);
    // vec1.emplace_back(5);

    // for(auto i: vec1){
    //     cout << i<< " ";
    // }


    // vector<int> vec1={2,8};
    // vec1.push_back(1);
    // vec1.push_back(2);
    // vec1.push_back(0);
    // vec1.emplace_back(5);

    //  for(auto i: vec1){
    //     cout << i<< " ";
    // }

    //* O/P: 2 8 1 2 0 5
    
    //*Copy Constructor
    // vector<int> dupVec(vec1);
    // vector<int> dupVec(vec1.begin()+1,vec1.end() - 1);
    // for(auto i: dupVec){
    //     cout << i << " ";
    // }



    //----------------x-------------------

    //*front & back
    // cout << vec.front() << " " << vec.back();

    // vec.pop_back();
    // cout << vec.back();

    //-------------------x-----------------

    //*erase
    // vec.erase(vec.begin() + 1,vec.end() -1);


    // for(auto i: vec){
    //     cout << i << " ";
    // }

    //*clear

    // vec.clear();
    // for(auto i: vec){
    //     cout << i << " ";
    // }

    //*access element
    // cout<< vec[2] <<endl;
    // cout << vec.at(2);

    //*swap
    // vector<int> v1 = {7,8};
    // vector<int> v2 = {6,4};
    // swap(v1,v2);

    // for(auto it: v1){
    //     cout << it <<  " ";
    // }


    //*insert
    vector<int> v1 = {4,5,6,7};
    vector<int> v2 = {4,4,6,3,5};
    // v1.insert(v1.begin()+2,10);
    // v1.insert(v1.end()-1,10);
    // for(auto it: v1){
    //     cout << it << " ";
    // }
    
    
};

int main(){
    explainVector();


    return 0;
}