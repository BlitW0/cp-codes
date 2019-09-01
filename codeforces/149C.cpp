#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    pair <int, int> a[n + 1];
    for(int i = 1; i <= n; i++)
	cin >> a[i].first, a[i].second = i;
    sort(a + 1, a + n + 1);
    vector <int> x, y;
    int sx = 0, sy = 0;
    for(int i = 1; i <= n; i++) {
	if(sx > sy) {
	    y.push_back(a[i].second);
	    sy += a[i].first;
	} else {
	    x.push_back(a[i].second);
	    sx += a[i].first;
	}
	//cout << x.size() << ' ' << y.size() << '\n';
    }
    cout << x.size() << '\n';
    for(int i = 0; i < x.size(); i++)
	cout << x[i] << ' ';
    cout << '\n';
    cout << y.size() << '\n';
    for(int i = 0; i < y.size(); i++)
	cout << y[i] << ' ';
    cout << '\n';
    return 0;
}
