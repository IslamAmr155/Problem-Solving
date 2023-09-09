class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> ss; 
        vector<int> v (rooms.size());
        v[0] = 1;
        ss.push(0); 
        while(!ss.empty())
        {
            int i = ss.top();
            ss.pop();
            for (int x:rooms[i])
                if (!v[x])
                {
                    v[x] = 1;
                    ss.push(x);
                }
        }   
        return accumulate(v.begin(),v.end(),0) == rooms.size();
    }
};