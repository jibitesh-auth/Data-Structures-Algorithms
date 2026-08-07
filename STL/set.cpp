#include <bits/stdc++.h>
using namespace std;

void explainSet(){
    //*stores only unique elements
    //*and in ascending order

    set<int> st;
    st.insert(2);
    st.insert(12);
    st.insert(1);
    st.insert(51);
    st.insert(21);
    st.insert(21);

    // for(auto it: st){
    //     cout << it << " ";
    // }

    //*find
    auto it = st.find(12); //O/p: 12
    if(it != st.end()){
        cout << *it;
    }

    //*count
    // cout << st.count(21);
    // cout << st.count(100);
    //*returns either 0->not found or 1-> found

    //*erase
    // st.erase(21);
    // for(auto it: st){
    //     cout << it << " ";
    // }

    //*Not Possible
    // auto it = st.end() -1;
//-----------x--------------------

    // auto it = st.end();
    // it--, it--;
    // st.erase(it);
    // for(auto it: st){
    //     cout << it << " ";
    // }


//    auto it1 = st.begin();
//    it1++;
//    auto it2 = st.end();
//    it2--; 
   
//     st.erase(it1,it2);
//     for(auto it: st){
//         cout << it << " ";
//     }

//----------------x------------------

    //*LOWER BOUND
    //*returns an iterator that points to an element
    //* that is >= number given

    // auto it = st.lower_bound(11);
    // cout << *it;
    // auto it = st.lower_bound(500);
    // if(it == st.end()){
    //     cout << "end";
    // }

    //*UPPER BOUND
    //*returns an iterator that points to an element
    //* that is > number given

    // auto it = st.upper_bound(12);
    // cout << *it;







    
   


    




}

int main(){
    explainSet();

    return 0;
}