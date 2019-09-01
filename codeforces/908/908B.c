#include <stdio.h>

char maze[57][57], str[107];
int n, m, posx, posy;

int check(char a, char b, char c, char d)
{
    int i, x = posx, y = posy;
    for(i = 0; str[i] != '\0'; i++)
    {
	if(str[i] == a) x--;
	else if(str[i] == b) x++;
	else if(str[i] == c) y--;
	else if(str[i] == d) y++;

	if(x < 0 || y < 0 || x >= n || y >= m || maze[x][y] == '#') 
	    return 0;
	if(maze[x][y] == 'E')
	    return 1;
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    int i, j;
    for(i = 0; i < n; i++)
	scanf("%s", maze[i]);
    scanf("%s", str);

    for(i = 0; i < n; i++)
	for(j = 0; j < m; j++)
	    if(maze[i][j] == 'S') {
		posx = i; posy = j; break; }

    printf("%d\n", check('0', '1', '2', '3') + check('0', '2', '1', '3') + check('1', '2', '0', '3') + check('1', '0', '2', '3') + check('2', '0', '1', '3') + check('2', '1', '0', '3') + check('1', '2', '3', '0') + check('1', '3', '2', '0') + check('2', '1', '3', '0') + check('2', '3', '1', '0') + check('3', '1', '2', '0') + check('3', '2', '1', '0') + check('0', '1', '3', '2') + check('0', '3', '1', '2') + check('1', '0', '3', '2') + check('1', '3', '0', '2') + check('3', '0', '1', '2') + check('3', '1', '0', '2') + check('0', '2', '3', '1') + check('0', '3', '2', '1') + check('2', '0', '3', '1') + check('2', '3', '0', '1') + check('3', '0', '2', '1') + check('3', '2', '0', '1'));
    return 0;
}
