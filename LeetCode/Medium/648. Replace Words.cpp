class TrieNode {
public:
    TrieNode* children[26];
    bool isEndWord;
    TrieNode ()
    {
        for (int i=0;i<26;i++)
            children[i] = nullptr;
        isEndWord = false;
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
            if (!temp->children[j]) temp->children[j] = new TrieNode();
            temp = temp->children[j];
        }
        temp->isEndWord = true;
    }
    
    string startsWith(string word) {
        TrieNode* temp = root;
        string ans = "";
        for (int i=0;i<word.size();i++)
        {
            int j = word[i] - 'a';
            if(!temp->children[j]) return word;
            ans += word[i];
            temp = temp->children[j];
            if (temp->isEndWord) return ans;
        }
        return word;
    }
};

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie* trie = new Trie();
        for (string s : dictionary) trie->insert(s);
        string ans = "", word;
        stringstream s(sentence);
        while (s >> word) {
            if (!ans.empty()) ans += ' ';
            ans += trie->startsWith(word);
        }
        return ans;
    }
};