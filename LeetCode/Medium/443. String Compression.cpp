class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int j = 0,count = 0,k;
        auto iter = chars.begin();
        for (int i=0;i<n-1;i++)
        {
            count = 0;
            if (chars[i] == chars[i+1])
            {
                count+=2;
                j = i+1;
                while (j < n - 1 && chars[j] == chars[j+1])
                {
                    count++;
                    j++;
                }
                chars.erase(iter + i,iter + j);
            }
            k = i;
            while (count)
            {
                chars.insert(iter + k+1,count % 10 + '0');
                count /= 10;
                i++;
            }
            n = chars.size();
        }
        return chars.size();
    }
};