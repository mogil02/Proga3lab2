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
	service_name = "Название не указано.";
	service_cost = 0;
}
void service::service_input() {
	cout << "Введите название доп. услуги: ";
	getline(cin, service_name);
	cout << "Введите стоимость доп. услуги: ";
	cin >> service_cost;
	while (getchar() != '\n');
}
void service::service_output() {
	cout << "Название доп. услуги: " << service_name << endl;
	cout << "Стоимость доп. услуги: " << service_cost << endl;
}