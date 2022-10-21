#pragma once
#include "lib.h"

typedef struct {
    int client_id;
    char *client_FIO;
} client;

client client_input();
client client_init(int, const char*);
void client_output(client);