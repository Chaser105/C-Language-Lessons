#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define TIME 60						// Для 1 задания;

#define FUT_SM 30.48				// Для 4 задания;
#define INCH_SM 2.54				// Для 4 задания;

// void counter(int n);				// Для 2 задания;

// void cube(double n);				// Для 7 задания;

void Temperatures(double temp_f);	// Для 9 задания;

// int number;						// Для 2 задания;



int main(void)
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

//	Задание 1:
/*	int min, hour;
	printf("Введите время в минутах: \n");
	scanf_s("%d", &min);
	while (min > 0)
	{
		hour = min / TIME;
		int leftmin = min % TIME;
		printf("Полученное время: %d часа(ов), %d минут(ы). \n", hour, leftmin);
		scanf_s("%d", &min);
	}
*/
// Задание 2 (без цикла while):
/*	int number;
	printf("Введите целое число: \n");
	scanf_s("%d", &number);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("%d \t", number++);
	printf("Все. Это без цикла while. \n");
*/

// С циклом while:
/*	scanf_s("%d", &number);
	int limit = number + 10;
	while (number <= limit)
	{
		printf("%d \t", number++);
	}
	printf("Все. Это c циклом while. \n");
*/

// Лаконичный вариант:
/*	int count = 11;					//  Нужно вывести ровно 11 чисел (от N до N+10)
	scanf_s("%d", &number);
	while (count--)
	{
		printf("%d \t", number++);
	}
*/

// С применением функции:
/*	while (scanf_s("%d", &number) == 1 && number > 1)
	{
		counter(number);
		printf("\n");
	}
	printf("Выход. \n");
*/

// Задание 3:
/*	const int week = 7;
	int day;
	printf("Введите количество дней: \n");
	printf("Для выхода введите значение <= 0. \n");
	scanf_s("%d", &day);
	while (day > 0)
	{
		int left_week = day / week;
		int left_day = day % week;
		printf("%d дней составляют %d недель(и) и %d дня(ей). \n", day, left_week, left_day);
		scanf_s("%d", &day);
	}
	printf("Выход из программы!. \n");
*/
// Задание 4:
/*	float sm, inch;
	int fut;
	printf("Введите высоту в сантиметрах: \n");
	scanf_s("%f", &sm);
	while (sm > 0)
	{
		fut = (int)sm / FUT_SM;	// Здесь испльзовано явное приведение к типу переменной, несмотря на объявление в начале кода (для читаемости кода, намерение обрезать дробню часть);
		inch = (sm - (fut * FUT_SM)) / INCH_SM;
		printf("%.1f см = %d футов, %.1f дюймам. \n", sm, fut, inch);
		printf("Введите высоту в сантиметрах (<= 0 для выхода из программы): \n");
		scanf_s("%f", &sm);		// Т.к. символы настроены на кириллицу, вводить значения со знаком запятая ",";
	}
	printf("Работа завершена. \n");
*/
// Задание 5:
/*	int count, sum, iter;
	sum = iter = 0;
	printf("Введите число, до которого должны просуммироваться по порядку числа: \n");
	scanf_s("%d", &count);
	while (++iter <= count)			// Если цикл состоит из одного оператора фигурные скобки "{}" не нужны;
	{								// Если цикл состоит из более одного оператора (составной оператор) фигурные скобки "{}" нужны;
		sum = iter + sum;		
	}
	printf("sum = $%d \n", sum);
*/
// Задание 6:
/*	long long count, sum, iter;
	sum = iter = 0;
	printf("Введите число, до которого должны просуммироваться по порядку числа: \n");
	scanf_s("%lld", &count);
	while (++iter <= count)			// Если цикл состоит из одного оператора фигурные скобки "{}" не нужны;
	{								// Если цикл состоит из более одного оператора (составной оператор) фигурные скобки "{}" нужны;
		sum = (iter * iter) + sum;
	}
	printf("sum = $%lld \n", sum);
*/
// Задание 7:
/*	double number;
	printf("Введите число: \n");
	scanf_s("%lf", &number);
	while (number > 0)
	{
		cube(number);
		scanf_s("%lf", &number);
	}
*/
// Задание 8:
/*	int value;
	int number;
	printf("Эта программа вычисляет результаты деления по модулю: \n");
	printf("Введите целое число, которое будет служить вторым операндом: ");
	scanf_s("%d", &value);
	printf("Теперь введите первый операнд: ");
	scanf_s("%d", &number);
	while (number > 0)
	{
		printf("%d %% %d равно %d. \n", number, value, number % value);
		printf("Введите следующее число для первого операнда (<= 0 для выхода из программы): ");
		scanf_s("%d", &number);
	}
	printf("Готово \n");
*/
// Задание 9:
/*	double temp_f;
	printf("Введите значение температуры по френгейту: ");
	while (scanf_s("%lf", &temp_f) == 1)						// В данном случае функция "scanf_s" если примет не числовое значение, то она вернет "0";
	{
		Temperatures(temp_f);
		printf("\n");	
	}
	printf("Выход из программы.\n");
*/


	return 0;
}

/*
void counter(int n)								// Ко 2 заданию;
{
	int limit = n + 10;
	while (n <= limit)
	{
		printf("%4d \t", n++);
	}
}
*/

/*
	void cube(double n)							// К 7 заданию; 
{
	double res = n * n * n;
	printf("Куб числа %.2f равен %.2f\n", n, res);
}
*/

/*void Temperatures(double t)					// К 9 заданию;
{
	const double fareng = 32.0;
	const double kelv = 273.16;
	double temp_celsiy = 5.0 / 9.0 * (t - fareng);
	double temp_kelvin = temp_celsiy + kelv;
	printf("%.2lf%cF, %.2lf%cC, %.2lf%cK", t, 176, temp_celsiy, 176, temp_kelvin, 176);
}
*/