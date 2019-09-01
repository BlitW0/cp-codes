#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5 + 7;

struct point {
    ll x, y;
};

point p[MAXN];

bool poss(point a, point b, ll n) {
    // printf("calling for (%lld, %lld), (%lld, %lld)\n", a.x, a.y, b.x, b.y);
    ll num = b.y - a.y, den = b.x - a.x;
    bool first[MAXN] = {0};
    for(ll i = 0; i < n; i++)
        if((p[i].y - a.y)*den == (p[i].x - a.x)*num)
            first[i] = 1;
    // printf("slope1: %lld / %lld\n", num, den);
    // for(ll i = 0; i < n; i++)
    //     printf("(%lld, %lld) = %d, ", p[i].x, p[i].y, first[i]);
    // printf("\n");
    bool calc = 0, sec = 0;
    point c;
    ll num2, den2;
    for(ll i = 0; i < n; i++)
        if(!first[i]) {
            if(!sec)
                c.x = p[i].x, c.y = p[i].y, sec = 1;
            else {
                if(!calc)
                    num2 = p[i].y - c.y, den2 = p[i].x - c.x, calc = 1/*, printf("slope2: %lld / %lld\n", num2, den2)*/;
                else {
                    if((p[i].x - c.x)*num2 != (p[i].y - c.y)*den2) {
                        // printf("returning 0\n");
                        return 0;
                    } /*else printf("(%lld, %lld) ok\n", p[i].x, p[i].y);*/
                }
            }
        }
    // printf("returing 1\n");
    return 1;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n; cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> p[i].x >> p[i].y;
    if(n <= 3) {
        cout << "YES\n";
        return 0;
    } else {
        if(poss(p[0], p[1], n) || poss(p[0], p[2], n) || poss(p[1], p[2], n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}