#include<iostream>
using namespace std;

struct node
{
	int info;
	node* link;
};

node* head1 = NULL, * head2 = NULL;

node* insert(node* head, int val)
{
	node* obj = new node;
	obj->info = val;
	obj->link = head;
	return obj;
}

void show(node* head)
{
	if (head == NULL)
	{
		cout << "\n List is empty ";
		return;
	}

	else
	{
		node* temp = head;
		while (temp != NULL)
		{
			cout << "\n Value is : " << temp->info;
			temp = temp->link;
		}
	}
}

void concatinate(node* head11, node* head22)
{
	if (head1 == NULL)
		head11 = head22;

	else if (head22 == NULL)
		return;

	else if (head11->link == NULL)
		head11->link = head22;

	else
	{
		node* temp = head11;
		while (temp->link != NULL)
			temp = temp->link;

		temp->link = head22;
	}
}

void main3()
{


	char check;
	int val;
	do
	{
		cout << "\n Enter value : ";
		cin >> val;
		head1 = insert(head1, val);
		cout << "\n Do you want to enter another value ? ";
		cin >> check;
	} while (check == 'Y' || check == 'y');

	do
	{
		cout << "\n Enter value : ";
		cin >> val;
		head2 = insert(head2, val);
		cout << "\n Do you want to enter another value ? ";
		cin >> check;
	} while (check == 'Y' || check == 'y');

	cout << "\n List 1 :";
	show(head1);
	cout << "\n List 2 :";
	show(head2);
	concatinate(head1, head2);

	cout << "\n Concatinated List : ";
	show(head1);
}
