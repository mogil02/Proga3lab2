#pragma once
#include "lib.h"

typedef struct {
    char *service_name;
    int service_cost;
} service;

service service_input();
service service_init(const char*, int);
void service_output(service);