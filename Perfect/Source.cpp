
//A program to find a perfect number
//A perfect number is one which has it factors sum up to the number
//Excluding the number itself
#include<stdio.h>

void perfect(int);
int main()
{
	int i;
	printf("Enter the number to check\n");
	scanf_s("%d",&i);
	perfect(i);
}
void perfect(int n)
{
	int i,sum=0;
	for (i = n - 1;i > 0;i--)
	{
		if (n%i == 0)
			sum += i;
	}
	if (sum == n)
	{
		printf("THE NUMBER IS PERFECT\n");
    }
	else {
		printf("The number is not is not perfect\n");
	}
}