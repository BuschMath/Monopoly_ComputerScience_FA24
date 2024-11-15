#include <iostream>
#include <iomanip>
#include <cmath>
#include "HowManyPlayers.h"

using namespace std;

int main ()
{
	int startsl = 0;

	for (startsl; startsl <= 1; startsl++)
	{
		cout << "Please select either play or exit" << endl;
		cout << "=================================" << endl;
		cout << "To play monnoplay please input the number 1" << endl;
		cout << "To exit this menu please input anything other than 1" << endl;
		
		

		while (startsl == 0) {
			cin >> startsl;
			if (startsl == 1) {
				cout << ":You have selected Monopoly:" << endl;
			}
			else {
				cout << ":You Have exited the menu, I guess my game wasen't good enough:" << endl;
				startsl++;
			}
		}


 }
	return 0;
}