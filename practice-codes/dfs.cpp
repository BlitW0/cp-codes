#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100007];
bool vis = {0};

void dfs(int u)
{
    vis[u] = 1;
    for(int i = 0; i < adj[u].size(); i++)
    {
	int v = adj[u][i];
	if(vis[v]) continue;
	vis[v] = 1; dfs(v);
    }
}

int main()
{

    return 0;
}
