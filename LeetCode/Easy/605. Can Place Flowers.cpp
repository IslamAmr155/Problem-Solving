class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c = 0;
        int m = flowerbed.size();
        if (m == 1 && !flowerbed[0])
            c++;
        else if (m > 1)
        {
            if (!flowerbed[0] && !flowerbed[1])
            {
                c++;
                flowerbed[0] = 1;
            }
            if (!flowerbed[m-1] && !flowerbed[m-2])
            {
                c++;
                flowerbed[m-1] = 1;
            }
        }
        for (int i=0,j=1,k=2;k<flowerbed.size();k++)
        {
            if (!flowerbed[i] && !flowerbed[j] && !flowerbed[k])
            {
                flowerbed[j] = 1;
                c++;
            }
            i = j;
            j = k;
        }
        if (c >= n)
            return true;
        else
            return false;
    }
};