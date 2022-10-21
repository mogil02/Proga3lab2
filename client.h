#pragma once
#include "lib.h"

class client
{
	friend class deal;
private:
	int client_id;
	string client_FIO;
public:
	client(int id, string name);
	client(int id);
	client();
	void client_input();
	void client_output();
};
