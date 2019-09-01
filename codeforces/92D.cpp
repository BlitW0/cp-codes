#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, inp[MAX]; cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> inp[i];
    ll curmin = 1e18, mins[MAX];
    for(ll i = n - 1; i >= 0; i--)
        curmin = min(curmin, inp[i]), mins[i] = curmin;
    for(ll i = 0; i < n; i++) {
        ll lo = i + 1, hi = n - 1, mid;
        while(lo <= hi) {
            mid = (lo + hi) >> 1;
            if(mins[mid] < inp[i]) lo = mid + 1;
            else hi = mid - 1;
        }
        cout << (lo - 1) - i - 1;
        (i == n - 1) ? cout << '\n' : cout << ' ';
    }
    return 0;
}