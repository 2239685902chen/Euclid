#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long q = 0, w = 0, e = 0, r = 0, t = 0, y = 0;
	scanf("%ld%ld", &q, &w);
	long a = q, b = w;
	if (q > w)
	{
		e = q % w;
		while (e)
		{
			q = w;
			w = e;
			e = q % w;
		}
		r = w;
	}
	else
	{
		e = w % q;
		while (e)
		{
			w = q;
			q = e;
			e = w % q;
		}
		r = q;
	}
	t = a * b / r;
	y = r + t;
	printf("%ld\n", y);
	return 0;
}