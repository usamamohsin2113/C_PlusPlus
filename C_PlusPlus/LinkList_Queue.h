#include<iostream>
using namespace std;

struct list
{
	int info;
	list* link;
};

list* head = NULL;

void insert()
{
	char choice;
	cout << "\n\n Do you want to enter a value ? ";
	cin >> choice;
	while (choice == 'Y' || choice == 'y')
	{
		list* obj = new list;
		cout << "\n\n Enter value : ";
		cin >> obj->info;
		obj->link = head;
		head = obj;
		cout << "\n\n Do you want to enter another value ? ";
		cin >> choice;
	}

	if (head != NULL && head->link != NULL)
	{
		list* temp = head;
		while (temp->link != NULL)
		{
			temp = temp->link;
		}
		temp->link = head;
	}
}

void show()
{
	if (head == NULL)
		cout << "\n\n List is empty";

	else if (head->link == NULL)
		cout << "\n\n Value is : " << head->info;

	else
	{
		list* temp = head;
		do
		{
			cout << "\n\n Value is : " << temp->info;
			temp = temp->link;
		} while (temp != head);
	}
}

list* search(int val)
{
	if (head == NULL)
		return NULL;

	else
	{
		list* temp = head;

		do
		{
			if (temp->info == val)
			{
				return temp;
			}
			else
			{
				temp = temp->link;
			}
		} while (temp != head && temp != NULL);
	}
	return NULL;
}


void insertionatparticularnode(int val)
{
	list* temp = search(val);
	if (temp == NULL)
	{
		cout << "\n\n Value not found in the list";
		return;
	}

	else
	{
		cout << "\n\n Enter new value : ";
		cin >> temp->info;
	}
}

void insertionbeforeparticularnode(int val)
{
	list* temp = search(val);
	if (temp == NULL)
	{
		cout << "\n\n Value not found in the list ";
		return;
	}

	else
	{
		list* obj = new list;
		cout << "\n\n Enter value : ";
		cin >> obj->info;

		if (temp == head)
		{
			if (temp->link == NULL)
			{
				temp->link = obj;
			}

			else
			{
				list* temp1 = head;
				do
				{
					temp1 = temp1->link;
				} while (temp1->link != head);

				temp1->link = obj;
			}
			obj->link = temp;
			head = obj;
		}

		else
		{
			list* temp1 = head->link;
			while (temp1->link != temp)
			{
				temp1 = temp1->link;
			}

			temp1->link = obj;
			obj->link = temp;
		}

	}
}

void insertionafterparticularnode(int val)
{
	list* temp = search(val);

	if (temp == NULL)
	{
		cout << "\n\n Value not found in the list ";
		return;
	}

	else
	{
		list* obj = new list;
		cout << "\n\n Enter value : ";
		cin >> obj->info;
		if (temp->link == NULL || temp->link == head)
		{
			temp->link = obj;
			obj->link = head;
		}

		else
		{
			list* temp1 = temp->link;
			obj->link = temp1;
			temp->link = obj;
		}

	}
}

void deletionatparticularnode(int val)
{
	list* temp = search(val);

	if (temp == NULL)
	{
		cout << "\n\n Value not found in the list ";
		return;
	}

	else if (temp == head)
	{
		head = temp->link;

		if (head != NULL)
		{
			if (head->link == head)
				head->link = NULL;

			else
			{
				list* temp1 = head->link;
				while (temp1->link != temp)
				{
					temp1 = temp1->link;
				}

			}

		}

	}
}

void LinkList_Queue_Usage()
{
	insert();
	insertionafterparticularnode(3);
	show();
}