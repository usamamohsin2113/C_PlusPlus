//Game Tries

#include <cstdlib>
#include <iostream>
#include<ctime>

using namespace std;

void GameTries()
{
	int tries, roll, n[6] = { 0,0,0,0,0,0 };
	srand(time(0));

	cout << "\nEnter number of tries : ";
	cin >> tries;

	for (int i = 0; i < tries; i++)
	{
		roll = rand() % 6 + 1;

		if (roll == 1)
			n[0]++;

		else if (roll == 2)
			n[1]++;

		else if (roll == 3)
			n[2]++;

		else if (roll == 4)
			n[3]++;

		else if (roll == 5)
			n[4]++;

		else if (roll == 6)
			n[5]++;
	}

	cout << "\n\n";

	for (i = 0; i < 6; i++)
	{
		cout << ' ' << i + 1 << " : " << n[i] << "\t\t";
		for (int j = 1; j <= n[i]; j++)
			cout << '*';
		cout << '\n';
	}
	cout << "\n\n";

}