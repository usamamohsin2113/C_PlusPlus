#include "LinkedList.h"

namespace DataStructure {
	static class LinkedListOP
	{
	public:
		static void InsertValues(LinkedList* list)
		{
			char check;
			int value;

			do
			{
				cout << "\nEnter value: ";
				cin >> value;

				list->Insert(value);

				cout << "\nDo you want to enter another value? ";
				cin >> check;
			} while (check == 'Y' || check == 'y');
		}

		static void ConcatinateLinkedList()
		{
			LinkedList* list1 = new LinkedList();
			InsertValues(list1);

			LinkedList* list2 = new LinkedList();
			InsertValues(list2);

			cout << "\nList 1:";
			list1->Show();

			cout << "\nList 2:";
			list2->Show();

			list1->Concatinate(list2->head);

			cout << "\n Concatinated List : ";
			list1->Show();
		}
	};
}