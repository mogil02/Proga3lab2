#include "car.h"

car car_input() {
	car Car;
	do {
		printf("Введите название автомобиля: ");
		Car.car_brand = get_string();
	} while (Car.car_brand[0] == 0);
	printf("Введите стоимость автомобиля. ");
	Car.car_cost = get_int();
	Car.Spec = specifications_input();
	return Car;
};

car car_init(int cost, const char* brand, int en_pow, int max_spd, int trans_id, float vol) {
	car Car{};
	Car.Spec.engine_power = en_pow;
	Car.Spec.max_speed = max_spd;
	Car.Spec.transmission_id = trans_id;
	Car.Spec.volume = vol;
	Car.car_brand = strcpy_d(Car.car_brand, brand);
	Car.car_cost = cost;
	return Car;
};

void car_output(car obj) {
	printf("Название авто: %s Стоимость: %d руб.\n", obj.car_brand, obj.car_cost);
	specifications_output(obj.Spec);
};