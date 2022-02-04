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

