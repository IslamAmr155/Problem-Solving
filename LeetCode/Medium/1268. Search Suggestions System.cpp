class TrieNode
{
public:
    TrieNode* children[26];
    vector<string> v;
    TrieNode ()
    {
        for (int i=0;i<26;i++)
            children[i] = nullptr;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp = root;
        for (int i=0;i<word.size();i++)
        {
            int j = word[i] - 'a';
            if (!temp->children[j])
                temp->children[j] = new TrieNode();
            temp = temp->children[j];
            if (temp->v.size() < 3)
                temp->v.push_back(word);
        }
    }
    
    vector<string> search(string word) {
        TrieNode* temp = root;
        for (int i=0;i<word.size();i++)
        {
            int j = word[i] - 'a';
            if(!temp->children[j])
                return {};
            temp = temp->children[j];
        }
        return temp->v;
    }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        int n = searchWord.size();

        Trie* trie = new Trie();
        vector<vector<string>> ans(n);
        for (string p : products)
            trie->insert(p);
        
        string s = "";
        for (int i=0;i<n;i++)
        {
            s += searchWord[i];
            ans[i] = trie->search(s);
        }
        return ans;
    }
};