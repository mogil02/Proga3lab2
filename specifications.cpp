#include "specifications.h"

specifications specifications_input() {
	specifications spec;
	printf("������� �������� ��������� (�.�). ");
	spec.engine_power = get_int();
	printf("������� ������������ �������� (��/�). ");
	spec.max_speed = get_int();
	printf("������� ����� ������� �������.\n1) - ��������;\n2) - �������������;\n3) - �����;\n4) - ��������.\n");
	do {
		spec.transmission_id = get_int();
	} while (spec.transmission_id < 1 || spec.transmission_id > 4);
	printf("������� ����� ��������� (�). ");
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
	printf("�������� ���������: %d �.�.\n", obj.engine_power);
	printf("������� �������: %s.\n", trans_name(obj.transmission_id));
	printf("������������ ��������: %d ��/�.\n", obj.max_speed);
	printf("����� ���������: %.1f �.\n", obj.volume);
};

const char* trans_name(int id) {
	if (id == 1) return meh;
	else if (id == 2) return gidromeh;
	else if (id == 3) return robot;
	else return variator;
}