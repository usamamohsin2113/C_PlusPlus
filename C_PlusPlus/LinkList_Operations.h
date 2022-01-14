#include<iostream>
using namespace std;

namespace LinkList_Operations
{


	struct list
	{
		int info;
		list* left, * right;
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
			if (head == NULL)
				obj->right = NULL;

			else
			{
				obj->right = head;
				head->left = obj;
			}
			head = obj;
			obj->left = NULL;
			cout << "\n\n Do you want to enter another value ? ";
			cin >> choice;
		}
	}

	void show()
	{
		if (head == NULL)
			cout << "\n\n List is empty";

		else
		{
			list* temp = head;
			while (temp != NULL)
			{
				cout << "\n\n Value is : " << temp->info;
				temp = temp->right;
			}
		}
	}

	list* search(int val)
	{
		if (head == NULL)
		{
			return NULL;
		}

		else
		{
			list* temp = head;
			while (temp != NULL)
			{
				if (temp->info == val)
					return temp;
				temp = temp->right;
			}
		}
		return NULL;
	}

	void insertionatparticularnode(int val)
	{
		list* temp = search(val);

		if (temp == NULL)
		{
			cout << "\n\n Value not found in the list ";
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
			obj->right = temp->right;
			obj->left = temp->left;
			if (temp == head)
				head = obj;
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
			obj->right = temp->right;
			obj->left = temp;
			temp->right = obj;
		}
	}

	void deletionatparticularnode(int val)
	{
		list* temp = search(val);

		if (temp == NULL)
		{
			cout << "\n\n Value not found in the list";
			return;
		}

		else
		{
			if (temp == head)
				head = temp->right;
			else
			{
				temp->left->right = temp->right;

				if (temp->right != NULL)
					temp->right->left = temp->left;
			}
			delete temp;
		}
	}

	void deletionbeforeparticularnode(int val)
	{
		list* temp = search(val);

		if (temp == NULL)
		{
			cout << "\n\n Value not found in the list";
			return;
		}

		else if (temp == head)
		{
			cout << "\n\n No value exists before the specified value ";
			return;
		}

		else
		{
			list* temp1 = temp->left;
			if (temp1 == head)
				head = temp;
			else
			{
				temp->left = temp1->left;
				temp1->left->right = temp;
			}

			delete temp1;
		}
	}

	void deletionafterparticularnode(int val)
	{
		list* temp = search(val);

		if (temp == NULL)
		{
			cout << "\n\n Value not found in the list ";
			return;
		}

		else if (temp->right == NULL)
		{
			cout << "\n\n No value exists after the specified value ";
			return;
		}

		else
		{
			list* temp1 = temp->right;
			temp->right = temp1->right;
			if (temp1->right != NULL)
			{
				temp1->right->left = temp;
			}

			delete temp1;
		}
	}

	void showreverse()
	{
		if (head == NULL)
		{
			cout << "\n\n List is empty ";
			return;
		}

		else if (head->right == NULL)
		{
			cout << "\n Value is : " << head->info;
			return;
		}

		else
		{
			list* temp = head;
			while (temp->right != NULL)
			{
				temp = temp->right;
			}

			while (temp != NULL)
			{
				cout << "\n Value is : " << temp->info;
				temp = temp->left;
			}
		}
	}

	void LinkList_Operations_Usage()
	{
		insert();
		show();
		showreverse();
		show();
	}
}

