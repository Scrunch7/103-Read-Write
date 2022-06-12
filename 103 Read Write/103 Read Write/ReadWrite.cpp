#include <fstream>
#include <iostream>
#include <string>
#include "Header.h"

void readWrite() {
	std::fstream myFile;
	std::string myLine;

	myFile.open("FileName.txt", std::ios::in | std::ios::out | std::ios::trunc);

	if (!myFile.is_open()) {
		std::cout << "\nWARNING: file cannot be opened\n\n";
		return;
	}

	std::string lineContent;
	int linesToAdd;
	std::cout << "please enter the number of line to add to this file\n";
	std::cin >> linesToAdd;

	for (int i = 0; i < linesToAdd; i++) {
		std::cout << "please enter meesage " << i + 1 << "\n";
		std::cin.ignore();
		getline(std::cin, lineContent);
		myFile << lineContent << std::endl;
	}

	myFile.seekg(std::ios::beg);

	while (getline(myFile, myLine)) {
		std::cout << myLine << std::endl;
	}

	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "File successfully closed";
	}
}