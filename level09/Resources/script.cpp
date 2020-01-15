#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	std::ifstream inFile;
	int i = 0;
	char x;

	inFile.open(argv[1]);

	while (inFile >> x) {
		x -= i;
		std::cout << x;
		i++;
    }
	std::cout << '\n';

	inFile.close();

	return 0;
}