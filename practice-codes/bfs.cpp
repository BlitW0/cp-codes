#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 100007

vector <int> adj[MAX];
int dist[MAX] = {0};
bool vis[MAX] = {0};

void dist_root()
{
	dist[0] = 0; vis[0] = 1;
	queue <int> q; q.push(0);
	while(!q.empty()) {
		int f = q.front();
		for(int i = 0; i < adj[f].size(); i++) {
			if(!vis[adj[f][i]]) {
				q.push(adj[f][i]);
				dist[adj[f][i]] = dist[f] + 1;
				vis[adj[f][i]] = 1;
			}
		}
		q.pop();
	}
}

int main()
{
	int n, m, x; cin >> n >> m>> x;
	int u, v;
	for(int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dist_root(); // fills dist[i] with distance of node i from root(0)
	cout << dist[x] << endl;
	return 0;
}
