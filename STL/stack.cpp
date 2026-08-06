#include <bits/stdc++.h>
using namespace std;

void explainStack(){
    //*LIFO
    // stack<int> st;
    // st.push(1);
    // st.push(7);
    // cout << st.size() << endl;
    // cout << st.top() << " ";
    // st.pop();
    // cout << st.top() << " ";
    // st.pop();
    // cout << st.top()<<" "; //*Runtime Error

    //--------------x------------

    // stack<int> st;
    // st.push(1);
    // st.push(7);
    // st.push(71);
    // st.push(17);
    // st.push(27);
    // st.emplace(12);

    // while(st.empty() == false){
    //     cout << st.top() << " ";
    //     st.pop();

    // }

    //--------------------x------------

    //*swap
    stack<int> st1;
    st1.push(5);
    st1.push(7);
    st1.push(8);

    stack<int> st2;
    st2.push(9);
    st2.push(11);
    st2.push(12);

    swap(st1,st2);

    while(st1.empty() == false){
        cout << st1.top() << " ";
        st1.pop();
    }


    
}

int main(){

    explainStack();

    return 0;
}