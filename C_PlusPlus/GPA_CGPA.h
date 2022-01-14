#include<iostream>
#include<conio.h>
using namespace std;
char menu();
void gpa();
char repition();
void cgpa();
bool cre_sub(double);
bool cre_sem(double);
bool numbers(int);
double subgp(int);
bool gpchk(double&);
char name[10];
bool val;
bool end();

void main1()
{
	char m, rep;
	bool def;

	cout << "\n\t\t\t    * * * * * * * * * * * * * *";
	cout << "\n\t\t\t    *                         *";
	cout << "\n\t\t\t    *     This program  is    *";
	cout << "\n\t\t\t    *      developed   by     *";
	cout << "\n\t\t\t    *       Usama Mohsin      *";
	cout << "\n\t\t\t    *                         *";
	cout << "\n\t\t\t    * * * * * * * * * * * * * *";

	cout << "\n\n Enter your name dear user : ";
	cin >> name;

	cout << "\n\n\n\t\t * * * Wellcome ! " << name << " * * *";


	do
	{
		m = menu();
		do
		{

			switch (m)
			{
			case '1':
				gpa();
				def = true;
				rep = repition();
				break;

			case '2':
				cgpa();
				def = true;
				rep = repition();
				break;

			case '3':
				rep = end();
				break;

			default:
				cout << "\n\n\tX X X\t" << name << " , you have chosen an unspecified option\t X X X";
				cout << "\n\n Please enter one of the available options : ";
				cin >> m;
				def = false;
				break;
			}
		} while (def == false);
	} while (rep == 'y' || rep == 'Y');
}

void gpa()
{
	int i, n, num;
	double totcre = 0, credit, subgpa[15], totalgpa = 0.0, gpaval;
	char sub[15][30];
	cout << "\n\n\n\t\t\t\t\b\b\b * * *  G P A  * * *";

	do
	{
		cout << "\n\n\n Enter the number of subjects : ";
		cin >> n;
		if (n < 1 || n>15)
		{
			cout << "\n\n\n\tX X X\tIncorrect no. of subjects specified\t X X X";
			cout << "\n\n\tX X X\t Your value must vary from 1 to 15\t X X X\n";
			val = false;
		}
		else val = true;
	} while (val == false);

	for (i = 0; i < n; i++)
	{
		cout << "\n Enter the name of subject " << i + 1 << " : ";
		cin >> sub[i];
		do
		{
			cout << "\n Enter the credit hours of " << sub[i] << " : ";
			cin >> credit;
			val = cre_sub(credit);
		} while (val == false);
		totcre += credit;

		do
		{
			cout << "\n Enter your obtained marks in " << sub[i] << "   : ";
			cin >> num;
			val = numbers(num);
		} while (val == false);
		subgpa[i] = subgp(num);
		totalgpa += float(subgpa[i] * credit);
	}

	gpaval = totalgpa / float(totcre);

	cout << "\n\n\t\t* * * * * * R E S U L T * * * * * *";
	cout << "\n\n\t\t\t" << name << " , your \n";
	for (i = 0; i < n; i++)
		cout << "\n\n\t\t\tGPA in " << sub[i] << " is " << subgpa[i];

	cout << "\n\n\t\t\tAnd your total GPA is " << gpaval << "\n\n";
}

double subgp(int numb)
{
	if (numb >= 85)
		return 4;

	else if (numb >= 80 && numb <= 84)
		return 3.7;

	else if (numb >= 75 && numb <= 79)
		return 3.3;

	else if (numb >= 70 && numb <= 74)
		return 3;

	else if (numb >= 65 && numb <= 69)
		return 2.7;

	else if (numb >= 61 && numb <= 64)
		return 2.3;

	else if (numb >= 58 && numb <= 60)
		return 2;

	else if (numb >= 55 && numb <= 57)
		return 1.7;

	else if (numb >= 51 && numb <= 54)
		return 1.3;

	else if (numb == 50)
		return 1;

	else return 0;
}


bool cre_sub(double credit)
{
	if (credit <= 0)
	{
		cout << "\n\n\tX X X\tI don't think that there can be " << credit << " credit hours\tX X X\n\n";
		return false;
	}
	else if (credit >= 4)
	{
		cout << "\n\n\tX X X\t    Dear " << name << " , according to my knowledge  \tX X X";
		cout << "\n\n\tX X X\t     a subject has maximum 4 credit hours\tX X X";
		cout << "\n\n\tX X X\tAnd if I am wrong please inform my Programmer\tX X X\n\n";
		return false;
	}
	else return true;
}

