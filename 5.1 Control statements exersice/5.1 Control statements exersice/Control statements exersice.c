
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define ALPHABET "ABCDEFGHIJKLMNOPQRSTUVWXYZ"		// Для 3 задания;

// float calculate(float n_1, float n_2);			// Для 9 задания;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");						// Чтобы компилятор хавал десятичную точку вместо запятой;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задание 1:
/*	char symbol[26] = {0};
	int index;
	for (index = 0; index < 26; index++)
		symbol[index] = index + 'A';

	for (index = 0; index < 26; index++)
		printf("%3c", symbol[index]);
*/
	// Задание 2:
/*	char ch = '$';
	int out_index, in_index;
	for (out_index = 0; out_index < 5; out_index++)
	{
		for (in_index = 0; in_index <= out_index; in_index++)
			printf("%c", ch);
		printf("\n");
	}
*/
	// Задание 3:
/*	char ch;
	int out_index;
	for (out_index = 0; out_index < 6; out_index++)
	{
		for (ch = 'F'; ch >= 'F' - out_index; ch--)
			printf("%c", ch);
		printf("\n");
	}
*/
	// Другой вариант (через массив):
/*	char ch[27] = ALPHABET;
	int out_index, in_index;
	for (out_index = 0; out_index < 6; out_index++)
	{
		for (in_index = 5; in_index >= 5 - out_index; in_index--)
			printf("%c", ch[in_index]);
		printf("\n");
	}
*/
	// Задание 4:
/*	char ch = 'A';
	int out_index, in_index;
	for (out_index = 0; out_index < 6; out_index++)
	{
		for (in_index = 0; in_index <= out_index; in_index++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
*/
	// Задание 5:
/*	char ch, start;
	int row, space, rise, low;
	printf("Введите прописную букву английского алфавита ");
	scanf_s("%c", &ch, 1);
	for (row = 0; row <= ch - 'A'; row++)
	{
		for (space = 0; space < ch - 'A' - row; space++)
			printf(" ");
		for (rise = 0; rise <= row; rise++)
		{
			start = 'A' + rise;
			printf("%c", start);
		}
		for (low = 0; low < row; low++)
		{
				printf("%c", --start);
		}
		printf("\n");
	}
*/
	// Задание 6:
/*	int num_high, num_low, quad, cub, volue;
	printf("Введите для вычисления диапазон чисел от и до: ");
	scanf_s("%d %d", &num_low, &num_high);
	printf("%5s	%12s %12s \n", "Число", "В квадрате", "В кубе");		// Вывод шапки с наименованиями столбцов с помощью спецификатора "%12s", а также с шириной поля;
	for (volue = num_low; volue <= num_high; volue++)
	{
		quad = volue * volue;
		cub = quad * volue;
		printf("%5d %12d %14d \n", volue, quad, cub);
	}
*/
	// Задание 7:
/*	char word[50] = {0};
	int letter;
	printf("Введите слово: ");
	scanf_s("%s", word, (unsigned)sizeof(word));
	printf("Слово %s состоит из %zd букв. \n", word, strlen(word));
	for (letter = strlen(word) - 1; letter >= 0; letter--)			// "letter = strlen(word) - 1" - отнимаем "1" в связи, что в конце слова непечатаемый символ конца строки "\0", когда печатаем слово задом наперед,
	{																// это символ не напечатается, напечатается уже последняя буква слова, но уже при следующей итерации. И получается, что, допустим слово состоит из "5" букв,
		printf("%c", word[letter]);									// т.е. "5" символов, а "6"- это символ "\0" и этот символ минусуем, т.е. оставляем только выводимые символы, за одно на одну итерацию цикл меньше;
	}
	printf("\n");
*/	
	// Задание 8:
/*	float num_1, num_2, result;
	printf("Введите два числа с плавающей запятой \n"
		"(для выхода из программы введите не числовое значение): \n");
	while (scanf_s("%f %f", &num_1, &num_2) == 2)
	{
		result = (num_1 - num_2) / (num_1 * num_2);
		printf("Результат вычисления равен %.2f. \n", result);
	}
	printf("Программа завершена. \n");
*/
	// Задание 9:
/*	float num_1, num_2, result;
	printf("Введите два числа с плавающей запятой \n"
		"(для выхода из программы введите не числовое значение): \n");
	while (scanf_s("%f %f", &num_1, &num_2) == 2)
	{
		result = calculate(num_1, num_2);				// Чтобы резульат функции не потерялся, необходимо его присвоить переменной;
		printf("Результат вычисления равен %.2f. \n", result);
	}
	printf("Программа завершена. \n");
*/
	// Задание 10:
