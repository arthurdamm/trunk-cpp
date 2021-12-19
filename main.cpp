#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdio>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream csv;
	csv.open("test.csv");
	string line = "";
	while (getline(csv, line)) {
		string name, tempString;
		int id;
		double gpa;

		stringstream inputString(line);
		getline(inputString, name, ',');
		getline(inputString, tempString, ',');
		id = atoi(tempString.c_str());
		getline(inputString, tempString, ',');
		gpa = atof(tempString.c_str());

		printf(">> [%s] [%d] [%g]\n", name.c_str(), id, gpa);

	}

	return EXIT_SUCCESS;
}
