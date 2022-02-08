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


		/// <summary>
		/// Insert node at the end of list
		/// </summary>
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

		/// <summary>
		/// Insert Node at the specified position and node at that position is moved forward.
		/// Invalid Position: If position is less than 0 or Head is null
		/// </summary>
		void InsertAtPosition(int position, int value)
		{
			if (head == NULL)
			{
				cout << "Invalid position";
				return;
			}

			if (position == 0)
			{
				Node* node = new Node(value);
				node->next = head;
				head = node;

				return;
			}

			Node* temp = head;

			while (position-- && temp != NULL)
			{
				if (position == 0)
				{
					Node* newNode = new Node(value);
					newNode->next = temp->next;
					temp->next = newNode;
					return;
				}

				temp = temp->next;
			}

			cout << "Invalid position";
		}

		/// <summary>
		/// Insert Node after the specified position. 
		/// If position is not found in list then node is inserted at the end of list.
		/// </summary>
		void InsertAfterPosition(int position, int value)
		{
			if (head == NULL)
			{
				cout << "Invalid position";
				return;
			}

			Node* temp = head;

			for (int i = 0; i <= position; i++)
			{
				if (temp->next == NULL)
				{
					break;
				}

				temp = temp->next;
			}

			Node* newNode = new Node(value);
			newNode->next = temp->next;
			temp->next = newNode;
		}

		void DeleteList()
		{
			if (head == NULL)
			{
				return;
			}
			else if (head->next == NULL)
			{
				delete head;
				return;
			}

			while (head != NULL)
			{
				Node* temp = head;
				head = head->next;
				delete temp;
			}
		}

		// Method is pending
		void DeleteAtPosition(int position)
		{
			if (head == NULL)
			{
				cout << "Invalid position";
				return;
			}

			if (position == 0)
			{
				Node* temp = head;
				head = head->next;
				delete temp;

				return;
			}

			Node* temp = head;

			while (position-- && temp != NULL)
			{
				if (position == 0)
				{
					Node* node = temp;


					return;
				}

				temp = temp->next;
			}
		}

		void DeleteNodesWithValue(int value)
		{
			if (head == NULL)
			{
				cout << "List is empty";
				return;
			}

			Node* temp = head;

			while (temp != NULL)
			{
				if (temp->value == value)
				{
					Node* node = temp;
					temp = temp->next;
					delete node;
				}
				else
				{
					temp = temp->next;
				}
			}
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

		int CountNodes()
		{
			if (head == NULL)
			{
				cout << "List is empty";
				return 0;
			}

			int count = 0;

			Node* temp = head;

			while (temp != NULL)
			{
				count++;
				temp = temp->next;
			}

			return count;
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

		// Method is pending
		void ShowReverse()
		{
			if (head == NULL)
			{
				cout << "List is empty";
				return;
			}
		}
	};
}