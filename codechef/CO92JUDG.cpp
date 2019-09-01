#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int alice = 0, bob = 0, alice_max = -1, bob_max = -1;
        for(int i = 0, buf; i < n; i++)
            cin >> buf, alice += buf, alice_max = max(alice_max, buf);
        for(int i = 0, buf; i < n; i++)
            cin >> buf, bob += buf, bob_max = max(bob_max, buf);
        if(alice - alice_max < bob - bob_max) cout << "Alice";
        else if(alice - alice_max == bob - bob_max) cout << "Draw";
        else cout << "Bob";
        cout << '\n';
    }
    return 0;
}