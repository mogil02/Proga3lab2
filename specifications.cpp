#include "specifications.h"

specifications specifications_input() {
	specifications spec;
	printf("Введите мощность двигателя (л.с). ");
	spec.engine_power = get_int();
	printf("Введите максимальную скорость (км/ч). ");
	spec.max_speed = get_int();
	printf("Введите номер коробки передач.\n1) - механика;\n2) - гидромеханика;\n3) - робот;\n4) - вариатор.\n");
	do {
		spec.transmission_id = get_int();
	} while (spec.transmission_id < 1 || spec.transmission_id > 4);
	printf("Введите объём двигателя (л). ");
	spec.volume = get_float();
	return spec;
};

specifications specifications_init(int power, int speed, int trans_id, float vol) {
	specifications spec;
	spec.engine_power = power;
	spec.max_speed = speed;
	spec.transmission_id = trans_id;
	spec.volume = vol;
	return spec;
};

void specifications_output(specifications obj) {
	printf("Мощность двигателя: %d л.с.\n", obj.engine_power);
	printf("Коробка передач: %s.\n", trans_name(obj.transmission_id));
	printf("Максимальная скорость: %d км/ч.\n", obj.max_speed);
	printf("Объём двигателя: %.1f л.\n", obj.volume);
};

const char* trans_name(int id) {
	if (id == 1) return meh;
	else if (id == 2) return gidromeh;
	else if (id == 3) return robot;
	else return variator;
}