/*	int high, low;
	int result;
	int loop;
	printf("Введите нижний и верхний целочисленные пределы: ");
	while (scanf_s("%d %d", &low, &high) == 2 && high > low)
	{
		result = 0;
		for (loop = low; loop <= high; loop++)
		{
			result += loop * loop;
		}
		printf("Сумма квадратов из целых чисел от %d до %d равна %d \n", low * low, high * high, result);
		printf("Введите следущую комбинацию пределов: ");	
	}
	printf("Работа завершена. \n");
*/
	// Задание 11:
/*	int number[20] = {0};					// Массив с запасом;
	int forward, back, count = 8;			// Используем переменную для количества;
	printf("Введите %d целых чисел: ", count);
	for (forward = 0; forward < count; forward++)
		scanf_s("%d", &number[forward]);
	for (back = count - 1; back >= 0; back--)
	printf("Обратный порядок чисел: %d \n", number[back]);
	printf("\n");
*/
	// Задание 12:
/*	double sum_1 = 0.0;
	double sum_2 = 0.0;
	double sign = 1.0;
	int loop_1, loop_2;
	int limit;
	printf("Введите значение для количества подсчета выражения: ");
	scanf_s("%d", &limit);
	for (loop_1 = 1; loop_1 <= limit; loop_1++)
		sum_1 += 1.0 / loop_1;

	for (loop_2 = 1; loop_2 <= limit; loop_2++)
	{
		sum_2 += 1.0 / loop_2 * sign;
		sign = -sign;
	}
	printf("Итого: %.6f при только сложении, %.6f при чередовании + и -. \n", sum_1, sum_2);
*/
	// Задание 13:
/*	int total[8] = {0};
	int num = 2;
	int index;
	int loop = 0;

	for (index = 0; index < 8; index++)
	{
		total[index] = num;
		num *= 2;
	}

	do
	{	
		printf("%d ", total[loop]);
		loop++;
	} while (loop < index);
*/
	// Задание 14:
/*	double mas_1[8] = {0};
	double mas_2[8] = { 0 };
	double sum = 0;
	
	int loop, size;
	printf("Введите 8 чисел с десятичной запятой: ");

	size = sizeof(mas_1) / sizeof(mas_1[0]);		// Для "double" размер составляет "8" байта, если массив состоит из "8" элементов, то "8 * 8 = 64" байта - размер массива;

	for (loop = 0; loop < size; loop++)
	{
		scanf_s("%lf", &mas_1[loop]);
		sum += mas_1[loop];
		mas_2[loop] = sum;
	}

	for (loop = 0; loop < size; loop++)
		printf("%8.3lf ", mas_1[loop]);
	printf("\n");

	for (loop = 0; loop < size; loop++)
		printf("%8.3lf ", mas_2[loop]);
	printf("\n");
*/
	// Задание 15:
/*	char text[255] = {0};
	int index = -1;
	printf("Введите текст вместе с пробелами: \n");
	
	do
	{
		index++;
		scanf_s("%c", &text[index], 1);			// Особеность функции "scanf_s", если "scanf_s", то "3" аргумент будет "1" - это для подтверждения функции о безопсности, если просто "scanf", то "1" не нужна; 
	} while (text[index] != '\n');

	for (index--; index >= 0; index--)
		printf("%c", text[index]);				// Для проверки правильности вывода текста, спецификатор "%c" можно заключить в квадратные скобки "[]";
	printf("\n");
*/
	// Задание 16:
/*	float dafna = 100.0f;
	float deydra = 100.0f;
	float perc_dey = 5.0f;
	int years = 0;
	
	while (dafna >= deydra)
	{
		dafna += 10;
		deydra += deydra / 100.0 * perc_dey;
		years++;
	}
	
	printf("Через %d лет, вклад Дейдры ($%.2f) превзойдет вклад Дафны ($%.2f). \n", years, deydra, dafna);
*/
	// Задание 17:
/*	float income = 1000000.0f;
	float bet = 8.0f;
	float credit = 100000.0f;
	int years;

	for (years = 0; income > 0; years++)
		income += (income / 100.0 * bet) - credit;
	printf("Через %d лет не останется на счету денег в банке. \n", years);
*/
	// Задание 18:
/*	int frends = 5;
	int week;

	for (week = 1; frends <= 150; week++)
	{
		frends = (frends - week) * 2;
		printf("После %2d недели друзей стало %3d человек. \n", week, frends);
	}
	week --;
	printf("Итого: за %2d недель друзей стало %3d человек. \n", week, frends);
*/

	return 0;
}


/*float calculate(float n_1, float n_2)			// К 9 заданию;
{
	return (float)(n_1 - n_2) / (n_1 * n_2);
}
*/
