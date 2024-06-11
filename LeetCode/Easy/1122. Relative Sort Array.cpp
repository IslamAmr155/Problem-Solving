class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v(1001);
        for (int x : arr1) v[x]++;
        int i = 0;
        for (int x : arr2) 
            while(v[x]--) arr1[i++] = x; 
        for (int j = 0;j<1001 && i < arr1.size();j++)
            while (v[j]-- > 0) arr1[i++] = j;
        return arr1;
    }
};