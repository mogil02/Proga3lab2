#include "manager.h"

manager manager_input() {
	manager Manager;
	do {
		printf("������� ��� ����������: ");
		Manager.manager_FIO = get_string();
	} while (Manager.manager_FIO[0] == 0);
	printf("������� id ���������. ");
	Manager.manager_id = get_int();
	return Manager;
};

manager manager_init(int id, const char * FIO) {
	manager Manager{};
	Manager.manager_FIO = strcpy_d(Manager.manager_FIO, FIO);
	Manager.manager_id = id;
	return Manager;
};

void manager_output(manager obj) {
	printf("��� ���������: %s\n", obj.manager_FIO);
};