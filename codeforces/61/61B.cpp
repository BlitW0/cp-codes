#include <bits/stdc++.h>
using namespace std;

string lowerstr(string s)
{
    string res = "";
    for(int i = 0; i < s.length(); i++)
	if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
	    res += tolower(s[i]);
    return res;
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    a = lowerstr(a), b = lowerstr(b), c = lowerstr(c);

    set <string> conc;
    conc.insert(a + b + c), conc.insert(a + c + b);
    conc.insert(b + a + c), conc.insert(b + c + a);
    conc.insert(c + a + b), conc.insert(c + b + a);

    int n; cin >> n;
    string inp;
    for(int i = 0; i < n; i++) {
	cin >> inp;
	inp = lowerstr(inp);
	if(conc.find(inp) != conc.end()) cout << "ACC\n";
	else cout << "WA\n";
    }
    return 0;
}
