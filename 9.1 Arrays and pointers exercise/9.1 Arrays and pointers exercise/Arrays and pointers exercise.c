#include <stdio.h>
#include <locale.h>
#include <Windows.h>

// #define YEARS 5												// Для 1, 12 задания;
// #define MONTH 12											// Для 1, 12 задания;
// #define SIZE	10											// Для 3, 4, 5, 6, 10 задания;
// #define ROWS	2											// Для 7 задания;
// #define COLS	5											// Для 7 задания;
// #define SIZE	7											// Для 8 задания;
// #define	VOL	3											// Для 8 задания;
 #define ROWS	3											// Для 9, 10, 13 задания;
 #define COLS	5											// Для 9, 10, 13 задания;


// float precipitation_year(const float(* rain)[MONTH]);		// Для 1 задания;
// void precipitation(float prec);								// Для 1 задания;
// void precipitation_month(const float(* rain)[MONTH]);		// Для 1 задания;

// void copy_arr(double mass1[], double mass1_1[], int num1);	// Для 2, 7 задания;
// void copy_ptr(double mass2[], double mass2_2[], int num2);	// Для 2 задания. Либо так "void copy_ptr(double *mass2, double *mass2_2, int num2);";
// void copy_ptrs(double *mass3, double *mass3_3, double *end);	// Для 2 задания. Либо так "void copy_ptrs(double mass3[], double mass3_3[], double *end)";."double* end" - взятие адреса 5 элемента;

// int vol_great(int* volume, int num);							// Для 3 задания;

// int vol_great(double volume[], int num);						// Для 4 задания;

// double vol_great(double* volume, int num);					// Для 5 задания;

// void vol_reverse(int volume[], int num);						// Для 6 задания;

// void change(double(*volume)[COLS], double(*copy_mass)[COLS], int rows);		// Для 7 задания;

// void change(double* mass_1, double* mass_2, int num);						// Для 8 задания;

// void change(double(*mass_1)[COLS], double(*mass_2)[COLS], int rows);			// Для 9 задания;
// void print(double (*print_mass)[COLS], int print_rows);						// Для 9 задания;

// void addition(int *mass1, int mass2[], int *mass_add, int num);				// Для 10 задания;

// void print_mass(int mass[ROWS][COLS], int rows);								// Для 11 задания;
// void sum_mass(int mass[ROWS][COLS], int rows);								// Для 11 задания;

// void precipitation_year(const float(*rain)[MONTH]);							// Для 12 задания;
// void precipitation_month(const float(*rain)[MONTH]);							// Для 12 задания;

// void enter_mass(double(*mass)[COLS]);										// Для 13 задания;
// double average_row(const double *mass, int cols);							// Для 13 задания;
// double average_all(const double(*mass)[COLS]);								// Для 13 задания;
// double max_vol(const double mass[ROWS][COLS]);								// Для 13 задания;


// Сначала r и c, потом массив [r][c]. ВНИМАНИЕ на компиляторе MVSC не работает;
// void enter_mass(int r, int c, double mass[r][c]);							// Для 14 задания;
// double average_all(int r, int c, const double mass[r][c]);					// Для 14 задания;
// double max_vol(int r, int c, const double mass[r][c]);						// Для 14 задания;


int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задание 1:
/*	float tot;
	const float rain[YEARS][MONTH] =							// Каждый элемент массива "rain", является элементом массива, т.е. в 2010 году 12 месяцев, это в одном элементе "12" элементов;
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};
	printf(" ГОД	КОЛИЧЕСТВО ОСАДКОВ (в дюймах) \n");
	tot = precipitation_year(rain);

	precipitation(tot);

	printf(" Среднеежемесечное количество осадков: \n\n");
	printf(" Янв  Фев  Мар  Апр  Май  Июн  Июл  Авг  Сен  Окт  Ноя  Дек \n");
	precipitation_month(rain);
*/


	// Задание 2:
/*	double sourse[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, sourse, 5);								// Передаем имя массива "target1", куда скопируются значения элементов другого массива "sourse", "5" количество элементов массива;
	copy_ptr(target2, sourse, 5);
	copy_ptrs(target3, sourse, sourse + 5);						// "sourse + 5" - здесь получается здвиг адреса массива на 5 элемент, который стоит после массива. Т.е. это граница массива;
*/

	
	// Задание 3:
