#include "lib.h"

int get_int(void) {
	int answer;
	int f = 0;
	do {
		if (f) while (getchar() != '\n');
		printf("Введите число: ");
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
		printf("Введите число: ");
		f = 1;
	} while (scanf("%f", &answer) == 0);
	while (getchar() != '\n');
	return answer;
}

char* get_string(void) {
	int len = 0; //Реальная длина строки (изначально равна нулю, т.к. строка пуста).
	int size = 8; //Предельный размер строки. 
	char symbol; //Символ для чтения данных.
	char* string = (char*)malloc(size * sizeof(char)); //Инициализация пустой строки.
	symbol = getchar(); //Чтение данных.
	//Цикл чтения символов, пока не встретится символ переноса строки.
	while (symbol != 10) {
		string[len++] = symbol; //Запись нового символа в строку.
		//Условие, которое проверяет, вышел ли реальный размер строки за границы выделеной памяти.
		if (len >= size) {
			size += 8; //Увеличение предельного размера строки.
			string = (char*)realloc(string, size * sizeof(char)); //Выделение для строки дополнительных 8 байт памяти.  
		}
		symbol = getchar(); //Чтение следуещего символа.
	}
	string[len] = 0; //Завершаем строку.
	return string; //Возврат указателя на строку.
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