#include<iostream>
using namespace std;

namespace LinkList_Operations
{
	/*struct node
	{
		int info;
		node* left, * right;
	};*/

	struct ListNode
	{
		int value;
		ListNode* listNode;
	};

	ListNode* head = NULL;

	void Insert()
	{
		ListNode* node = new ListNode;

		cout << "\n\n Enter value : ";
		cin >> node->value;

		if (head == NULL)
		{
			node->listNode = NULL;
		}
		else
		{
			obj->right = head;
			head->left = obj;
		}

		head = obj;
		obj->left = NULL;


	}

	void InsertNodes()
	{
		int count;

		cout << "\n\nHow many values you want to enter?";
		cin >> count;

		for (int i = 0; i < count; i++)
		{
			int value;
			
			cout << "\nEnter value: ";
			cin >> value;

			Insert()
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

	void countnodes()
	{
		if (head == NULL)
		{
			cout << "\n\n No of Nodes are = 0";
			return;
		}

		else if (head->info == NULL)
		{
			cout << "\n\n No of nodes are = 1";
			return;
		}

		else
		{
			int count = 0;
			list* temp = head;
			while (temp != NULL)
			{
				count++;
				temp = temp->list;
			}

			cout << "\n\n No of nodes are = " << count;
		}
	}

	void removebefore(int val)
	{
		if (head == NULL)
		{
			cout << "\n List is empty";
			return; //So that execution doesnot continues to search()
		}



		else if (head->link == NULL) //If there is only one node
		{
			cout << "\n Deletion is not possible";
			return; //So that execution doesnot continues to search()
		}

		node* temp = search(val);

		else if (temp == -1 || temp == head)//If the found value is first one
			cout << "\n Deletion is not possible";

		else if (temp == head->link)
		{
			temp = head;
			head = head->link;
			cout << "\n Deleted value is " << temp->info;
			delete temp;
		}

		else
		{
			node* temp1, * temp2 = head;
			while (temp2->link != temp)
			{
				temp1 = temp2;
				temp2 = temp2->link;
			}

			temp1->link = temp;
			cout << "\n Deleted value is " << temp2->info;
			delete temp2;
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

