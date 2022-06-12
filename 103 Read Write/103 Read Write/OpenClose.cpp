#include <fstream>
#include <iostream>
#include "Header.h"

void openClose() {
	//creates a new variable myFile of output type system (ofstream)
	std::ofstream myFile;

	//sets myFile to a file called FileName.txt
	myFile.open("FileName.txt");

	//checking if file is open
	if (!myFile.is_open()) {
		std::cout << "WARNING: cannot open file\n";
		return;
	}
	std::cout << "File created and opened successfully\n\n";
	myFile.close();
	//checking if file is closed
	if (!myFile.is_open()) {
		std::cout << "Closed successfully\n\n";
	}
}