#include "service.h"

service::service(string name, int cost) {
	service_name = name;
	service_cost = cost;
}
service::service(string name) {
	service_name = name;
	service_cost = 0;
}
service::service() {
	service_name = "�������� �� �������.";
	service_cost = 0;
}
void service::service_input() {
	cout << "������� �������� ������: ";
	getline(cin, service_name);
	cout << "������� ��������� ������: ";
	cin >> service_cost;
	while (getchar() != '\n');
}
void service::service_output() {
	cout << "�������� ������: " << service_name << endl;
	cout << "��������� ������: " << service_cost << endl;
}