#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct knight {
    ll p, c, pos;
};

bool comp(knight a, knight b) {
    return a.p < b.p;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, k;
    cin >> n >> k;

    ll ans[n];
    knight x[n];
    for (ll i = 0; i < n; i++)
        cin >> x[i].p, x[i].pos = i;
    for (ll i = 0; i < n; i++)
        cin >> x[i].c;
    
    priority_queue <ll> pq, dump;
    sort (x, x + n, comp);
    for (ll i = 0; i < n; i++) {
        ans[x[i].pos] = x[i].c;
        for (ll j = 0; j < k && !pq.empty(); pq.pop(), j++)
            ans[x[i].pos] += pq.top(), dump.push(pq.top());
        for (; !dump.empty(); pq.push(dump.top()), dump.pop());
        pq.push(x[i].c);
    }

    for (ll i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}
