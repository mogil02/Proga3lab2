#pragma once
#include "lib.h"
#include "specifications.h"

class car
{
    friend class deal;
private:
    int car_cost;
    string car_brand;
    specifications Spec;
public:
    car(int cost, string brand, specifications spec);
    car(string brand);
    car();
    void car_input();
    void car_output();
};