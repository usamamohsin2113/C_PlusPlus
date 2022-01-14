#include<iostream>
using namespace std;

struct list
{
	int info;
	list* link;
};

list* head;

void enter(int val)
{
	list* obj = new list;
	obj->link = head;
	head = obj;
	obj->info = val;
}

void del_list()
{
	if (head == NULL)
		cout << "\n List is empty";
	else if (head->link == NULL)
	{
		cout << "\n Value is " << head->info;
		delete head;
	}

	else
	{
		list* temp = head;
		while (head != NULL)
		{
			cout << "\n Value is " << head->info;
			temp = head;
			head = head->link;
			delete temp;
		}
	}
}

void show()
{
	if (head == NULL)
		cout << "\n List is empty";
	else if (head->link == NULL)
		cout << "\n Value is " << head->info;
	else
	{
		list* temp = head;
		while (temp != NULL)
		{
			cout << "\n Value is " << temp->info;
			temp = temp->link;
		}
	}
}

void LinkList_Delete_Usage()
{
	head = NULL;
	int val;
	char check;
	do
	{
		cout << "\n Enter value : ";
		cin >> val;
		enter(val);
		cout << "\n Do you want to enter another value ? ";
		cin >> check;
	} while (check == 'y' || check == 'Y');

	show();
	del_list();
	show();

}