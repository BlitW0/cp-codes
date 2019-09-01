#include <stdio.h>

int main()
{
    int prev[26] = {0};
    int now[26] = {0};
    char a[107], b[107], str[107];
    scanf("%s %s %s", a, b, str);
    int i, ok = 1;
    for(i = 0; a[i] != '\0'; i++) prev[a[i] - 'A']++;
    for(i = 0; b[i] != '\0'; i++) prev[b[i] - 'A']++;
    for(i = 0; str[i] != '\0'; i++) now[str[i] - 'A']++;
    for(i = 0; i < 26; i++)
	if(prev[i] != now[i]) {
	    ok = 0; break; }
    if(!ok) printf("NO\n");
    else printf("YES\n");
}
