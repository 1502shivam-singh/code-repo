#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>

int main() {
	std::string file_data;
	std::ofstream fout;
	std::ifstream fin;
	std::string string;

	std::cout << "Write your code below, to end code session write -1 and press enter :" << std::endl << std::endl;
	fout.open("SearchFile.py");

	while (fout)
	{
		std::getline(std::cin, file_data);
		if (file_data == "-1") { break; }
		fout << file_data<<std::endl;	
	}
	fout.close();
	file_data.erase();
	std::cout <<std::endl<< "Your entered code"<<std::endl<<std::endl;
	fin.open("SearchFile.py");
	
	while (fin) {
		std::getline(fin, file_data);
		std::cout << file_data<<std::endl;
	}

	fin.close();
	std::cout <<std::endl<< "Output" << std::endl;
	system("SearchFile.py");		//Executes the written python script

	_getch();
}
