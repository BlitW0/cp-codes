#include <bits/stdc++.h>
using namespace std;

int main() {
    string hh, mm; cin >> hh >> mm;
    int h, d, n; double c;
    cin >> h >> d >> c >> n;
    int hrs = 10*(hh[0] - '0') + hh[1] - '0', mint = 10*(mm[0] - '0') + mm[1] - '0';
    int req = (h / n) + ((h % n == 0) ? 0 : 1);
    double cur = req * c; int diff;
    if(hrs < 20) diff = ((20 - hrs)*60 - mint)*d + h;
    else diff = h;
    double fin = ((diff / n) + ((diff % n == 0) ? 0 : 1)) * c;
    printf("%0.4lf\n", min(cur, (0.8)*fin));
    return 0;
}