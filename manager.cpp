#include "manager.h"

manager::manager(int id, int wages, string name) {
	manager_id = id;
	manager_wages = wages;
	manager_FIO = name;
}
manager::manager(int id) {
	manager_id = id;
	manager_wages = 0;
	manager_FIO = "Имя не указано.";
}
manager::manager() {
	manager_id = 0;
	manager_wages = 0;
	manager_FIO = "Имя не указано.";
}
void manager::manager_input() {
	cout << "Введите id менеджера: ";
	cin >> manager_id;
	while (getchar() != '\n');
	cout << "Введите ФИО менеджера: ";
	getline(cin, manager_FIO);
	cout << "Введите премию менеджера за сделку: ";
	cin >> manager_wages;
	while (getchar() != '\n');
}
void manager::manager_output() {
	cout << "ФИО менеджера: " << manager_FIO << endl;
	cout << "Премия менеджера за сделку: " << manager_wages << endl;
}