bool cre_sem(double credit)
{
	if (credit <= 0)
	{
		cout << "\n\n\tX X X\tI don't think that there can be " << credit << " credit hours\tX X X\n\n";
		return false;
	}
	else if (credit >= 20)
	{
		cout << "\n\n\tX X X\t    Dear " << name << " , according to my knowledge  \tX X X";
		cout << "\n\n\tX X X\t    a semester has maximum 20 credit hours\t X X X";
		cout << "\n\n\tX X X\tAnd if I am wrong please inform my Programmer\tX X X\n\n";
		return false;
	}
	else return true;
}

bool numbers(int no)
{
	if (no < 0 || no>100)
	{
		cout << "\n\n\tX X X\tYour value must vary between 0 and 100\tX X X\n\n";
		return false;
	}

	else return true;
}

char menu()
{
	char n;
	cout << "\n\n\n Dear " << name << " following options are available for You : ";
	cout << "\n\n\n 1) Calculate G P A\t\t2) Calculate C G P A";
	cout << "\n\n 3) Exit the Program";
	cout << "\n\n\n Enter your choice : ";
	cin >> n;
	return n;
}

char repition()
{
	char c;
	cout << "\n\n\n Dear " << name << " , Do you want to use the program again ???\n\n respond with yes or no : ";
	cin >> c;

	do
	{
		if (c == 'y' || c == 'Y')
			val = true;

		else if (c == 'n' || c == 'N')
		{
			val = end();
		}

		else
		{
			cout << "\n\n I have asked you to respond with yes or no : ";
			cin >> c;
			val = false;
		}
	} while (val == false);
	return c;
}

void cgpa()
{
	int i, n, credithrs = 0, credit;
	double gp, totalgp = 0.0, cgp;
	cout << "\n\n\n\t\t\t * * *  C G P A  * * *";
	cout << "\n\n\n Enter the number of semester of whom you want to calculate the CGPA : ";
	cin >> n;
	while (n <= 1 || n > 10)
	{
		if (n == 1)
		{
			cout << "\n\n   X X X         CGPA of 1 semester is the GPA of that semester         X X X";
			cout << "\n\n   X X X   So , to calculate CGPA your value should be greator than 1   X X X";
		}
		else if (n < 1)
			cout << "\n\n   X X X     I have not heard about a degree having " << n << " semesters \tX X X";

		else
		{
			cout << "\n\n   X X X  I don't know about a degree that have more than 10 semesters  X X X";
			cout << "\n\n   X X X         And if I am wrong , please inform my programmer        X X X";
		}

		cout << "\n\n Enter the modified value : ";
		cin >> n;
	}
	cout << "\n\n " << name << " , ";

	for (i = 0; i < n; i++)
	{
		cout << "\n\tEnter gpa of semester " << i + 1 << " : ";
		cin >> gp;
		do
		{
			val = gpchk(gp);
		} while (val == false);

		do
		{
			cout << "\n\tEnter the total credit hours of semester " << i + 1 << " : ";
			cin >> credit;
			val = cre_sem(credit);
		} while (val == false);

		totalgp += gp * credit;
		credithrs += credit;
	}

	cgp = totalgp / credithrs;

	cout << "\n\n\n\t* * * C G P A is " << cgp << " * * *";
}

bool gpchk(double& g)
{
	if (g > 4)
	{
		cout << "\n\n\tOutstanding ! Congratulations " << name << " on having " << g << " GPA";
		cout << "\n\n\tBut Sorry , I am Programmed to get the value upto 4, ";
		cout << "\n\n\tSo , Enter the correct value : ";
		cin >> g;
		return false;
	}

	else if (g < 0)
	{
		cout << "\n\n\tReally Amazing ! Negative GPA . . . ";
		cout << "\n\n\tBut I can't process the negative value,";
		cout << "\n\n\tSo , Enter the correct value : ";
		cin >> g;
		return false;
	}

	else return true;
}

bool end()
{
	cout << "\n\n\n\t Thankyou ! " << name << "  for using the program";
	cout << "\n\n\t Please contact me If you have any suggestion or want to\n\t report a problem about the program ";
	cout << "\n\n\n\tContact no.  :   0322-5653573";
	cout << "\n\n\t   Email     :   usamamohsin2113@gmail.com\n\n\n";
	cout << " Press any key to terminate the program . . .";
	
	return true;
}