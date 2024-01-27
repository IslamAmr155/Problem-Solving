class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int c = arr[0], w = 0;
        for (int i=1;i<arr.size();i++)
        {
            if (c < arr[i])
            {
                c = arr[i];
                w = 0;
            }
            w++;
            if (w == k) return c;
        }
        return c;
    }
};