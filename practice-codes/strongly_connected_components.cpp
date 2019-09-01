#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
#define pb push_back

vector <int> G[MAX], G_trans[MAX];
bool vis[MAX] = {0};
stack <int> rev;

void dfs(vector <int> adj[], int u, int num) {
    vis[u] = 1;
    if(num) cout << u << ' ';
    for(int i = 0; i < adj[u].size(); i++)
        if(!vis[adj[u][i]])
            dfs(adj, adj[u][i], num);
    if(!num) rev.push(u);
}

int main() {
    int v, e;
    cin >> v >> e;
    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;
        G[a].pb(b), G_trans[b].pb(a);
    }

    // Main method --------------->
    for(int i = 1; i <= v; i++)
        if(!vis[i])
            dfs(G, i, 0);

    for(int i = 1; i <= v; i++)
        vis[i] = 0;
    
    int comp = 0;
    while(!rev.empty()) {
        if(!vis[rev.top()]) {
            cout << "component number " << ++comp << ": "
            dfs(G_trans, rev.top(), 1);
            cout << '\n';
        }
        rev.pop();
    }
    // ---------------------------->

    return 0;
}