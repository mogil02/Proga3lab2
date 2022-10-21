#include "manager.h"

manager::manager(int id, string name) {
	manager_id = id;
	manager_FIO = name;
}
manager::manager(int id) {
	manager_id = id;
	manager_FIO = "Имя не указано.";
}
manager::manager() {
	manager_id = 0;
	manager_FIO = "Имя не указано.";
}
void manager::manager_input() {
	cout << "Введите id менеджера: ";
	cin >> manager_id;
	while (getchar() != '\n');
	cout << "Введите ФИО менеджера: ";
	getline(cin, manager_FIO);

}
void manager::manager_output() {
	cout << "id менеджера: " << manager_id << endl;
	cout << "ФИО менеджера: " << manager_FIO << endl;
}