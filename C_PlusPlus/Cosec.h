
//cosec of given angle

#include<iostream>
#include<conio.h>
using namespace std;
void main4()
{
	int angle, pow, fact, count = 0;
	double sum = 1.0;
	cout << "\n\nEnter angle : ";
	cin >> angle;

	cout << "\n\n\n\tcos ( " << angle << " ) = 1 ";

	for (int i = 2; i <= 8; i = i + 2)
	{
		pow = 1;
		fact = 1;

		for (int j = 1; j <= i; j++)
		{
			pow = pow * angle;
			fact = fact * i;
		}
		float    term = static_cast<float>(pow) / fact;
		count++;
		if (count % 2 == 0)
		{
			sum = sum - term;
			cout << "- " << pow << "/" << i << "! ";
		}
		else
		{
			sum = sum + term;
			cout << "+ " << pow << "/" << i << "! ";
		}
	}
	cout << "\n\nCosec is = " << sum << "\n\n\n\n\n";
}