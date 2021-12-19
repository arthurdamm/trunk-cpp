#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char *foo = (char *)malloc(100);
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
	return EXIT_SUCCESS;
}
