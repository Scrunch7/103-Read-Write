#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>

void read() {
	//declare new variable of type input file stream (ifstream)
	std::ifstream myFile;
	std::string myLine;

	myFile.open("FileName.txt");

	if (!myFile.is_open()) {
		std::cout << "\nWARNING: file cannot be opened";
		return;
	}
	std::cout << "\nSuccess\n\n";

	//as long as another line exists with content, assign to the myLine string variable
	while (getline(myFile, myLine)) {
		std::cout << myLine << std::endl;
	}

	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "successfully closed\n\n";
	}
}