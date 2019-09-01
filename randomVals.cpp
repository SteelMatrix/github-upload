#include <iostream>
#include <cstdlib>
int main()
{
	for(int i = 0; i < 3000000; i++)
		std::cout << rand() % 5000000 << std::endl;
	return 0;
}
