#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

struct node {
    node* pres[26];
    bool end;
};

node* make() {
    node* x = (node*) malloc(sizeof(node));
    for(ll i = 0; i < 26; i++)
        x->pres[i] = NULL;
    x->end = 0;
    return x;
}

void insert(node* root, string s) {
    for(ll i = 0; i < s.length(); i++) {
        if(root->pres[s[i] - 'a'] == NULL) {
            node* tmp = make();
            root->pres[s[i] - 'a'] = tmp;
        }
        root = root->pres[s[i] - 'a'];
    }
    root->end = 1;
}

ll search(node* root, string s) {
    ll i = 0; bool mismatch = 0;
    for(; i < s.length(); i++) {
        if(root->pres[s[i] - 'a'] == NULL) {
            mismatch = 1;
            break;
        }
        else root = root->pres[s[i] - 'a'];
    }
    if(mismatch)
        return i;
    else return -1;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector <string> neg;
    ll n; cin >> n;
    node* root = make();
    for(ll i = 0; i < n; i++) {
        char type; string s;
        cin >> type >> s;
        (type == '+') ? insert(root, s) : neg.pb(s);
    }
    set <string> ans; bool ok = 1;
    for(ll i = 0; i < neg.size(); i++) {
        ll lim = search(root, neg[i]);
        if(lim != -1)
            ans.insert(neg[i].substr(0, lim + 1));
        else {
            ok = 0;
            break;
        }
    }
    if(!ok) {
        cout << -1 << '\n';
    } else {
        cout << ans.size() << '\n';
        for(; !ans.empty(); ans.erase(ans.begin()))
            cout << *(ans.begin()) << '\n';
    }
    return 0;
}