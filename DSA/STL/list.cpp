#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;

    l.push_back(2);
    l.emplace_back(4);

    l.push_front(10); // expensive

    // all other functions are similar to vector

    return 0;
}