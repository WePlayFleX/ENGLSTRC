#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
	Distance& dist = *(new Distance);

	dist.getdist();

	dist.showdist();

	cout << endl;

	system("pause");
	return 0;
}