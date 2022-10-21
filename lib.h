#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int get_int(void);
char* get_string(void); //Функция ввод строки произвольной длины (кратной 8 байтам).
char* strcpy_d(char*, const char*);
float get_float(void);