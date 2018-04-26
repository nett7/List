#include"header1.h"





using namespace std;





	

Node::Node(int node_val) : val(node_val), next{ nullptr } { };

	Node::Node() {};

	Node::~Node() {};





 void List:: add_to_empty(int val) {

		Node *node_to_add = new Node(val);

		node_to_add->next = nullptr;

		first = node_to_add;





	}





	void List:: insert(int value)

	{

		if (is_empty())

		{

			add_to_empty(value);

		}

		else

		{

			Node *node_to_add = first;

			while (node_to_add->next != nullptr)

			{

				node_to_add = node_to_add->next;

			}

			node_to_add->next = new Node{ value };



		}

	}

	void List:: print()

	{

		if (first == nullptr)

		{

			cout << "Список пуст\n";

			return;

		}

		Node *sn = first;

		for (; sn->next != nullptr; sn = sn->next)

		{

			cout << sn->val << " -> ";

		}

		cout << sn->val << endl;

	}

	





	List::~List() {

		Node * node_to_delete = first;

		for (Node* sn = first; sn->next != nullptr;) {

			sn = sn->next;

			delete node_to_delete;

			node_to_delete = sn;

		}

		delete node_to_delete;

	}





	void List::delete_first(int zn) {

		Node * node_to_delete = first;

		Node * dop;

		int k = 1;

		while ((k < size())) {



			if ((k == 1) && (node_to_delete->val == zn)) {

				first = node_to_delete->next;

				delete node_to_delete;

				break;

			}

			else if ((node_to_delete->next->val == zn) && (node_to_delete->next != nullptr)) {

				dop = node_to_delete->next->next;

				delete node_to_delete->next;

				node_to_delete->next = dop;

				break;

			}

			else {

				k++;

				node_to_delete = node_to_delete->next;

			}

		}

		if (k == (size())) {

			cout << "Элемент не найден\n";

		}



	}





	bool List:: is_empty() const { return first == nullptr; }

	int List:: size() const {

		int count = 0;

		for (Node *sn = first; sn != nullptr; sn = sn->next)

			++count;

		return count;

	}





	void List:: find(int zn) {

		bool key = false;

		int number = 0;

		for (Node *sn = first; sn != nullptr; sn = sn->next) {



			if (sn->val == zn) {

				key = true;

				cout << number << " ";

			}

			number++;

		}

		if (key == false) {

			cout << "Элемент не найден";

		}

		cout << endl;



	}





	void List:: swap(int poz, int zn) {

		Node *sn = first;

		int i;

		if (poz > size()) {

			cout << "Элемент с позицией " << poz << " не существует\n";

		}

		else {

			for (i = 0; i < poz; i++) {

				sn = sn->next;

			}

			sn->val = zn;

		}

	}





	void List:: sort() {

		if (!first)

		{

			cout << "список пуст" << endl;

			return;

		}

		if (first->next == nullptr) return; 

		for (Node *node = first; node; node = node->next)

			for (Node *node2 = first; node2; node2 = node2->next)

				if (node->val < node2->val ) {

					int temp = node->val;

					node->val = node2->val;

					node2->val = temp;

				}





	}






