#include "manager.h"

manager::manager(int id, int wages, string name) {
	manager_id = id;
	manager_wages = wages;
	manager_FIO = name;
}
manager::manager(int id) {
	manager_id = id;
	manager_wages = 0;
	manager_FIO = "��� �� �������.";
}
manager::manager() {
	manager_id = 0;
	manager_wages = 0;
	manager_FIO = "��� �� �������.";
}
void manager::manager_input() {
	cout << "������� id ���������: ";
	cin >> manager_id;
	while (getchar() != '\n');
	cout << "������� ��� ���������: ";
	getline(cin, manager_FIO);
	cout << "������� ������ ��������� �� ������: ";
	cin >> manager_wages;
	while (getchar() != '\n');
}
void manager::manager_output() {
	cout << "��� ���������: " << manager_FIO << endl;
	cout << "������ ��������� �� ������: " << manager_wages << endl;
}