#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp push_back
#define MAX 100007
#define INF 0x3f3f3f3f
typedef long long ll;

struct edge {
    ll a, b, w;
};

vector < edge > E;
ll dist[MAX];

int main() {
    ll v, e; cin >> v >> e;
    for(ll i = 0; i < e; i++) {
        ll a, b, w; cin >> a >> b >> w;
        edge tmp; tmp.a = a, tmp.b = b, tmp.w = w;
        E.pb(tmp);
    }
    for(ll i = 1; i <= v; i++)
        dist[i] = INF;
    dist[1] = 0; // root
    for(ll i = 0; i < v - 1; i++)
        for(ll i = 0; i < e; i++)
            if(dist[E[i].a] + E[i].w < dist[E[i].b])
                dist[E[i].b] = E[i].w + dist[E[i].a];
    // bool neg_cycle = 0;
    // for(ll i = 0; i < e; i++)
    //     if(dist[E[i].a] + w < dist[E[i].b]) {
    //         neg_cycle = 1;
    //         break;
    //     }
    for(ll i = 1; i <= v; i++)
        cout << dist[i] << ' ';
    cout << '\n';
    return 0;
}