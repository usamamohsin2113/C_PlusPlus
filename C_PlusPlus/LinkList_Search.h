#include<iostream>
using namespace std;

namespace LinkList_Search
{
	struct point
	{
		int data;
		point* link;
	};

	point* head;


	void insert()
	{
		point* obj = new point;
		cout << "\n Enter value : ";
		cin >> obj->data;
		obj->link = head;
		head = obj;
	}

	bool find(int no)
	{
		bool check = false;
		point* temp = head;
		while (temp != NULL)
		{
			if (temp->data = no)
			{
				check = true;
				break;
			}

			temp = temp->link;
		}
		return check;
	}

	void LinkList_Search_Usage()
	{
		head = NULL;
		int no;
		char c;
		do
		{
			insert();
			cout << "\n Do you want to enter another value ? ";
			cin >> c;
		} while (c == 'y' || c == 'Y');

		cout << "\n Enter value to search : ";
		cin >> no;

		if (find(no))
			cout << "\n\n Value Found ";
		else
			cout << "\n\n Value not Found";
	}
}
