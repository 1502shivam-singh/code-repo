#include<stdio.h>

long double fact(long double);
long double power(long double, long double);
int main()
{
	long double p, u = 0;
	long double sum = 0;
	printf("Enter the power you want to evalute of e\n");
	scanf_s("%lf", &p);
		while(u<25)
	{
		sum += power(p,u) / fact(u);
		u++;

	}
	printf("The value of power is %.3lf",sum);
}
long double fact(long double i)
{
	float l = 1, m;
	for (m = 1;m <= i;m++)
	{
		l *= m;
	}
	return l;
}
long double power(long double i, long double p)
{
	long double l, s = 1;
	for (l = 1;l <= p;l++)
	{
		s *= i;
	}
	return s;
}