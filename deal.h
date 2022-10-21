#pragma once
#include "lib.h"
#include "car.h"
#include "client.h"
#include "manager.h"
#include "service.h"

typedef struct {
    car Car;
    client Client;
    manager Manager;
    service Service;
} deal;

deal deal_input();
void deal_output(int, deal);
int sum_costs(deal);