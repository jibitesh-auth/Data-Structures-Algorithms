#include <bits/stdc++.h>
using namespace std;

void explainUnorderedSet(){
    unordered_set<int> st;
    //*same as set but no order
    //*here no upper_bound & lower_bound exist
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);

    // for(auto it: st){
    //     cout << it << " ";
    // }

    auto it = st.find(11); //*O(1)[advantage]
    cout << *it;


}

int main(){
    explainUnorderedSet();
    return 0;
}