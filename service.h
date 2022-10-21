#pragma once
#include "lib.h"

class service {
    friend class deal;
private:
    string service_name;
    int service_cost;
public:
    service(string name, int cost);
    service(string name);
    service();
    void service_input(service);
    void service_output(service);
};
