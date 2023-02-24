#include<bits/stdc++.h>
using namespace std;

// dynamic in nature

int main(){

    vector<int> v;

    v.push_back(0); // creates an empty cont. -> gets val and attaches to vector end
    v.emplace_back(1); // directly places val by dynamically increases size

    // we can enter pairs in vector too

    vector<pair<int, int>> vp;

    vp.push_back({2,3});
    vp.emplace_back(4,5);

    // declare the container with pre-defined size

    vector<int> v_sd1(5,100); // creates a container with 5 instances of 100
    vector<int> v_sd2(5); // creates a container with 5 instances of 0

    // declare a vector using another vector

    vector<int> v2(v);

    // accessing elements of vector [similar to array]

    // using iterator -> points to memory address of elements

    vector<int>::iterator it = v.begin(); // it points to mem. address of 0th element
    it++; // it points to 1st element
    cout<<*it<<" "; // prints the 1st element

    // other iterators than begin

    vector<int>::iterator it1 = v.end(); // points after the last element outside the vector
///    vector<int>::iterator it2 = v.rend(); // points before the 0th element outside vector
///    vector<int>::iterator it3 = v.rbegin(); // points at the last element inside vector

    cout<<"the last element is "<<v.back()<<endl;

    // looping using conventional method

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<< *it<< " ";
    }

    // looping using auto
    // using auto the datatype is auto-assigned acc. to data

    for(auto it = v.begin(); it!= v.end(); it++){
        cout<< *it<< " ";
    }

    // smarter looping using auto and for-each loop

    for(auto it : v){
        cout<<it<< " ";
    }

    // deleting data

    v.erase(v.begin()+1); // for single element at the position using iterator
    v.erase(v.begin()+1, v.begin()+4); // for multiple elements -> v.erase(start,end) -> end not included

    // insert function

    v.insert(v.begin(), 10); // inserts 10 at the begining 
    v.insert(v.begin()+1, 2, 5); // inserts 5 at 1st position two times

    // if we want to insert other vector in vector :
    vector<int> copy(1);
    v.insert(v.begin(),copy.begin(), copy.end());

    cout<<v.size();

    v.pop_back();

    v.swap(copy); // swaps the vector

    v.clear(); // deletes all element of vector

    cout<< v.empty(); // return true if vector empty

    return 0;
}