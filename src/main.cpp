#include <iostream>
#include "../include/QuickStart.hpp"


using namespace std;

int main(int argc, char *argv[]) 
{
	cout << "Hello Easy C++ project!" << endl;

	QuickStart cQuickStart;

	int iResult = cQuickStart.add(9,9);

	cout << " iResult " << iResult <<endl;
}