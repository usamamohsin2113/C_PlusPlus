//Draw Rectangle

#include<iostream>
using namespace std;

void DrawRectangle()
{
	int length, width, i, j;
	bool pro;

	cout << "\nEnter the lenght of rectangle (should be > 3) : ";
	cin >> length;

	cout << "\nEnter the width of rectangle (should be > 3) : ";
	cin >> width;

	if (length <= 3 || width <= 3)
	{
		cout << "\n\n\tValue entered does not meet the given conditioN\n\n";
		exit(1);
	}

	cout << "\n\nType 0 for empty and 1 for filled square : ";
	cin >> pro;

	cout << "\n\n\n";

	if (pro == 0)
	{
		for (i = 1; i <= length; i++)
			if (i < 2 || i == length)
			{
				for (j = 0; j < width; j++)
					cout << '*';
				cout << '\n';
			}
			else
			{
				cout << '*';
				for (j = 0; j < width - 2; j++)
					cout << ' ';
				cout << "*\n";
			}
	}

	else if (pro == 1)
	{
		for (i = 0; i < length; i++)
		{
			for (j = 0; j < width; j++)
				cout << "*";
			cout << '\n';

		}
	}

	else
		cout << "\tWrong value entered";

	cout << "\n\n\n";
}

void DrawRhombus()
{
	int i, j, height;

	cout << "\n\nEnter height of rhombus must be odd value : ";
	cin >> height;

	if (height <= 2 || height % 2 == 0)
	{
		cout << "\n\n\tValue entered does not meet the given conditioN\n\n";
		exit(1);
	}

	cout << "\n\n\n";

	for (i = 1; i <= height / 2 + 1; i++)
	{
		for (j = height / 2; j >= i; j--)
			cout << ' ';
		for (j = 1; j <= i * 2; j++)
			if (j == 1 || j == i * 2)
				cout << '*';
			else
				cout << ' ';
		cout << '\n';
	}

	for (i = height / 2; i >= 1; i--)
	{
		for (j = height / 2; j >= i; j--)
			cout << ' ';
		for (j = 1; j <= i * 2; j++)
			if (j == 1 || j == i * 2)
				cout << '*';
			else
				cout << ' ';
		cout << '\n';
	}


	cout << "\n\n\n";

}

void DrawSquare()
{
	int side, i, j;
	bool pro;

	cout << "\n\n Enter the lenght of any side of square (should be > 3) : ";
	cin >> side;
	if (side <= 3)
	{
		cout << "\n\n\tValue entered does not meet the given conditioN\n\n";
		exit(1);
	}
	cout << "\n\nType 0 for empty and 1 for filled square : ";
	cin >> pro;

	cout << "\n\n\n";

	if (pro == 0)
	{
		for (i = 1; i <= side; i++)
			if (i < 2 || i == side)
			{
				for (j = 0; j < side; j++)
					cout << '*';
				cout << '\n';
			}
			else
			{
				cout << '*';
				for (j = 0; j < side - 2; j++)
					cout << ' ';
				cout << "*\n";
			}
	}

	else if (pro == 1)
	{
		for (i = 0; i < side; i++)
		{
			for (j = 0; j < side; j++)
				cout << "*";
			cout << '\n';

		}
	}

	else
		cout << "\tWrong value entered";

	cout << "\n\n\n";
}

void DrawTriangle()
{
	int height, i, j, k;
	bool pro;

	cout << "\nEnter the height of triangle (should be >= 2) : ";
	cin >> height;

	if (height < 2)
	{
		cout << "\n\n\tValue entered does not meet the given conditioN\n\n";
		exit(1);
	}

	cout << "\n\nType 0 for empty and 1 for filled triangle : ";
	cin >> pro;

	cout << "\n\n\n";

	if (pro == 0)
		for (i = 1, k = 1; i <= height; i++, k += 2)
		{
			for (j = height; j > i; j--)
				cout << ' ';
			for (j = 1; j <= k; j++)
				if (j == 1 || j == k || i == height)
					cout << '*';
				else
					cout << ' ';
			cout << '\n';
		}

	else if (pro == 1)
		for (i = 1, k = 1; i <= height; i++, k += 2)
		{
			for (j = height; j > i; j--)
				cout << ' ';
			for (j = 1; j <= k; j++)
				cout << '*';

			cout << '\n';
		}

	else cout << "\tWrong option adopteD";
	cout << "\n\n\n";
}