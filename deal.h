#pragma once
#include "lib.h"
#include "car.h"
#include "client.h"
#include "manager.h"
#include "service.h"

class deal {
private:
    car Car;
    client Client;
    manager Manager;
    service Service;
public:
    deal(car Car, client Client, manager Manager, service Service);
    deal(car Car);
    deal();
    void deal_input(deal);
    void deal_output(deal);
    int sum_costs(deal);
};