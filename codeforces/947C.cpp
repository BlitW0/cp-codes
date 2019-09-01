#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 300007

struct node {
    node* pres[2];
    ll cnt;
};

node* make() {
    node* x = (node*) malloc(sizeof(node));
    x->pres[0] = x->pres[1] = NULL;
    x->cnt = 0;
    return x;
}

node* insert(ll n, node* root) {
    for(ll i = 30; i >= 0; i--) {
        int bit = ( (n >> i) & 1 );
        if(root->pres[bit] == NULL)
            root->pres[bit] = make();
        root->pres[bit]->cnt++;
        root = root->pres[bit];
    }
}

void del(ll n, node* root) {
    node* tmp = root;
    for(ll i = 30; i >= 0; i--) {
        int bit = ( (n >> i) & 1 );
        root->pres[bit]->cnt--;
        tmp = root, root = root->pres[bit];
        if(!tmp->pres[bit]->cnt)
            tmp->pres[bit] = NULL;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll n, buf; cin >> n;
    ll inp[MAX]; node* root = make();
    for(ll i = 0; i < n; i++)
        cin >> inp[i];
    for(ll i = 0; i < n; i++)
        cin >> buf, insert(buf, root);
    node* tmp;
    for(ll j = 0; j < n; j++) {
        ll ans = 0; tmp = root;
        for(ll i = 30; i >= 0; i--) {
            int bit = ( (inp[j] >> i) & 1 );
            if(tmp->pres[bit] == NULL) {
                ans ^= ( (bit ^ 1) << i );
                tmp = tmp->pres[bit ^ 1];
            } else 
                ans ^= (bit << i) , tmp = tmp->pres[bit];
        }
        del(ans, root);
        cout << (ans ^ inp[j]) << ' ';
    }
    cout << '\n';
    return 0;
}