#include "convert.h"

using namespace std;

int main()
{
	while (1)
	{
		int i;
		cout << "1. Binary (Base 2)" << endl;
		cout << "2. Decimal (Base 10)" << endl;
		cout << "3. Hexadecimal (Base 16)" << endl;
		cout << "0. Exit" << endl;
		cout << "Please select input base (1-3): ";
		cin >> i;

		string x;

		getBase convert;

		switch (i)
		{
		case 0:
			return 0;
		case 1:
			cout << "Please enter binary number: ";
			cin >> x;
			cout << "Dec: " << convert.BinToDec(x) << endl;
			cout << "Hex: " << convert.BinToHex(x) << endl;
			cout << endl;
			continue;
		case 2:
			cout << "Please enter decimal number: ";
			cin >> x;
			cout << "Bin: " << convert.DecToBin(stol(x)) << endl;
			cout << "Hex: " << convert.DecToHex(stol(x)) << endl;
			cout << endl;
			continue;
		case 3:
			cout << "Please enter hexadecimal number: ";
			cin >> x;
			cout << "Bin: " << convert.HexToBin(x) << endl;
			cout << "Dec: " << convert.HexToDec(x) << endl;
			cout << endl;
			continue;
		default:
			cout << "Invalid selection." << endl;
			cout << endl;
			continue;
		}
	}
	return 0;
}