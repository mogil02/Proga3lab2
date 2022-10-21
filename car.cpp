#include "car.h"

car::car(int cost, string brand, specifications spec) {
	car_cost = cost;
	car_brand = brand;
	Spec = spec;
}
car::car(string brand) {
	car_cost = 0;
	car_brand = brand;
	specifications s(0);
	Spec = s;
}
car::car() {
	car_cost = 0;
	car_brand = "Нет названия";
	specifications s;
	Spec = s;
}
void car::car_input() {
	cout << "Введите цену на авто: ";
	cin >> this->car_cost;
	while (getchar() != '\n');
	cout << "Введите название авто: ";
	getline(cin, this->car_brand);
	Spec.spec_input();
}
void car::car_output() {
	cout << "Название авто: " << this->car_brand << endl;
	cout << "Стоимость авто: " << this->car_cost << endl;
	Spec.spec_output();
}