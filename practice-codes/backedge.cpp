#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
#define pb push_back

vector <int> adj[MAX];
bool vis[MAX];
int maxback[MAX], level[MAX];

void dfs(int u, int l)
{
    vis[u] = 1, level[u] = l;
    for(int i = 0; i < adj[u].size(); i++) {
	int v = adj[u][i];
	if(vis[v]) {
	    if(level[v] < level[u] - 1) {
		if(!maxback[u])
		    maxback[u] = v;
		else {
		    if(level[v] < level[maxback[u]])
			maxback[u] = v;
		}
	    }
	    continue;
	}
	dfs(v, l + 1);
    }
}

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
	int u, v;
	cin >> u >> v;
	adj[u].pb(v), adj[v].pb(u);
    }
    dfs(1, 0);
    for(int i = 1; i < n; i++)
	if(maxback[i])
	    cout << i << " -> " << maxback[i] << endl;
    return 0;
}
