#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 100007

vector <int> adj[MAX];
bool vis[MAX] = {0};
stack <int> ans;

void dfs(int u) {
    vis[u] = 1;
    for(int i = 0; i < adj[u].size(); i++)
        if(!vis[adj[u][i]])
            dfs(adj[u][i]);
    ans.push(u);
}

int main() {
    int v, e;
    cin >> v >> e;
    for(int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
    }
    dfs(1);
    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << '\n';
    return 0;
}