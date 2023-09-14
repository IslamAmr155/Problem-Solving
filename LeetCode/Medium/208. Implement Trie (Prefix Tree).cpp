class TrieNode
{
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
            if (!temp->children[j])
                temp->children[j] = new TrieNode();
                temp = temp->children[j];
        }
        temp->isEndWord = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        for (int i=0;i<word.size();i++)
        {
            int j = word[i] - 'a';
            if(!temp->children[j])
                return false;
            temp = temp->children[j];
        }
        return temp->isEndWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        for (int i=0;i<prefix.size();i++)
        {
            int j = prefix[i] - 'a';
            if(!temp->children[j])
                return false;
            temp = temp->children[j];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */