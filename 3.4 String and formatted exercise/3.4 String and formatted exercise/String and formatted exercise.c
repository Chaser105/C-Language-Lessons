#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <float.h>
#include <locale.h>
#include <windows.h>

#define GALLON 3.785f					// В директиве ставится точка, не запятая;
#define MILL 1.609f						// В директиве ставится точка, не запятая;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задание 1:
/*	char name[20];
	char surname[20];
	printf("Введите имя и фамилию: \n");
	scanf("%s%s", name, surname);
	printf("%s %s \n\n", surname, name);
*/
	// Задание 2:
/*	char name[20];
	int width;
	printf("Введите имя: \n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\" \n", name);
	width = strlen(name) + 3;			// С помощью функции "strlen" определяем сколько символов занимает переменная "name". Какое имя не вводили бы, перед именем будет всегда 3 гарантированных отступа;
	printf("%*s \n\n", width, name);
*/
	// Задание 3:
/*	float drob1 = 21.3f;				// Суффикс "f" означет тип данных "float", а не "double";
	float drob2 = 21.29f;				// Суффикс "f" означет тип данных "float", а не "double";
	printf("%.1f или %.1e \n", drob1, drob1);
	printf("%.3f или %.3e \n\n", drob2, drob2);
*/
	// Задание 4:
/*	float height;
	char name[30];
	printf("Введите ваш рост в сантиметрах и имя: \n");
	scanf("%f %s", &height, name);		// Указывание точности в функции "scanf" запрещено.
	height = height / 100.0;
	printf("%s, ваш рост составляет %.3f метров \n\n", name, height);
*/
	// Задание 5:
/*	float speed_load, time_load, size_file;
	printf("Введите скорость загрузки и размер файла: \n");
	scanf("%f %f", &speed_load, &size_file);
	time_load = size_file / (speed_load / 8);
	printf("При скорости загрузки %.2f мегабит в секунду, файл размером %.2f мегабайт, загружается за %.2f секунд. \n\n", speed_load, size_file, time_load);
*/
	// Задание 6:
/*	char name[30] = {0};				// Зануление или инициализация " = {0}". В конце массива остается один "0", 
	char surname[30] = {0};				// это гарантирует когда функция "strlen" увидит ноль и остановится подсчитывать количество символов;
	int width_name;
	int width_surname;
	printf("Введите имя и фамилию: \n");
	scanf("%s %s", name, surname);
	width_name = strlen(name);
	width_surname = strlen(surname);
	printf("%s %s \n", name, surname);
	printf("%*d %*d \n", width_name, width_name, width_surname, width_surname);			// Аргумент "*" - значение ширины поля, аргумент "d" - десятичное значение, из скольки состоит переменная "width_name";
	printf("%s %s \n", surname, name);													// Аналогично происходит с другими спецификаторами; 
	printf("%-*d %-*d \n\n", width_surname, width_surname, width_name, width_name);
*/
	// Задание 7:
/*	double drob1 = 1.0 / 3.0;
	float drob2 = 1.0 / 3.0;
	printf("%.4f %.4f \n", drob1, drob2);
	drob1 = drob1 / 3.0;
	drob2 = drob2 / 3.0;
	printf("%.12f %.12f \n", drob1, drob2);
	drob1 = drob1 / 3.0;
	drob2 = drob2 / 3.0;
	printf("%.16f %.16f \n", drob1, drob2);
	printf("%d и %d \n\n", FLT_DIG, DBL_DIG);		// Значения переменный не согласуются, т.к. точность переменной типа "float" составляет 6 знаков после запятой,
													// а точность переменной типа "double" составляет 15 знаков после запятой;

	// Другой вариант ответа:
	printf("%.4f, %.12f, %.16f \n", drob1, drob1, drob1);
	printf("%.4f, %.12f, %.16f \n", drob2, drob2, drob2);
	printf("%d и %d \n\n", FLT_DIG, DBL_DIG);
*/
	// Задание 8:
/*	float distans, speed;
	float fuel;
	printf("Сколько проехали миль и сколько затрачено бензина? \n");
	scanf("%f %f", &distans, &fuel);
	speed = distans / fuel;
	printf("%.1f миль(и) пройдено на одном галлоне бензина. \n", speed);
	speed = ((GALLON * fuel)/ (MILL * distans)) * 100;
	printf("%.1f литра(ов) на 100 километров. \n", speed);
*/

	return 0;
}