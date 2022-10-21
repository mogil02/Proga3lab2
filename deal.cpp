#include "deal.h"

deal deal_input() {
	deal Deal;
	Deal.Manager = manager_input();
	Deal.Client = client_input();
	Deal.Car = car_input();
	Deal.Service = service_input();
	return Deal;
}

void deal_output(int num, deal tab) {
	printf("Детали сделки номер %3d.\n", num);
	manager_output(tab.Manager);
	client_output(tab.Client);
	service_output(tab.Service);
	car_output(tab.Car);
	puts("");

}
int sum_costs(deal d) {
	int total = 0;
	total = d.Car.car_cost + d.Service.service_cost;
	return total;
}
