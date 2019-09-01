#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;

struct Student {
    ll id, score;
};

bool comp(Student a, Student b) {
    if (a.score != b.score)
        return a.score > b.score;
    else
        return a.id < b.id;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    Student s[n];
    for (ll i = 1; i <= n; i++) {
        ll x, y, z, w;
        cin >> x >> y >> z >> w;
        s[i - 1].id = i;
        s[i - 1].score = x + y + z + w;
    }

    sort(s, s + n, comp);
    for (ll i = 1; i <= n; i++) {
        if (s[i - 1].id == 1) {
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}