/*	int max;
	int volume[SIZE] = { 2, 145, 98, 45, 32, 56, 84, 11, 125, 26 };
	max = vol_great(volume, SIZE);
	printf("Число %d является самым большим числом массива \"volume\" \n", max);
*/


	// Задание 4:
/*	int max;
	double volume[SIZE] = {5.6, 125.9845, 102.98, 48.452, 126.65, 86.475, 25.12, 123.82, 75.56, 91.78};
	max = vol_great(volume, SIZE);
	printf("Число с индексом %d является самым большим в массиве \"volume\" \n", max);
*/


	// Задание 5:
/*	double diff;
	double volume[SIZE] = {50.6, 125.9845, 102.98, 48.452, 126.65, 86.475, 25.12, 123.82, 75.56, 91.78};
	diff = vol_great(volume, SIZE);
	printf("Разница между наибольшим и наименьшим числами массива \"volume\" = %.3lf  \n", diff);
*/


	// Задание 6:
/*	int volume[SIZE] = {2, 145, 98, 45, 32, 56, 84, 11, 125, 26};
	vol_reverse(volume, SIZE);
*/


	// Задание 7:
/*	double volume[ROWS][COLS] =
	{
		{ 50.6, 125.9845, 102.98, 48.452, 126.65},
		{ 86.475, 25.12, 123.82, 75.56, 91.78 }
	};
	double copy_mass[ROWS][COLS];
	change(volume, copy_mass, ROWS);
*/


	// Задание 8:
/*	double volume[SIZE] = {56.6, 25.85, 79.578, 465.87, 89.05, 5.78, 11.008};
	double copy_mass[3];
	change(&volume[2], copy_mass, VOL);
*/


	// Задание 9: 
/*	double mass2d[ROWS][COLS] =
	{
		{52.5, 4.79, 12.74, 57.67, 7.6},
		{0.11, 82.97, 23.42, 9.07, 13.00},
		{64.22, 30.8, 40.09, 1.82, 8.1}
	};
	double copy_mass[ROWS][COLS];
	change(mass2d, copy_mass, ROWS);
	print(copy_mass, ROWS);
*/


	// Задание 10:
/*	int mass_1[10] = {26, 65, 82, 2, 5, 13, 37, 73, 60, 0};
	int mass_2[10] = { 11, 3, 66, 71, 94, 35, 44, 54, 27, 1 };
	int sum_mass[10];
	addition(mass_1, mass_2, sum_mass, SIZE);
*/


	// Задание 11:
/*	int mass2d[ROWS][COLS] =
	{
		{ 13, 25, 84, 9, 0 },
		{ 54, 32, 46, 17, 2 },
		{ 4, 19, 99, 63, 76 },
	};
	print_mass(mass2d, ROWS);
	sum_mass(mass2d, ROWS);
*/

	
	// Задание 12:
/*	const float rain[YEARS][MONTH] =						// Каждый элемент массива "rain", является элементом массива, т.е. в 2010 году 12 месяцев, это в одном элементе "12" элементов;
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};
	precipitation_year(rain);
	precipitation_month(rain);	
*/


	// Задание 13:
/*	double mass_1[ROWS][COLS];
	enter_mass(mass_1);

	printf("\nСреднее значение строки: \n");
	for (int i = 0; i < ROWS; i++)
	{
		double avg = average_row(mass_1[i], COLS);
		printf("%d) %.3lf \n", i + 1, avg);
	}

	double avg_all = average_all(mass_1);
	printf("\nСреднее значение всех чисел массива = %.3lf \n\n", avg_all);

	double max = max_vol(mass_1);
	printf("Наибольшее значение массива = %.3lf \n", max);
*/


	// Задание 14. ВНИМАНИЕ на компиляторе MVSC не работает;:
/*  int rows = 3;
    int cols = 5;
    double mass_1[rows][cols]; // Массив переменной длины (VLA)

   
    enter_mass(rows, cols, mass_1);									// 1. Ввод (теперь передаем переменные rows и cols);
				
    printf("\nСреднее значение строки: \n");						// 2. Среднее по строкам. Функция average_row принимает одномерный массив, поэтому ей достаточно передать только количество колонок;
    for (int i = 0; i < rows; i++)
    {
        double avg = average_row(mass_1[i], cols);
        printf("%d) %.3lf \n", i + 1, avg);
    }

    double avg_all = average_all(rows, cols, mass_1);				// 3. Общее среднее (передаем размеры и сам массив);
    printf("\nСреднее всех чисел = %.3lf \n", avg_all);

    double max = max_vol(rows, cols, mass_1);						// 4. Максимум (передаем размеры и сам массив);
    printf("Максимум = %.3lf \n", max);
*/



	return 0;
}

