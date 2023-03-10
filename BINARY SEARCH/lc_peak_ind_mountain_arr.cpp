class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int  s = 0;
        int  e = arr.size()-1;
        int  m = s + (e-s)/2;
        int  ans;

        while(s<e){
            //if(arr[m] > arr[m+1] && arr[m] > arr[m-1]) return arr[m];
            if(arr[m]>arr[m+1]) e = m;  //line 2
            else if(arr[m]<arr[m+1]) s = m+1;
            m = s + (e-s)/2;
        }

        return s;

    }
};