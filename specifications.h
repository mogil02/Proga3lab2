#pragma once
#include "lib.h"
#define meh "Механика"
#define gidromeh "Гидромеханика"
#define robot "Робот"
#define variator "Вариатор"

class specifications
{
    friend class deal;
private:
    int engine_power;
    int max_speed;
    int transmission_id;
    float volume;
public:
    specifications(int pow, int speed, int trans_id, float vol);
    specifications(int pow);
    specifications();
    string trans_name(int trans_id);
    void spec_input();
    void spec_output();
};
