/*
#pragma once
// Заголовочный файл для структуры name_st:
#define SLEN 32								// Данный заголовочный файл содержит только, директивы (макросы), структуры и их определение типов, прототипы функций.
											// Заголовочный файл дает знать, что в программе существуют данные операторы. Определение функций находятся в файле "names_st.с";
struct names_st
{
	char first[SLEN];
	char last[SLEN];
};

typedef struct names_st names;

void get_names(names*);
void show_names(const names*);
char* s_gets(char* st, int n);
*/

// Директива #ifndef:
/*
#ifndef NAMES_H_							// Данная директива спасает от дублирования кода помещенного между #ifndef и #endif, два и более раза подключения одного и того же заголовочного файла приведет к ошибке компилятора.
#define	NAMES_H_							// К примеру в исполнительном файле (где функция main()) подключаются 2 заголовочных файла с расширение .h, в одном и в другом могут быть одни и теже операторы.
#define SLEN 32								// Когда компилятор собирет код (инструкцию программы) натыкается на одни и теже операторы - произойдет ошибка. Для этого прописывается диреткива #ifndef, которая страхует от ошибки;

struct names_ct
{
	char first[SLEN];
	char last[SLEN];
};
typedef struct names_ct names;

void get_names(names*);
void show_names(const names*);
char* s_gets(char* st, int n);

#endif
*/

// Предопределнные идентификаторы:
/*
#pragma once
void why_me(void);
*/

// Преобразование прямоугольных координат в полярные:
/*
#pragma once
#define RAD_TO_DEG	(180 / (4 * atan(1)))	// Формула для вычисления 1 радиан в градусах. 1 радиан находится по формуле 180 / п = 57.296. Арктангенс 1 - это угол 45 градусов (п/4). Число п = 4 * atan(1). В результате получаем 180 / (4 * atan(1));
typedef struct polar_v						// С помощью модификатора typedef на структуру polar_v создаем структуру Polar_V, которая имеет 2 поля;
{
	double magnitude;						// Поле, которое показывает расстояние до точки;
	double angle;							// Поле, которое показывает под каким углом в градусах по прямой находится нужная точка (координата);
} Polar_V;									

typedef	struct rect_v						// С помощью модификатора typedef на структуру rect_v создаем структуру Rect_V, которая имеет 2 поля;
{
	double x;
	double y;
} Rect_V;									// Структура, в которой поля образуют координаты до точки, т.е. расстояние;

Polar_V rect_to_polar(Rect_V rv);			// Прототип функции, которая принимает структуру Rect_V с полями x и y и возвращает результат в структуру с полями magnitude и angle;
*/


// Определение обобщенных макросов:
/*
#pragma once
#define RAD_TO_DEG	(180 / (4 * atan(1)))	// Макрос перевода радиан в градусы;

// Обобщенная функция для вычисления квадратного корня:
// Вместо аргумента Х у макроса и спецификатора подставляется значение переменной любого типа. В зависимости от типа выберется нужное поле;
#define SQRT(X) _Generic((X),\
	long double: sqrtl,\
	default:	 sqrt,\
	float:		 sqrtf)(X)					

// Обобщенная функция для вычисления синуса угла, заданного в градусах:
// Вместо аргумента Х у макроса и спецификатора подставляется значение переменной любого типа. В зависимости от типа выберется нужное поле;
#define SIN(X) _Generic((X),\
	long double: sinl((X) / RAD_TO_DEG),\
	default:	 sin((X) / RAD_TO_DEG),\
	float:		 sinf((X) / RAD_TO_DEG))
*/


// Применение функции atexit:
/*
#pragma once
void sing_off(void);
void too_bad(void);
*/


// Использование быстрой сортировки для упорядочения групп чисел:
/*
#define NUM 40
void fillarray(double ar[], int  n);
void showarray(const double ar[], int n);
int mycomp(const void* p1, const void* p2);
*/


// Использование функций memcpy() и memmove():
/*
#define SIZE 10
void show_array(const int ar[], int n);
*/


// Использование переменного числа аргументов (файл stdarg.h):
/*
double sum(int lim, ...);
*/

// Пример копировании значений с помощью макроса va_copy:
/*
void print_above_average(int lim, ...);
*/