/*
float precipitation_year(const float(* rain)[MONTH])		// Для 1 задания;
{
	int y, m;
	float total, subtop;
	for (y = 0, total = 0; y < YEARS; y++)					// Для каждого года суммируем количество осадков за каждый месяц;
	{
		for (m = 0, subtop = 0; m < MONTH; m++)
			subtop += rain[y][m];
		printf("%5d %15.1f \n", 2010 + y, subtop);
		total += subtop;									// Общая сумма для всех лет;
	}
	return total;
}

void precipitation(float prec)
{
	printf("\n Среднегодовое количество осадков составляет %.1f дюймов. \n\n", prec / YEARS);
}

void precipitation_month(const float(*rain)[MONTH])
{
	int y, m;
	float subtop;
	for (m = 0; m < MONTH; m++)
	{
		subtop = 0;
		for (y = 0; y < YEARS; y++)
			subtop += rain[y][m];
		printf("%4.1f ", subtop / YEARS);
	}
	putchar('\n');
}
 */

 /*
 void copy_arr(double mass1[], double mass1_1[], int num1)	// Для 2 задания;
 {
	 for (int count = 0; count < num1; count++)
		 mass1[count] = mass1_1[count];
 }

 void copy_ptr(double mass2[], double mass2_2[], int num2)
 {
	 for (int count = 0; count < num2; count++)
		 *(mass2 + count) = *(mass2_2 + count);
 }

 void copy_ptrs(double* mass3, double* mass3_3, double *end)
 {
	 while (mass3_3 < end)									// "while (mass3_3 < end)" - происходит сравнение адреса массива "mass3_3" с адресом массива "end";
	 {
		 *mass3 = *mass3_3;
		 mass3_3++;
		 mass3++;
	 }
 }
 */

 /*
 int vol_great(int* volume, int num)							// Для 3 задания;
 {
	 int max_vol;
	 max_vol = volume[0];
	 for (int i = 0; i < num; i++)
		 if (max_vol < volume[i])
			 max_vol = volume[i];
	 return max_vol;
 }
 */

 /*
 int vol_great(double volume[], int num)						// Для 4 задания;
 {
	 int max_index = 0;
	 for (int i = 0; i < num; i++)
		 if (volume[max_index] < volume[i])
			 max_index = i;
	 return max_index;
 }
 */

 /*
 double vol_great(double* volume, int num)					// Для 5 задания;
 {
	 double total = 0;
	 double min = volume[0];
	 double max = volume[0];
	 for (int i = 1; i < num; i++)							// Т.к. переменным "min" и "max" уже присвоено значение массива под индексом 0, начало итерации можно начать с индекса 1;
	 {
		 if (volume[i] > max)								// За счет конструкции "if else" программа может работать быстрее;
			 max = volume[i];
		 else if (volume[i] < min)
			 min = volume[i];
	 }
	 total = max - min;
	 return total;
 }
 */

 /*
 void vol_reverse(int volume[], int num)						// Для 6 задания;
 {
	 for (int i = num - 1; i >= 0; i--)
		 printf("%d ", volume[i]);
	 printf("\n");
 }
 */

/*
void change(double(*volume)[COLS], double(*copy_mass)[COLS], int rows)	// Для 7 задания;
{
	for (int r = 0; r < rows; r++)
		copy_arr(volume[r], copy_mass[r], COLS);
}

void copy_arr(double mass1[], double mass1_1[], int num1)
{
	for (int c = 0; c < num1; c++)
		mass1_1[c] = mass1[c];
}
*/

/*
void change(double* mass_1, double* mass_2, int num)					// Для 8 задания;
{
	for (int i = 0; i < num; i++)
		mass_2[i] = mass_1[i];
}
*/

/*
void change(double(*mass_1)[COLS], double(*mass_2)[COLS], int rows)		// Для 9 задания;
{
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < COLS; c++)
			mass_2[r][c] = mass_1[r][c];
}

void print(double(*print_mass)[COLS], int print_rows)
{
	for (int r = 0; r < print_rows; r++)
	{
		if (r > 0)
			putchar('\n');
		printf("Строка №%d) ", r + 1);
		for (int c = 0; c < COLS; c++)
			printf("%.2lf ", print_mass[r][c]);
	}
	putchar('\n');
}
*/

/*
void addition(int *mass1, int mass2[], int *mass_add, int num)	// Для 10 задания;
{
	printf("Результат сложения значений двух массивов соотвтетствующих элементов: \n");
	for (int i = 0; i < num; i++)
	{
		mass_add[i] = mass1[i] + mass2[i];
		printf("%d", mass_add[i]);
		if (i != num - 1)
			printf(", ");										// После последнего числа запятая не ставиться;
			
	}
	putchar('\n');
}
*/

/*
void print_mass(int mass[ROWS][COLS], int rows)					// Для 11 задания;
{
	for (int r = 0; r < rows; r++)
	{
		printf("%d) строка: ", r + 1);
		for (int c = 0; c < COLS; c++)
		{
			printf("%3d", mass[r][c]);
			if (c != COLS - 1)
				printf(", ");
		}
		putchar('\n');
	}
	putchar('\n');
}

void sum_mass(int mass[ROWS][COLS], int rows)
{
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < COLS; c++)
			mass[r][c] *= 2;
	print_mass(mass, ROWS);
}
*/

/*
void precipitation_year(const float(*rain)[MONTH])				// Для 12 задания;
{
	float total = 0;
	printf(" ГОД	КОЛИЧЕСТВО ОСАДКОВ (в дюймах) \n");
	for (int y = 0; y < YEARS; y++)								// Для каждого года суммируем количество осадков за каждый месяц;
	{
		float subtop = 0;
		for (int m = 0; m < MONTH; m++)
			subtop += rain[y][m];
		printf("%5d %15.1f \n", 2010 + y, subtop);
		total += subtop;										// Общая сумма для всех лет;
	}
	printf("\n Среднегодовое количество осадков составляет %.1f дюймов. \n\n", total / YEARS);
}

void precipitation_month(const float(*rain)[MONTH])
{
	printf("\n Среднеежемесечное количество осадков: \n\n");
	printf(" Янв  Фев  Мар  Апр  Май  Июн  Июл  Авг  Сен  Окт  Ноя  Дек \n");
	for (int m = 0; m < MONTH; m++)
	{
		float subtop = 0;
		for (int y = 0; y < YEARS; y++)
			subtop += rain[y][m];
		printf("%4.1f ", subtop / YEARS);
	}
	putchar('\n');
	
}
*/

/*
void enter_mass(double(*mass)[COLS])							// Для 13 задания;
{
	printf("Введите 15 чисел для массива формата 3х5: \n");
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			while (scanf_s("%lf", &mass[r][c]) != 1)
			{
				while ((getchar()) != '\n');
				printf("Ошибка! Введите число корректно. \n");
			}
		}
	}
	printf("Ввод завершен успешно! \n");
}

double average_row(const double *mass, int cols)
{	
	double total = 0;
	for (int r = 0; r < cols; r++)
	{
		total += mass[r];
	}
	return total / cols;
}

double average_all(const double(*mass)[COLS])
{
	double sum = 0;
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			sum += mass[r][c];

	return sum / (ROWS * COLS);


}

double max_vol(const double mass[ROWS][COLS])
{
	double m = mass[0][0];
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			if (m < mass[r][c])
				m = mass[r][c];
	return m;
}
*/

/*
void enter_mass(int r, int c, double mass[r][c])			// Для 14 задания. ВНИМАНИЕ на компиляторе MVSC не работает;
{
	printf("Введите %d чисел:\n", r * c);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			while (scanf_s("%lf", &mass[i][j]) != 1)
			{
				while (getchar() != '\n');
				printf("Ошибка! Повторите ввод для [%d][%d]: ", i, j);
			}
		}
	}
}

double average_row(const double mass[], int cols)
{
	double total = 0;
	for (int i = 0; i < cols; i++)
	{
		total += mass[i];
	}
	return total / cols;
}

double average_all(int r, int c, const double mass[r][c])
{
	double sum = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			sum += mass[i][j];

	return sum / (r * c);										// Используем переданные переменные вместо макросов
}

double max_vol(int r, int c, const double mass[r][c])
{
	double m = mass[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (m < mass[i][j])
				m = mass[i][j];
	return m;
}
*/