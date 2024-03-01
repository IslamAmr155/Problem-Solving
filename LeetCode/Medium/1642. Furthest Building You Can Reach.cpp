class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    priority_queue<int, vector<int>,greater<int>> q;    
    int i = 0;
        while (i < heights.size() - 1)
        {
            if (heights[i] < heights[i+1])
            {
                q.push(heights[i+1]-heights[i]);
                if (q.size() > ladders)
                {
                    if (bricks < q.top()) break;
                    bricks -= q.top();
                    q.pop();
                }
            }
            i++;
        }
        return i;
    }
};