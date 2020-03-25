#include<iostream>
#include<conio.h>
#include<windows.h>
void gotoxy(short x, short y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int n,i,j=0,k,x=50,y=50;
	std::cin >> n;
	for (i = 1;i <= n;i++)
	{
		if (i % 2 != 0) {
			for (k = 0;k <=y;k++) {
					if (k < (y - (2*i)))
						std::cout << "\n";
					else {
						for (int z =0;z < x;z++) {
						std::cout << " ";
						}
						std::cout << '#' << "\n";
						Sleep(5);
						}
					}gotoxy(0, 0);
			for (j = 0;j <(y-(2*i));j++) {
				std::cout << "\n";
			}
			for (k = 0;k <=x+(2*i) ;k++) {
				if (k < (x))
					std::cout << " ";
				else
					std::cout << '#';
				Sleep(15);
			}x = (2*i) + x;y = y - (2*i);
		}
		if (i % 2 == 0) {
			gotoxy(0, 0);
			for (k = 0;k <=(y+(2*i));k++) {
				if (k < (y))
					std::cout << "\n";
				else{
					for (int z = 0;z < x;z++) {
						gotoxy(x,k);
						std::cout << '#' ;
						Sleep(5);
					}
				}
			}gotoxy(0, 0);
			for (j = 0;j < y+(2*i);j++) {
				std::cout << "\n";
			}
			for (k = 0;k < x ;k++) {
				if (k < (x - (2*i)))
					std::cout << " ";
				else
					std::cout << '#' ;
				Sleep(5);
			}gotoxy(0, 0);
			x = x - (2* i);y = y + (2 * i);
		}
	}
	_getch();
}
