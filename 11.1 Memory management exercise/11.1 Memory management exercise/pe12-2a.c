#include <stdio.h>
#include "pe12-2a.h"
#include <stdlib.h>

// const int row = 20;										// К заданию 5;
// const int row = 10;                                      // К заданию 6;

	// Задание 2:
/*
static int change_mode = 1;
static float distanse, fuel_vol;
static float sum_fuel;

void set_mode(int mode)
{
	if (mode == 0 || mode == 1)
	{
		switch (mode)
		{
		case 0:
			printf("Режим метрический. \n");
			break;
		case 1:
			printf("Режим американский. \n");
			break;
		}
		change_mode = mode;
	}
	else
		printf("Неверный ввод! Используется предыдущий режим %d. \n", change_mode);
}

void get_info(void)
{
	if (change_mode == 0)
	{
		printf("Введите пройденное расстояние в километрах: ");
		while (scanf_s("%f", &distanse) != 1)
		{
			clear();
		}
		printf("Введите расхода топлива в литрах: ");
		while (scanf_s("%f", &fuel_vol) != 1)
		{
			clear();
		}
	}
	else
	{
		printf("Введите пройденное расстояние в милях: ");
		while (scanf_s("%f", &distanse) != 1)
		{
			clear();
		}
		printf("Введите расхода топлива в галлонах: ");
		while (scanf_s("%f", &fuel_vol) != 1)
		{
			clear();
		}
	}
}

void show_info(void)
{
	if (change_mode == 0)
	{
		sum_fuel = fuel_vol / (distanse / 100);
		printf("Расход топлива соствавляет %.2f литров на 100 км. \n", sum_fuel);
	}
	else
	{
		sum_fuel = distanse / fuel_vol;
		printf("Расход топлива соствавляет %.2f милли на галлон. \n", sum_fuel);
	}
}

void clear(void)
{
	printf("Ошибка! Введите числовое значение. \n");
	while (getchar() != '\n')
		continue;
}
*/



	// Задание 3 (отдельно и совместно с заданием 4):
/*
void clear(void)
{
	printf("Ошибка! Введите числовое значение. \n");
	while (getchar() != '\n')
		continue;
}

void set_mode(int* mode)
{
	if (*mode == 0 || *mode == 1)
	{
		if(*mode == 0)
			printf("Режим метрический. \n");
		else
			printf("Режим американский. \n");
	}
	else
	{
		*mode = 0;
		printf("Неверный ввод! Используется предыдущий режим %d. \n", *mode);
	}
}

void get_info(int* mode, float* dist, float* fuel)
{


	if (*mode == 0)
	{
		printf("Введите пройденное расстояние в километрах: ");
		while (scanf_s("%f", dist) != 1 || *dist <= 0.0f)
		{
			clear();
			printf("Расстояние должно быть больше нуля! Повторите ввод: ");
		}
		printf("Введите расхода топлива в литрах: ");
		while (scanf_s("%f", fuel) != 1 || *fuel <= 0.0f)
		{
			clear();
			printf("Расход должен быть больше нуля! Повторите ввод: ");
		}
	}
	else
	{
		printf("Введите пройденное расстояние в милях: ");
		while (scanf_s("%f", dist) != 1 || *dist <= 0.0f)
		{
			clear();
			printf("Расстояние должно быть больше нуля! Повторите ввод: ");
		}
		printf("Введите расхода топлива в галлонах: ");
		while (scanf_s("%f", fuel) != 1 || *fuel <= 0.0f)
		{
			clear();
			printf("Расход должен быть больше нуля! Повторите ввод: ");
		}
	}
}

void show_info(int mode, float dist, float fuel)
{
	if (mode == 0)
		printf("Расход топлива составляет %.2f литров на 100 км. \n", fuel / (dist / 100));
	else
		printf("Расход топлива составляет %.2f мили на галлон. \n", dist / fuel);
}

int count(int numerator)								// Задание 4;
{
	static int meter = 0;
	if (numerator == 1)
	{
		meter++;
	}
	return meter;
}
*/

	// Задание 5:
/*
void generate(int* mass, int size)
{
	for (int count = 0; count < size; count++)
	{
		mass[count] = rand() % row + 1;					// + 1 - это чтобы число было в диапазоне от 1 до 10;
	}
}

void view_num(int* mass, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (i != 0 && i % row == 0)						// i != 0 - чтобы не было первого лишнего символа новой строки. i % 10 == 0 - после каждого 10 сисмвола, новая строка;
			printf("\n");
		printf("%d", mass[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf(".");
	}
}

	// Альтернатива функции view_mum:
/*
void view_mum(int* mass, int size)
{
	for (int i = 0; i < row; i++)								// 10 строк;
	{
		for (int j = 0; j < row; j++)							// 10 чисел в строке;
		{
			printf("%d", mass[i * 10 + j]);					// Формула [i * 10 + j] последовательно пройдет по всем индексам от 0 до 99;
		}
		printf("\n");
		if (i < size - 1)
			printf(", ");
		else
			printf(".");// Перенос строки после каждых 10 чисел
	}
}
*/
/*
void sort(int* mass, int size)
{
	int temp;
	int i, j;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (mass[i] < mass[j])
			{
				temp = mass[j];
				mass[j] = mass[i];
				mass[i] = temp;
			}
		}
	}
}
*/

// Задание 6:
/*
void generate(int* mass, int size)
{
	for (int seed = 1; seed <= 10; seed++)                            // Проверка кажого числа от 1 до 10, сколько раз определенное число выпадет за 1000 раз;
	{
		int counts[11] = { 0 };                                        // Объявление массива из 11 элементов, принудительно каждому элементу присвоен 0. Данный массив будет выполнять роль счетчика; 
		srand(seed);                                                // Функция принимает число (зерно), далее в программе функция rand() принимает это число;
		for (int count = 0; count < size; count++)
		{
			int number = rand() % row + 1;                            // + 1 - это чтобы число было в диапазоне от 1 до 10. Функция rand() берет первоначальное число, прогоняет через себя и выдает результат, при следующей итерации за основу функция возьмет уже полученный результат и т.д.;
			counts[number]++;                                        // В индекс массива подстваляется результат функции rand(). Если результат выпал 4, то смотрим содержимое под индексом 4, изначально там 0, к этому нулю затем прибавляем 1. 
		}                                                            // Если при полседующей итерации будет снова 4, то к уже полученной 1 прибавится еще 1, итого 2 и т.д. Тем самым получаем счетчик, сколько раз выпало значение 4 за 1000 раз;
		printf("Статистика для зерна %d \n", seed);
		for (int i = 1; i < row + 1; i++)
			printf("Цифра %2d выпала %3d раз. \n", i, counts[i]);    // Цикл вывода сколько раз выпало значение;
	}
}
/*
	srand(seed) — вызывается один раз в начале. Она настраивает внутреннее невидимое состояние генератора на определенную волну.
	rand() — вызывается внутри цикла. При каждом вызове она сама автоматически заглядывает в это скрытое состояние, берет его, меняет по сложной математической формуле и выдает вам число.
	На следующем шаге цикла она берет уже измененное состояние и меняет его дальше.

	rand() может работать без ручного вызова srand(), потому что компьютер сам тайно включает srand(1) на старте.
	Но без ручного управления srand(число) вы навсегда застрянете в одной и той же цепочке чисел и не сможете получить никакой новой случайности или альтернативных тестов.
*/