class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> m;
        unordered_map<string, int> in;
        for (int i = 0;i<recipes.size();i++)
            for (string& s : ingredients[i]) {
                m[s].push_back(recipes[i]);
                in[recipes[i]]++;
            }
        queue<string> q;
        for (string& s : supplies) q.push(s);
        vector<string> ans;
        while(!q.empty()) {
            string u = q.front();
            q.pop();
            for (int i = 0;i<m[u].size();i++)
                if (--in[m[u][i]] == 0) {
                    q.push(m[u][i]);
                    ans.push_back(m[u][i]);
                }
        }
        return ans;
    }
};