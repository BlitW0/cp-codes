#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
const ll mod = 1e9 + 7;
const ll MAXN = 1e2 + 7;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s; cin >> s;

    string pos[] = {"ABC", "ACB", "BAC", "BCA", "CAB", "CBA"};

    bool ok = 0;
    for (ll i = 0; i < 6; i++)
        if (s.find(pos[i]) != s.npos)
            ok = 1;
    
    (ok) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}

