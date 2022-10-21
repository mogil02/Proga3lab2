#include "service.h"

service service_input() {
	service Service;
	do {
		printf("������� �������� ������: ");
		Service.service_name = get_string();
	} while (Service.service_name[0] == 0);
	printf("������� ��������� ������. ");
	Service.service_cost = get_int();
	return Service;
};

service service_init(const char* str, int cost) {
	service Service{};
	Service.service_name = strcpy_d(Service.service_name, str);
	Service.service_cost = cost;
	return Service;
};

void service_output(service obj) {
	printf("�������� ���. ������: %s ���������: %d ���.\n", obj.service_name, obj.service_cost);
};