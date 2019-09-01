#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n; cin >> n;
    ll a[n + 1];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    ll k; cin >> k;
    deque <ll> dq;
    for(ll i = 0; i < k; i++) {
        while(!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.pb(i);
    }
    cout << a[dq.front()] << ' ';
    for(ll i = k; i < n; i++) {
        while(!dq.empty() && i - dq.front() >= k)
            dq.pop_front();
        while(!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.pb(i);
        cout << a[dq.front()], (i == n - 1) ? cout << '\n' : cout << ' ';
    }
    return 0;
}