#include "client.h"

client client_input() {
	client Client;
	do {
		printf("Введите ФИО клиента: ");
		Client.client_FIO = get_string();
	} while (Client.client_FIO[0] == 0);
	printf("Введите id клиента. ");
	Client.client_id = get_int();
	return Client;
};

client client_init(int id, const char* FIO) {
	client Client{};
	Client.client_FIO = strcpy_d(Client.client_FIO, FIO);
	Client.client_id = id;
	return Client;
};

void client_output(client obj) {
	printf("ФИО клиента: %s\n", obj.client_FIO);
};