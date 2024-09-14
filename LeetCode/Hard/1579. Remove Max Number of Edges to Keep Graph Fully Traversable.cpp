class Solution {
public:
    int find(int x, vector<int>& parent) {
        if (parent[x] != x) parent[x] = find(parent[x],parent);
        return parent[x];
    }

    int uni(int x,int y, vector<int>& parent, vector<int>& rank,int& n) {
        int xset = find(x,parent);
        int yset = find(y,parent);
        if (xset == yset) return 1;
        n--;
        if (rank[xset] < rank[yset]) parent[xset] = yset;
        else if (rank[xset] > rank[yset]) parent[yset] = xset;
        else {
            parent[yset] = xset;
            rank[xset]++;
        }
        return 0;
    }

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        vector<int> rank(n),parent(n),rank2(n),parent2(n);
        for (int i = 0;i<n;i++) parent[i] = i;
        sort(edges.begin(), edges.end(), [] (vector<int> &a, vector<int> &b) { return a[0] > b[0]; });
        int ans = 0, i = 0, alice = n, bob;
        while (i<edges.size() && edges[i][0] == 3) {
            ans += uni(edges[i][1]-1,edges[i][2]-1,parent,rank,alice);
            i++;
        }
        rank2 = rank;
        parent2 = parent;
        bob = alice;
        for (;i<edges.size();i++) 
            if (edges[i][0] == 2) ans += uni(edges[i][1]-1,edges[i][2]-1,parent2,rank2,bob);
            else ans += uni(edges[i][1]-1,edges[i][2]-1,parent,rank,alice);
        return (alice == 1 && bob == 1) ? ans : -1;
    }
};