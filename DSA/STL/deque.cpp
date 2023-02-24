#include<bits/stdc++.h>
using namespace std;

int main(){

    // similar to list & vector

    deque<int> dq;

    dq.push_back(1);
    dq.push_front(2);

    dq.emplace_back(3);
    dq.emplace_front(6);

    dq.pop_back();
    dq.pop_front();

    dq.front(); // returns the leftmost element

    dq.back(); // returns the rightmost element

    return 0;
}