#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, a;
    cin >> l >> r >> a;

    int x = min(l ,r), y = max(l, r);
    if(y - x >= a) x += a;
    else x = y + (a - (y - x))/2;

    cout << 2*x << '\n';
    return 0;
}
