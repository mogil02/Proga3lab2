#include "manager.h"

manager::manager(int id, string name) {
	manager_id = id;
	manager_FIO = name;
}
manager::manager(int id) {
	manager_id = id;
	manager_FIO = "��� �� �������.";
}
manager::manager() {
	manager_id = 0;
	manager_FIO = "��� �� �������.";
}
void manager::manager_input() {
	cout << "������� id ���������: ";
	cin >> manager_id;
	while (getchar() != '\n');
	cout << "������� ��� ���������: ";
	getline(cin, manager_FIO);

}
void manager::manager_output() {
	cout << "id ���������: " << manager_id << endl;
	cout << "��� ���������: " << manager_FIO << endl;
}