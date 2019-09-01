/**
 * Code for LCA in the form of class LCA
 * 
 * Constructor:
 *      g -> the tree for which lca is required
 *      n -> number of vertices
 *      root -> root which is to be taken as reference for lca
 * 
 * Attributes:
 *      Private:
 *          vector <int> tin, tout -> in and out time for dfs
 *          int timer -> dfs absolute time
 *          int l -> lowest possible depth of tree
 *          vector < vector <int> > up -> parent table
 *          vector < vector <int> > g -> tree binded to class
 * 
 * Methods:
 *      Private:
 *          void dfs(u, p) -> dfs for filling parent dp table
 *          is_ancestor(u, v) -> Check if u is ancestor of v
 *      Public:
 *          get_lca(u, v) -> Return lca of u and v 
 * 
 * Pre-usage code:
 *      LCA lca(g, n, root);
 **/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;



// ----------------> MAIN CODE
class LCA {
    int timer, l;
    vector <int> tin, tout;
    vector <vector <int> > up, g;

    // dfs for filling parent dp table
    void dfs(int u, int p) {
        tin[u] = ++timer;
        up[u][0] = p;
        for (int i = 1; i <= l; i++)
            up[u][i] = up[up[u][i - 1]][i - 1];

        for (auto v : g[u])
            if (v != p)
                dfs(v, u);

        tout[u] = ++timer;
    }

    // Check if u is ancestor of v
    bool is_ancestor(int u, int v) {
        return tin[u] <= tin[v] and tout[u] >= tout[v];
    }

    public:

    LCA(vector < vector <int> > g, int n, int root) {
        this->g = g;
        
        tin.resize(n + 1);
        tout.resize(n + 1);
        timer = 0;
        l = ceil(log2(n));
        up.assign(n + 1, vector <int> (l + 1));
        
        dfs(root, root);
    }

    // Return lca of u and v
    int get_lca(int u, int v) {
        if (is_ancestor(u, v))
            return u;
        if (is_ancestor(v, u))
            return v;
        for (int i = l; i >= 0; --i)
            if (!is_ancestor(up[u][i], v))
                u = up[u][i];
        return up[u][0];
    }
};
// -------------------------->



int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}
