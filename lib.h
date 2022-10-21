#pragma once
#include <iostream>
#include <string>

using namespace std;

int get_int(void);
char* get_string(void); //Функция ввод строки произвольной длины (кратной 8 байтам).
char* strcpy_d(char*, const char*);
float get_float(void);