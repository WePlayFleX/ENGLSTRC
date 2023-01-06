#pragma once
using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	void getdist()
	{
		cout << "\nEnter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: "; 
		cin >> inches;
	}
	void showdist() 
	{
		cout << feet << "\'-" << inches << '\"';
	}
};