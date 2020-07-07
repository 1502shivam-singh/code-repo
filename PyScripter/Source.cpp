#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>

int main() {
	std::string file_data;
	std::ofstream fout;
	std::ifstream fin;
	std::string string;

	fout.open("SearchFile.py");

	while (fout)
	{
		std::getline(std::cin, file_data);
		if (file_data == "-1") { break; }
		fout << file_data<<std::endl;	
	}
	fout.close();
	file_data.erase();
	std::cout << "Your entered code"<<std::endl;
	fin.open("SearchFile.py");
	
	while (fin) {
		std::getline(fin, file_data);
		std::cout << file_data<<std::endl;
	}

	fin.close();
	std::cout << "Output" << std::endl;
	system("SearchFile.py");

	_getch();
}