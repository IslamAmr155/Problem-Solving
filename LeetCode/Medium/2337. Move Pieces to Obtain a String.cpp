class Solution {
public:
    bool canChange(string start, string target) {
        int j = 0;
        for (int i = 0; i < target.size();i++) {
            if (start[j] == target[i]) j++;
            else {
                if (target[i] == 'R') return false;
                int k = j;
                for (;k<start.size();k++) {
                    if ((target[i] == 'L' && start[k] == '_') || (target[i] == '_' && start[k] == 'R')) continue;
                    else if ((target[i] == 'L' && start[k] == 'R') || (target[i] == '_' && start[k] == 'L')) return false;
                    else break;
                }
                if (k == start.size()) return false;
                swap(start[k], start[j++]);
            }
        }
        return true;
    }
};