#include "client.h"

client::client(int id, string name) {
	client_id = id;
	client_FIO = name;
}
client::client(int id) {
	client_id = id;
	client_FIO = "��� �� �������.";
}
client::client() {
	client_id = 0;
	client_FIO = "��� �� �������.";
}
void client::client_input() {
	cout << "������� id �������: ";
	cin >> client_id;
	while (getchar() != '\n');
	cout << "������� ��� �������: ";
	getline(cin, client_FIO);

}
void client::client_output() {
	cout << "id �������: " << client_id << endl;
	cout << "��� �������: " << client_FIO << endl;
}