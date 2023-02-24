#include<bits/stdc++.h>
using namespace std;


int main(){

    // stores everything in sorted order
    // stores unique elements only

    set<int> s;

    s.insert(1);
    s.emplace(2);
    s.insert(2); // the set will neglect this value as it already has 2 inside
    s.insert(4);
    s.insert(3);

    // set -> {1,2,3,4} sorted order only !

    // finding element

    auto it = s.find(3); // it points to 3

        // if element is not in set it returns s.end() -> points out of set

    s.erase(4);

    int cnt = s.count(2); // either 1 or 0

    // for erasing particular element

    auto it = s.find(1);
    s.erase(it);

    // for erasing multiple elements

    auto it1 = s.find(2);
    auto it2 = s.find(3);
    s.erase(it1,it2); // will delete all elements b/w it1 & it2. it2 isn't not included

    auto it = s.lower_bound(2);
    auto it = s.upper_bound(4);


    return 0;
}