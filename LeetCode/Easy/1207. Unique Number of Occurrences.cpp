class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        sort(arr.begin(),arr.end());
        for (int i=0;i<arr.size();i++)
        {
            int c = 1;
            while (i < arr.size()-1 && arr[i] == arr[i+1])
            {
                c++;
                i++;
            }
            if(!m[c])
                m[c]++;
            else
                return false;
        }
        return true;
    }
};