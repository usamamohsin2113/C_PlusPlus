#include <cstddef>
#include <iostream>

using namespace std;
namespace DataStructure
{
	class Node
	{
	public:
		int value;
		Node* next;

		Node()
		{
			value = 0;
			next = NULL;
		}

		Node(int value)
		{
			this->value = value;
			next = NULL;
		}
	};

	class LinkedList
	{
	public:
		Node* head;

		LinkedList()
		{
			head = NULL;
		}

		void Insert(int value)
		{
			Node* node = new Node(value);

			if (head->next == NULL)
			{
				head->next = node;
				return;
			}

			Node* temp = head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}

			temp->next = node;
		}

		Node* Search(int value)
		{
			if (head == NULL)
			{
				return NULL;
			}

			Node* temp = head;

			while (temp != NULL)
			{
				if (temp->value == value)
				{
					return temp;
				}

				temp = temp->next;
			}

			return NULL;
		}

		void ReplaceFirstValue(int currentValue, int newValue)
		{
			if (head == NULL)
			{
				cout << "List is empty";
				return;
			}

			Node* temp = head;

			while (temp != NULL)
			{
				if (temp->value == currentValue)
				{
					temp->value = newValue;
					return;
				}
			}

			cout << currentValue + " => value not found in list";
		}

		void Concatinate(Node* head)
		{
			if (this->head == NULL)
			{
				this->head = head;
			}
			else if (this->head->next == NULL)
			{
				this->head->next = head;
			}
			else
			{
				Node* temp = this->head;

				while (temp->next != NULL)
				{
					temp = temp->next;
				}

				temp->next = head;
			}
		}

		void Show()
		{
			if (head == NULL)
			{
				cout << "List is empty";
				return;
			}

			Node* temp = head;

			while (temp != NULL)
			{
				cout << temp->value + "\n";
				temp = temp->next;
			}
		}
	};
}