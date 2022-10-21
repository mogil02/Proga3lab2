#include "specifications.h"

specifications::specifications(int pow, int speed, int trans_id, float vol) {
	engine_power = pow;
	max_speed = speed;
	transmission_id = trans_id;
	volume = vol;
}
specifications::specifications(int pow) {
	engine_power = pow;
	max_speed = 0;
	transmission_id = 1;
	volume = 0;
}
specifications::specifications() {
	engine_power = 0;
	max_speed = 0;
	transmission_id = 1;
	volume = 0;
}
string specifications::trans_name(int id) {
	if (id == 1) return meh;
	else if (id == 2) return gidromeh;
	else if (id == 3) return robot;
	else return variator;
}
void specifications::spec_input() {
	cout << "Введите мощность двигателя: ";
	cin >> engine_power;
	cout << "Введите максимальную скорость: ";
	cin >> max_speed;
	cout << "Введите номер трансмиссии\n1) - Механика\n2) - Гидромеханика\n3) - Робот\n4) - Вариатор\nВвод: ";
	cin >> transmission_id;
	cout << "Введите объём двигателя: ";
	cin >> volume;
}
void specifications::spec_output() {
	cout << "Введите мощность двигателя: " << engine_power << endl;
	cout << "Введите максимальную скорость: " << max_speed << endl;
	cout << "Коробка передач: " << trans_name(transmission_id) << endl;
	cout << "Объём двигателя: " << volume << endl;
}
