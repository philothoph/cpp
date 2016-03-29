#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

void print(vector<int>::const_iterator beg, vector<int>::const_iterator en)
{
	if (beg != en)
	{
		cout << *beg << endl;
		print(++beg, en);
	}
}

int main()
{
	vector<int> vec{ 1, 1, 2, 3, 5, 8, 13, 21 };
	
	print(vec.begin(), vec.end());

	return 0;
}
