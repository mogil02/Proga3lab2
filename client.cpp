#include "client.h"

client::client(int id, string name) {
	client_id = id;
	client_FIO = name;
}
client::client(int id) {
	client_id = id;
	client_FIO = "Имя не указано.";
}
client::client() {
	client_id = 0;
	client_FIO = "Имя не указано.";
}
void client::client_input() {
	cout << "Введите id клиента: ";
	cin >> client_id;
	while (getchar() != '\n');
	cout << "Введите ФИО клиента: ";
	getline(cin, client_FIO);

}
void client::client_output() {
	cout << "id клиента: " << client_id << endl;
	cout << "ФИО клиента: " << client_FIO << endl;
}