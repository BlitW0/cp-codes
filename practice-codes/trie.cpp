#include <bits/stdc++.h>
using namespace std;

struct node
{
    node* pres[26];
    bool end;
};

node* make(node* x)
{
    x = (node*) malloc(sizeof(node));
    for(int i = 0; i < 26; i++)
    x->pres[i] = NULL;
    x->end = 0;
}

void insert(string s, node* trie)
{
    for(int i = 0; i < s.length(); i++) {
    if(trie->pres[s[i] - 'a'] == NULL) {
        node* tmp; tmp = make(tmp);
        trie->pres[s[i] - 'a'] = tmp;
    }
    trie = trie->pres[s[i] - 'a'];
    }
    trie->end = 1;
}

bool search(string s, node* trie)
{
    for(int i = 0; i < s.length(); i++) {
    if(trie->pres[s[i] - 'a'] == NULL)
        return 0;
    trie = trie->pres[s[i] - 'a'];
    }
    return trie->end == 1;
}

int main()
{
    int n; cin >> n; string s;
    node *trie; trie = make(trie);
    for(int i = 0; i < n; i++) {
    cin >> s;
    insert(s, trie);
    }
    int q; cin >> q;
    while(q--) {
    string str; cin >> str;
    cout << search(str, trie) << endl;
    }
    return 0;
}
