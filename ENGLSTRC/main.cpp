#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
	Distance dist;

	dist.getdist();
	dist.showdist();

	Distance* distptr;
	distptr = new Distance;

	distptr->getdist();
	distptr->showdist();

	cout << endl;

	system("pause");
	return 0;
}