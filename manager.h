#pragma once
#include "lib.h"

typedef struct {
	int manager_id;
	char *manager_FIO;
} manager;

manager manager_input();
manager manager_init(int, const char*);
void manager_output(manager);