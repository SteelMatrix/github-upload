#include <iostream>
#include <vector>
#include <fstream>

bool vectorContainsInt(std::vector<int>& set, int n)
{
	for (int i = 0; i < set.size(); i++)
	{
		if (set[i] == n)
			return true;
	}

	return false;
}

int main()
{
	std::vector<int> numbers;
	unsigned int cap = numbers.capacity();
	numbers.reserve(12000000);
	std::cout << "Initial capacity: " << numbers.capacity() << std::endl;

	std::ifstream fin("data.txt");

	while(true)
	{
		int num;
		fin >> num;
		if (fin.eof())
			break;
		numbers.push_back(num);
	}

	std::cout << "Read " << numbers.size() << " numbers" << std::endl;
	std::cout << "Does the set contain 37?: " << vectorContainsInt(numbers, 37) << std::endl;
	return 0;
}

