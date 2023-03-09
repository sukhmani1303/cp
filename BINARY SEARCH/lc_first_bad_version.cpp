// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int  s = 1;
        int  e = n;
        int  mid = s + (e-s)/2;
        int  ans = 1;

        while(s<=e){

            if(isBadVersion(mid)){
                //bad
                e = mid-1;
                ans = mid;
            }
            else{
                //good
                s = mid + 1;
            }

            mid = s + (e-s)/2;

        }

        return ans;
    }
};