#pragma once
#include "lib.h"

class manager
{
	friend class deal;
private:
	int manager_id;
	string manager_FIO;
public:
	manager(int id, string name);
	manager(int id);
	manager();
	void input(manager);
	void client_output(manager);
};