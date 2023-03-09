class Solution {
public:
    int mySqrt(int x) {
        int s = 1;
        int e = x;
        long long int mid = s + (e-s)/2;
        int ans=0;

        while(s<=e){
            if (mid*mid == x) return mid;
            else if (mid*mid < x) {
                ans = mid;
                s = mid+1;
            }
            else e = mid-1;

            mid = s + (e-s)/2;
        }

        return ans;
    }
};