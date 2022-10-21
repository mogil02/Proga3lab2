#pragma once
#include "lib.h"
#include "specifications.h"

typedef struct {
    int car_cost;
    char *car_brand;
    specifications Spec;

} car;

car car_input();
car car_init(int cost, const char* brand, int en_pow, int max_spd, int trans_id, float vol);
void car_output(car);