class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int station = 0, n = gas.size(), sum = 0, g = 0;
        bool c = 1;
        for (int i=0;i<n;i++)
        {
            int d = gas[i] - cost[i];
            g += d;
            sum += d;
            if (g < 0)
            {
                g = 0;
                c = 1;
            }
            else if (g >= 0 && c)
            {
                c = 0;
                station = i;
            }   
        }
        if (sum >= 0)
            return station;
        return -1;
    }
};