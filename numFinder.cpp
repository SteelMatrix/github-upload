#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	vector<vector<int>> numberlist;
	numberlist.resize(10);
	ifstream infile("data.txt");
	long val = 0;
	while (infile >> val)
	{
		unsigned int index = floor(val/455000);
		numberlist.at(index).resize(numberlist.at(index).size() + 1);
		numberlist.at(index).push_back(val);
		cout << "Added " << val << " to index " << index << endl;
	}
	cout << "Success!" << endl;
	cout << numberlist[0][0] << " " << numberlist[0][1] << endl;
	return 0;
}
