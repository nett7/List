#include "header1.h"







int main() {

	setlocale(LC_ALL, "rus");

	List My_list;

	cout << "Работа со списком\n";

	bool key = true;

	int met;

	char answer;

	while (key) {

		cout << "\nВыберите одну из операций:\n"

			<< "1. Распечатать список\n"

			<< "2. Добавить элементы в список\n"

			<< "3. Удалить элемент\n"

			<< "4. Найти позиции элементов\n"

			<<"5. Заменить элемент на другой\n"

			<<"6. Отсортировать элементы списка\n"

			<< "7. Завершить работу программы\n";

		cin >> met;

		switch (met) {

		case 1:

			My_list.print();

			break;



		case 2:

			int zn;

			cout << "Введите значения элементов\n";

			cin >> zn; My_list.insert(zn);

			while (cin.get() != '\n') {

				cin >> zn;

				My_list.insert(zn);

			}

			break;



		case 3:

			cout << "Введите значение элемента: ";

			cin >> zn;

			My_list.delete_first(zn);

			break;



		case 4:

			cout << "Введите значение элемента :";

			cin >> zn;

			My_list.find(zn);

			break;



		case 5:

			int poz;

			cout << "Введите позицию и новое значение: ";

			cin >> poz>>zn;

			My_list.swap(poz, zn);

			break;



		case 6:

			My_list.sort();

			break;



		case 7:

			cout << "Вы хотите выйти из программы ? (y,N):\n";

			cin >> answer;

			if ((answer == 'Y') || (answer == 'y')) {

				key = false;

				break;

			}

			else if ((answer == 'N') || (answer == 'n')) {



			}

			else {

				cout << "incorrect input\n";

			}

			break;

		}

	}



	cout << "\nДо свидания !";

	cin.get();

	return 0;



}
