#include "deal.h"

deal::deal(car Cr, client Cl, manager Mn, service Sv) {
	Car = Cr;
	Client = Cl;
	Manager = Mn;
	Service = Sv;
}
deal::deal(car Cr) {
	Car = Cr;
	manager m(0);
	client c(0);
	service s;
	Manager = m;
	Client = c;
	Service = s;
}
deal::deal() {
	car cr;
	manager m;
	client c;
	service s;
	Car = cr;
	Manager = m;
	Client = c;
	Service = s;
}
void deal::deal_input() {
	Car.car_input();
	Manager.manager_input();
	Client.client_input();
	Service.service_input();
}
void deal::deal_output() {
	Car.car_output();
	Manager.manager_output();
	Client.client_output();
	Service.service_output();
}
int deal::sum_costs() {
	int sum;
	sum = Car.car_cost + Service.service_cost;
	return sum;
}
