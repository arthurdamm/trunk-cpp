#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// char *foo = malloc(100);
	for (int i = 0; i < argc; i++) {
		// printf("[%s] ",  argv[i]);
		cout << argv[i] << endl;
	}
	// printf("\n");
	return EXIT_SUCCESS;
}
