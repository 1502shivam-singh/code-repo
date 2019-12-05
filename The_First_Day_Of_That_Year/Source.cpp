#include<iostream>
#include<string.h>
int main()
{
	using namespace std;
	int year;
	char* str[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	char*day = str[0];
	cout << "\t\tThe First Day Of That Year After 1900\n\n\n";
	cout << "Enter any year after 1900, I will tell the first day of that day\n";
	cin >> year;
	int m = year - 1900;
	{
		int n = 0;
		for (int i = 1;i <= m;i++)
			{
				if ((i % 4 == 0) && ((i+100) % 100 != 0))
				{
					if ((n + 2) > 6) {
						n = (((n + 2) - 6)-1);
						day = str[n];
					}
					else
						n += 2;
						day = str[n];

				}
				else
				{
					if ((n + 1) > 6) {
						n = 0;
						day = str[0];
					}
					else
						n += 1;
					day = str[n];
				}
			}
		
		}
	cout << "The day in the year " << year << " is " << day;
}