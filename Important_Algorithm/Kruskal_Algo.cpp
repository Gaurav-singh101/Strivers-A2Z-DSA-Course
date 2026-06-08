#include <bits/stdc++.h>
using namespace std;

// Disjoint set data struture
class DSU {
    vector<int> parent, rank;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 1;
        }
    }

    int find(int i) {
        return (parent[i] == i) ? i : (parent[i] = find(parent[i]));
    }

    void unite(int x, int y) {
        int s1 = find(x), s2 = find(y);
        if (s1 != s2) {
            if (rank[s1] < rank[s2]) parent[s1] = s2;
            else if (rank[s1] > rank[s2]) parent[s2] = s1;
            else parent[s2] = s1, rank[s1]++;
        }
    }
};
bool comparator(vector<int> &a,vector<int> &b){
   return a[2] < b[2]; 
}
int kruskalsMST(int V, vector<vector<int>> &edges) {
    
    // Sort all edges
    sort(edges.begin(), edges.end(),comparator);
    
    // Traverse edges in sorted order
    DSU dsu(V);
    int cost = 0, count = 0;
    
    for (auto &e : edges) {
        int x = e[0], y = e[1], w = e[2];
        
        // Make sure that there is no cycle
        if (dsu.find(x) != dsu.find(y)) {
            dsu.unite(x, y);
            cost += w;
            if (++count == V - 1) break;
        }
    }
    return cost;
}

int main() {
    
    // An edge contains source, destination and weight
    vector<vector<int>> edges = {
        {0, 1, 10}, {1, 3, 15}, {2, 3, 4}, {2, 0, 6}, {0, 3, 5}
    };
    
    cout<<kruskalsMST(4, edges);
    
    return 0;
}