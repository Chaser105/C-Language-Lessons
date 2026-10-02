#include <stdio.h>
#include <math.h>	
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <time.h>
#include "Function.h"

// Задание 1:
/*
int get_max(int a, int b)
{
	return (a > b ? a : b);
}

int get_min(int a, int b)
{
	return (a < b ? a : b);
}

double power(double base, int exp)
{
	double vol = 1.0; 
	int is_negative = 0;			// Если степень отрицательная, мы делаем её положительной для цикла, но запоминаем, что в конце нужно будет разделить 1 на получившийся результат;
	if (exp < 0) 
	{
		is_negative = 1;
		exp = -exp;					// Превращаем, например, -3 в 3;
	}

	for (int i = 0; i < exp; i++)
		vol *= base;
	if (is_negative) 
		return 1.0 / vol;			// Для 2^-3 это будет 1.0 / 8.0 = 0.125;

	return vol;
}

void clear_input_buffer(void)
{
	while (getchar() != '\n')
		continue;
}

void print_centered(const char* str)
{
	int screen = 80;							// Стандартная ширина консоли;
	int space = (screen - strlen(str)) / 2;
	if (space < 0)								// Если длина теста больше 80, то переменной space присвоится 0, чтобы уберечь от ненужных пробелов;
		space = 0;
	for (int i = 0; i < space; i++)
		putchar(' ');
	printf("%s\n", str);
}

int count_vowels(const char* str)
{
	int count = 0;
	while (*str)
	{
		if (strchr("aeiouyAEIOUY", *str))
			count++;
		str++;	
	}
	return count;
}

void show_student(struct Student s)
{
	printf("%d  %s  %.3f\n", s.id, s.name, s.average_grade);
}

struct Student create_student(const char* name, int id, double grade)
{
	struct Student temp;
	strncpy(temp.name, name, sizeof(temp.name) - 1);	// 1. Копируем имя встроенной стандартной функцией. Передаем размер на 1 меньше, чтобы зарезервировать место под нуль-терминатор;
	temp.name[sizeof(temp.name) - 1] = '\0';			// 2. Вручную железно ставим нуль-терминатор в самый последний элемент массива. Если имя было слишком длинным, оно аккуратно обрежется без падения программы;
	temp.id = id;										// 3. Числа копируем обычным присваиванием;
	temp.average_grade = grade;

	return temp;
}
*/


// Задание 3:
/*
void change(const Polar* str_p, Rect* str_r)
{
	str_r->rect_x = str_p->pol_vector * cos(str_p->pol_degree * DEGREE_TO_RAD);
	str_r->rect_y = str_p->pol_vector * sin(str_p->pol_degree * DEGREE_TO_RAD);
}
*/


// Задание 4:
/*
void delay(double time)										// Функция принимает время задержки;
{
	double start = (double)clock();							// Например, когда программа доходит до этой строчки, насчитывается 1млС, это значение записывается переменной для начала отсчета;
	while ((clock() - start) < (time * CLOCKS_PER_SEC));	// (clock() - start) происходит отсчет в функции, при 1 итерации, например, 1млС, при 2 - 1,5 млС и т.д. 
}															// (time* CLOCKS_PER_SEC) заданный лимит времени помнажается на 1000, 2,5 * 1000 = 2500 млС;
															// Далее происходит сравнение правой и левой стороны, пока левая сторона не стане больше или равна правой;
															// Происходит 1 - 1 = 0 С < 2.5 * 1000 = 2.5 С, следующий круг 1,5 - 1 = 0,5С < 2,5 С, дальше 2 - 1 = 1С < 2,5С.
															// ... 3,5 - 1 = 2,5С уже = 2,5С и цикл завершается;
*/
/*
 * =========================================================================
 * КАК РАБОТАЕТ ЭТА ФУНКЦИЯ ЗАДЕРЖКИ (НА ПАЛЬЦАХ):
 * =========================================================================
 * 1. Функция принимает аргумент 'time' (например, 2.5 секунды).
 *
 * 2. Строка 'double start = (double)clock();' фиксирует время начала.
 *    Функция clock() возвращает "тики" процессора с момента старта программы.
 *    В переменную 'start' записывается число тиков, набежавших до этой строки.
 *
 * 3. Правая часть '(time * CLOCKS_PER_SEC)' считает целевой финиш в тиках.
 *    Константа CLOCKS_PER_SEC показывает, сколько тиков делает система за 1 секунду:
 *    - В Windows это жестко 1 000 тиков в секунду.
 *    - В Linux это жестко 1 000 000 тиков в секунду.
 *    Для 2.5 секунд на Windows лимит превратится в: 2.5 * 1000 = 2500 тиков.
 *
 * 4. Цикл 'while' — это пустое активное ожидание (крутится со скоростью бензопилы).
 *    На каждом круге он берет новое текущее время из clock() и вычитает из него 'start'.
 *    Получается чистая разница — сколько тиков прошло с момента запуска функции:
 *    - Круг 1: Разница 1 тик. Условие (1 < 2500) — ИСТИНА. Крутимся дальше.
 *    - Спустя 1 секунду: Разница 1000 тиков. Условие (1000 < 2500) — ИСТИНА.
 *    - Спустя 2.5 секунды: Разница 2500 тиков. Условие (2500 < 2500) — ЛОЖЬ.
 *
 * 5. Как только условие становится ложным, цикл ломается, и программа идет дальше.
 * =========================================================================
 */


// Задание 5:
/*
void fillarray(int* mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = (rand() % size) + 1;
	}
}

void show_array(const int* mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%3d ", *mass);
		if (i % 10 == 9)
			puts("\n");
		mass++;
	}
	putchar('\n');
}

void random(int* mass, int size, int sam)
{
	for (int i = 0; i < sam; i++)
	{
		int temp;
		int index = rand() % size;
		printf("%3d ", mass[index]);
		if (i % 10 == 9)
			putchar('\n');
		temp = mass[size - 1];
		mass[size - 1] = mass[index];
		mass[index] = temp;
		size--;
	}
	putchar('\n');
}
*/


// Задание 6:
