class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int c = 0;
        for (int i = 0;i<k;i++)
            if (blocks[i] == 'B') c++;
        int a = c;
        for (int i = 1,j=k;j<blocks.size();i++,j++) {
            if (blocks[i-1] == 'B') a--;
            if (blocks[j] == 'B') a++;
            c = max(a,c);
        }
        return k-c;
    }
};