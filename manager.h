#pragma once
#include "lib.h"

class manager
{
	friend class deal;
private:
	int manager_id;
	int manager_wages;
	string manager_FIO;
public:
	manager(int id, int wages, string name);
	manager(int id);
	manager();
	void manager_input();
	void manager_output();
};