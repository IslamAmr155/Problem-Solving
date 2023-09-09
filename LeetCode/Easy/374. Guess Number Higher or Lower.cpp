/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long h = INT_MAX;
        h++;
        long long l = 0;
        long long m = (l+h)/2;
        int x = guess(m);
        while(x)
        {
            if(x == 1)
                l = m;
            else
                h = m;
            m = (h+l)/2;
            x = guess(m);
        }
        return m;
    }
};