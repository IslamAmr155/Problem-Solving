class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0, v1 = 0, v2 = 0;
        while (i < version1.size() && j < version2.size()) {
            v1 = version1.find('.',i);
            v2 = version2.find('.',j);
            v1 = v1 == version1.npos ? version1.size() : v1;
            v2 = v2 == version2.npos ? version2.size() : v2;
            if (stoi(version1.substr(i,v1 - i)) > stoi(version2.substr(j,v2 - j))) return 1;
            else if (stoi(version1.substr(i,v1 - i)) < stoi(version2.substr(j,v2 - j))) return -1;
            i = v1 + 1; 
            j = v2 + 1;
        }
        for (;i < version1.size();i++)
            if (version1[i] > '0') return 1;
        for (;j < version2.size();j++)
            if (version2[j] > '0') return -1;
        return 0;
    }
};