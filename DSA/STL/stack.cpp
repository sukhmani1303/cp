#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    st.emplace(10);

    cout<<st.top();

    st.pop();

    cout<<st.size();

    cout<<st.size();

    stack<int> s2;
    st.swap(s2);

    return 0;
}