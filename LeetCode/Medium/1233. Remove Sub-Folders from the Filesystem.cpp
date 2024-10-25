class Trie {
public:
    vector<Trie*> v;
    string f;
    bool end;
    
    Trie(string s, bool e) {
        f = s;
        end = e;
    }
};

vector<string> ans;
void dfs(Trie* root, string s) {
    s += root->f;
    if (root->end) {
        ans.push_back(s);
        return;
    }
    else for (auto x : root->v) dfs(x, s);
}

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        ans.clear();
        Trie* root = new Trie("", false), *temp = root;
        string s = "";
        for (string& f : folder) {
            temp = root;
            for (int i = 1;i<f.size();i++) {
                s = "/";
                while (i < f.size() && f[i] != '/') s += f[i++];
                bool found = 0;
                for (auto x : temp->v) 
                    if (x->f == s) {
                        temp = x;
                        found = 1;
                        break;
                    }
                if (!found) {
                    Trie* t = new Trie(s, i == f.size());
                    temp->v.push_back(t);
                    temp = t;
                } else if (i == f.size()) temp->end = 1;
            }
        }
        dfs(root, "");
        return ans;
    }
};