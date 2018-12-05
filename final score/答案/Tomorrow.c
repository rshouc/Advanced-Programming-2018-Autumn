#include<stdio.h> 
int main()
{
	int y, m, d, days, flag = 0, i = 0;
	int dayTable[2][13] = { { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };
	scanf("%d-%d-%d", &y, &m, &d);
	if ((y % 100 != 0) && (y % 4 == 0)||y % 400 == 0)
		flag = 1;

	days = dayTable[flag][m];
	d++;
	if (d>days)
	{
		d = 1;
		m++;
		if (m>12)
		{
			m = 1;
			y++;
		}
	}
	printf("%02d-%02d-%02d\n", y, m, d);
	return 0;
}
