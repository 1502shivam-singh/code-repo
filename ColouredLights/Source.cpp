#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	const char* command = "Color 0A";
	while (1) {
		{
			std::cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t";
			system(command);
			std::cout << "||";
			Sleep(10);
			system("cls");
		}
		{
			std::cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t";
			system("Color 3B");
			std::cout << "//";
			Sleep(15);
			system("cls");
		}
		{	std::cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t";
		system("Color 7c");
			std::cout << "----";
			Sleep(20);
			system("cls");
		}
		{std::cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t";
		system("Color 4f");
		std::cout << "\\";
				Sleep(6);
			system("cls");
		}std::cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t";
		system("Color 9d");
			std::cout << "||";
			Sleep(8);
			system("cls");
	}
}