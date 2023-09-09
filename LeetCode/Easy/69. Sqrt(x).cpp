class Solution {
public:
    int mySqrt(int x) {
    if (x==0) return 0;
    int left = 1;
    int right = x/2 + 1;
    int res;

    while (left <= right) {
        int mid = left + ((right-left)/2);
        if (mid<=x/mid){
            left = mid+1;
            res=mid;
        }
        else {
            right=mid-1;
        }
    }
    return res;
    }
};