class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        queue<string> q;
        q.push(startGene);
        int c = 0, size;
        while (!q.empty())
        {
            size = q.size();
            while(size)
            {
                string s = q.front();
                q.pop();
                for (int j = 0;j < bank.size();j++)
                {
                    string b = bank[j];
                    int d = 0;
                    for (int i = 0;i < 8;i++)
                    {
                        if (s[i] != b[i])
                            d++;
                    }
                    if (d == 1)
                        if (b == endGene)
                            return ++c;
                        else
                        {
                            q.push(b);
                            bank.erase(remove(bank.begin(), bank.end(), b), bank.end());
                            j--;
                        }
                }
                size--;
            }
            c++;
        }
        return -1;
    }
};