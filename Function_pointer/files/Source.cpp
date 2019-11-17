#include<iostream>

void sump(int s, void *p);

void sum(int i, int j);

void(*p)(int, int) = &sum;

int main()
{
	int i, j;
	std::cout << "Enter two numbers\n";
	std::cin >> i >> j;
	std::cout << "The sum is ";
	sum(i, j);
	std::cin.get();
}

void sump(int s, void *p) {
	std::cout << s;
}


void sum(int i, int j) {
	int s;
	s = i + j;
	sump(s, sum);
}

