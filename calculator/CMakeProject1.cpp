// msdos_calc.cpp : Defines the entry point for the application.
//

#include "msdos_calc.h"

using namespace std;

int main()
{
	while (true) {
		int choice;
		int x, y, z;
		int r, a;
		cout << "calculator" << endl;
		cout << "1 pentru un calculator simplu" << endl;
		cout << " 2 pentru un calculator avansat" << endl;
		cin >> a;
		while (a == 1) {
			cout << "1 prntru +" << endl;
			cout << "2 pentru -" << endl;
			cout << "3 pentru X" << endl;
			cout << "4 pentru %" << endl;
			cout << "9 inapoi" << endl;
			cout << "0 iesire" << endl;
			cin >> choice;
			if (choice == 0) {
				return -1;
			}
			if (choice == 9) {
				a = 0;
				choice = 20;
			}
			if (choice == 1) {
				cout << " primul nr" << endl;
				cin >> x;
				cout << "al doilea nr" << endl;
				cin >> y;
				int sum = x + y;
				cout << sum << endl;
				choice = 20;
			}
			if (choice == 2) {
				cout << " primul nr" << endl;
				cin >> x;
				cout << "al doilea nr" << endl;
				cin >> y;
				int sum = x - y;
				cout << sum << endl;
				choice = 20;
			}

			if (choice == 3) {
				cout << " primul nr" << endl;
				cin >> x;
				cout << "al doilea nr" << endl;
				cin >> y;
				int sum = x * y;
				cout << sum << endl;
				choice = 20;
			}
			if (choice == 3) {
				cout << " first nr" << endl;
				cin >> x;
				cout << "second nr" << endl;
				cin >> y;
				int sum = x / y;
				cout << sum << endl;
				choice = 20;
			}

		}
		while (a == 2) {
			cout << "1 prntru +" << endl;
			cout << "2 pentru -" << endl;
			cout << "3 pentru X" << endl;
			cout << "4 pentru %" << endl;
			cout << "9 inapoi" << endl;
			cout << "0 iesire" << endl;
			cin >> choice;
			if (choice == 0) {
				return -1;
			}
			if (choice == 9) {
				a = 0;
				choice = 20;
			}


		}
	}

	return 0;
}
