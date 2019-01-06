#pragma once
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

class getBase
{
public:
	getBase();
	~getBase();

	long int BinToDec(string x);
	string DecToBin(long int x);

	string BinToHex(string x);
	string HexToBin(string x);

	string DecToHex(long int x);
	long int HexToDec(string x);
};
