class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        string temp = "";
        deque<string> s1, s2;
        for (char c : sentence1) {
            if (c == ' ') {
                s1.push_back(temp);
                temp = "";
            }
            else temp += c;
        }
        s1.push_back(temp);
        temp = "";
        for (char c : sentence2) {
            if (c == ' ') {
                s2.push_back(temp);
                temp = "";
            }
            else temp += c;
        } 
        s2.push_back(temp);
        while (s1.size() && s2.size() && s1.front() == s2.front()) s1.pop_front(), s2.pop_front();
        while (s1.size() && s2.size() && s1.back() == s2.back()) s1.pop_back(), s2.pop_back();
        return (s1.empty() || s2.empty());
    }
};