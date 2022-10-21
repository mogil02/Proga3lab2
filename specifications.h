#pragma once
#include "lib.h"
#define meh "Механика"
#define gidromeh "Гидромеханика"
#define robot "Робот"
#define variator "Вариатор"

typedef struct {
    int engine_power;
    int max_speed;
    int transmission_id;
    float volume;
} specifications;

specifications specifications_input();
specifications specifications_init(int, int, int, float);
void specifications_output(specifications);
const char* trans_name(int);