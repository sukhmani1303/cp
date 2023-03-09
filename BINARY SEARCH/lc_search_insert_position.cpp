#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long int s = 0;
        long long int e = nums.size()-1;
        long long int mid = s + (e-s)/2;
        // cout<<"here : "<<nums[mid];

        while(s<=e){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else s = mid+1;

            mid = s + (e-s)/2;
        }

        return s;
    }
};

int main(){
    
}