#include <bits/stdc++.h>
using namespace std;

int main()
{
    double R, x1, y1, x2, y2;
    cin >> R >> x1 >> y1 >> x2 >> y2;
    double pos;
    if((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) >= R*R)
	pos = 1;
    else
	pos = 0;
    double x, y, r;
    if(pos)
	printf("%.1lf %.1lf %.1lf\n", (double)x1, (double)y1, (double)R);
    else
    {
    	if(x1 == x2)
    {
	x = x1;
	if(y1 > y2) y = (y1 + R + y2)/2;
	else if(y1 == y2) y = (y1 + R + y2)/2;
	else y = (y2 + y1 - R)/2;
	printf("%.20lf %.20lf %.20lf\n", x, y, abs(y - y2));
	return 0;
    }
	double temp = (R*abs(x2 - x1))/sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	double neg = x1 - temp, pos = x1 + temp;
	double negy = (y1 + ((y2 - y1)*(neg - x1))/(x2 - x1) + y2)/2;
	double posy = (y1 + ((y2 - y1)*(pos - x1))/(x2 - x1) + y2)/2;
	neg = (neg + x2)/2; pos = (pos + x2)/2;
	double d1 = (x2 - neg)*(x2 - neg) + (y2 - negy)*(y2 - negy);
	double d2 = (x2 - pos)*(x2 - pos) + (y2 - posy)*(y2 - posy);
	if(d1 > d2)
	{
	    printf("%.20lf %.20lf %.20lf\n", neg, negy, sqrt(d1));
	}
	else
	{
	    printf("%.20lf %.20lf %.20lf\n", pos, posy, sqrt(d2));
	}
    }
    return 0;
}
