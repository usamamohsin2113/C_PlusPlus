#include<iostream>
using namespace std;

namespace DecimalToBinary
{

	int* into_binary(int);
	void flo_binary(double);

	int n = 0, c[50];

	void DecimalToBinaryUsage()
	{
		float dec;

		cout << "\n\n Enter decimal value : ";
		cin >> dec;

		flo_binary(dec);

		cout << "\n\n\n";
	}

	void flo_binary(double fd)
	{
		int bi, db = 0;
		bi = int(fd);
		fd -= bi;
		cout << fd;
		int* poi = into_binary(bi);
		cout << "\n\n Converted value : ";
		for (n; n >= 0; n--) {
			cout << poi[n];
		}
		cout << '.';

		for (int i = 0; i < 4; i++)
		{
			cout << fd * 2.0;
			db = int(fd * 2.0f);
			cout << db;
			fd -= double(db);
		}
	}

	int* into_binary(int p)
	{
		do
		{
			c[n] = p % 2;
			p = p / 2;
			cout << "\n" << p << '\t' << c[n];
			n++;
		} while (p / 2 >= 1);
		c[n] = p;
		return c;
	}

}