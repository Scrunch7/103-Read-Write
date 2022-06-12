#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>

void write() {
	std::ofstream myFile;
	std::string userText;

	myFile.open("FileName.txt", std::ios::trunc);

	if (!myFile.is_open()) {
		std::cout << "WARNING: file cannot be opened\n\n";
		return;
	}
	std::cout << "file opened successfully\n\n";

	getline(std::cin, userText);
	myFile << userText << std::endl;

	//only use ignore after 1st input
	std::cin.ignore();
	getline(std::cin, userText);
	myFile << userText << std::endl;

	//assign text to file
	getline(std::cin, userText);
	myFile << "Test input 1..." << std::endl;
	myFile << "Test input 2..." << std::endl;

	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "closed successfully\n";
	}
}