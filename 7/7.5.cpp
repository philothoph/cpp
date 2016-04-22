#include <iostream>
#include "Person.h"

using std::cout; using std::endl;

int main()
{
	Person man;
	man.nm = "John";
	man.adrs = "Piccadilli St 43";

	cout << man.name() << " " << man.address() << endl;

	return 0;
}
