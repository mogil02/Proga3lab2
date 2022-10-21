#include "lib.h"

int get_int(void) {
	int answer;
	int f = 0;
	do {
		if (f) while (getchar() != '\n');
		printf("������� �����: ");
		f = 1;
	} while (scanf("%d", &answer) == 0);
	while (getchar() != '\n');
	return answer;
}

float get_float(void) {
	float answer;
	int f = 0;
	do {
		if (f) while (getchar() != '\n');
		printf("������� �����: ");
		f = 1;
	} while (scanf("%f", &answer) == 0);
	while (getchar() != '\n');
	return answer;
}

char* get_string(void) {
	int len = 0; //�������� ����� ������ (���������� ����� ����, �.�. ������ �����).
	int size = 8; //���������� ������ ������. 
	char symbol; //������ ��� ������ ������.
	char* string = (char*)malloc(size * sizeof(char)); //������������� ������ ������.
	symbol = getchar(); //������ ������.
	//���� ������ ��������, ���� �� ���������� ������ �������� ������.
	while (symbol != 10) {
		string[len++] = symbol; //������ ������ ������� � ������.
		//�������, ������� ���������, ����� �� �������� ������ ������ �� ������� ��������� ������.
		if (len >= size) {
			size += 8; //���������� ����������� ������� ������.
			string = (char*)realloc(string, size * sizeof(char)); //��������� ��� ������ �������������� 8 ���� ������.  
		}
		symbol = getchar(); //������ ���������� �������.
	}
	string[len] = 0; //��������� ������.
	return string; //������� ��������� �� ������.
}

char* strcpy_d(char* str_p, const char* str_c) {
	int len_p, len_c;
	if (str_p == NULL) {
		str_p = (char*)malloc(sizeof(char));
		str_p[0] = '\0';
	}
	len_p = strlen(str_p);
	len_c = strlen(str_c);
	if (len_p >= len_c)
		strcpy(str_p, str_c);
	else {
		if ((len_c % 8) != 0) {
			len_c = len_c / 8;
			len_c++;
			str_p = (char*)realloc(str_p, len_c * sizeof(char));
			strcpy(str_p, str_c);
		}
	}
	return str_p;
}