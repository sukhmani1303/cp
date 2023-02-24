#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> v;
    int a[100],n; // n is the lenght of array

    // sorting

    sort(a,a+n);
    sort(v.begin(),v.end());

    sort(a+2,a+4); // for a portion of array to be sorted

    // to sort in descending order : 

    sort(a, a+n, greater<int>); // for descending order

    // for custom sorting

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    // comparator
    bool comp(pair<int,int>p1,pair<int,int>p2){

        if (p1.second<p2.second) return true;
        if (p1.second<p2.second) return false;
        if(p1.first>p2.first) return true;
        return false;
    }

    sort(a,a+n,comp); // comp is a boolean function -> a self written comparator

    int num = 7;
    int cnt = __builtin_popcount(num); // returns the number of set bits ( 1s ) in binary of num

    // for long long 

    long long num = 1232131234545131;
    int cnt = __builtin_popcountll(num);

    //permutations

    string s = "123"; // for all permutations start from sorted list

    do{
        cout<<s;
    }while(next_permutation(s.begin(),s.end()));

    // max element

    int maxi = *max_element(a,a+n); // gets the max element

    return 0;
}