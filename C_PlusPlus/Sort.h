#pragma once
class Sort
{
public:
	static void BubbleSort(int arr[], int length)
	{
		bool flag = true;
		int temp;

		for (int i = 1; i < length && flag; i++)
		{
			flag = false;

			for (int j = 0; j < length - 1; j++)
			{
				if (arr[j + 1] < arr[j])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					flag = true;
				}
			}

		}
	}
};

