#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>

#include "hotel.h"							// Для определения стоимости номера в отеле;

#define NAME "Павел"						// Для "Создание и использование функции";
#define ADDRES "Проспект победы 77"			// Для "Создание и использование функции";
#define PLACE "Город Санкт-Петербург"		// Для "Создание и использование функции";
#define WIDTH 40							// Для "Создание и использование функции";
#define SPACE ' '							// Для "Создание и использование функции";

// void starbar(void);						// Для "Создание и использование функции";

// void show_n_char(char ch, int num);		// Прототип функции с двумя аргументами типа "char" ch и "int" num;

// int imin(int, int);						// Прототип функции c возращаемым значением, которая принимает два аргумента типа "int" (без имени формальных переменных);

// int imax();								// Объявление в старом стиле. Не указано сколько аргументов принимает функция;

// void up_and_down(int);					// Прототип функции дял рекурсии;

// long fact(int n);						// Вычисления факториала с помощью цикла и рекурсии;
// long rfact(int n);						// Вычисления факториала с помощью цикла и рекурсии;

// void to_binary(unsigned long n);			// Вывод числа в двоично мэквиваленте;

// void interchange(int u, int v);			// Попытка функции обмена значениями;

// void interchange(int* u, int* v);		// Использование указателей для обмена значениями переменных:

// void mikado(int);

// int choice(void);						// 9 вариант вопроса;

// void showmenu(void);						// Еще 9 вариант вопроса;
// 
// int getchoice(int low, int high);		// Еще 9 вариант вопроса;


int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Создание и использование функции, которая не принимает и не возращает ничего:
/*	starbar();
	printf("%s \n", NAME);
	printf("%s \n", ADDRES);
	printf("%s \n", PLACE);
	starbar();
*/


	// Создание и использование функции, которая принмает занчения и не возвращает:
/*	int spaces;
	show_n_char('*', WIDTH);								// Первая строка вывод "40" символов "*" с помощью функции "show_n_char";
	putchar('\n');											// Новая строка;				
	show_n_char(SPACE, 12);									// "12" пробелов;
	printf("%s \n", NAME);									// Вывод имени;	
	spaces = (WIDTH - strlen(ADDRES)) / 2;					// Определение с применением функции "strlen" количество пробелов;

	show_n_char(SPACE, spaces);								// Третья строка "11" пробелов;
	printf("%s \n", ADDRES);								// Вывод адреса;
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);		// Определение с применением функции "strlen" количество пробелов, которая применяется внктри функции "show_n_char";

	printf("%s \n", PLACE);									// Далее вывод названия города;
	show_n_char('*', WIDTH);								// Вывод "40" символов "*" с помощью функции "show_n_char";
	putchar('\n');											// Новая строка;
*/


	// Возращаемое значение функцией:
/*	int evi11, evi12;
	printf("Введите два целых числа (или q для завершения): \n");
	while ((scanf_s("%d %d", &evi11, &evi12)) == 2)
	{
		printf("Меньшим из двух чисел %d и %d является %d. \n",
			evi11, evi12, imin(evi11, evi12));
		printf("Введите два целых числа (или q для завершения): \n");
	}
	printf("Программа завершена. \n");
*/


	// Неправильное использование функции:
/*	printf("Наибольшим значением из двух %d и %d является %d. \n", 3, 5, imax(3));				// Не указан один аргумент функции. Выдается сообщение о выдаче мало параметров;
	printf("Наибольшим значением из двух %d и %d является %d. \n", 3, 5, imax(3.0, 5.0));		// Не верно указаны значения, вместо целочисленных значений указаны значения с плавающей запятой. При приеме значений с плавающей запятой, значения преобразуются к типу "int" и значения после запятой просто срежутся и останутся только целые числа;
*/


	// Рекурсия:
/*	up_and_down(1);
*/


	// Вычисления факториала с помощью цикла и рекурсии:
/*	int num;
	printf("Эта программа вычисляет факториалы. \n");
	printf("Введите значение от 0 до 12 (или q для выхода): ");

	while ((scanf_s("%d", &num)) == 1)
	{
		if (num < 1)
			printf("Отрицательные числа не подходят! \n");
		else if (num > 12)
			printf("Вводимое число должно быть меньше 13! \n");
		else
		{
			printf("цикл: факториал %d = %ld \n", num, fact(num));						// Вызов функции "fact()" внутри функции "printf";
			printf("рекурсия: факториал %d = %ld \n", num, rfact(num));					// Вызов функции "rfact()" внутри функции "printf";
		}
		printf("Введите значение от 0 до 12 (или q для выхода): ");
	}
	printf("Программа завершена. \n");
*/


	// Вывод числа в двоично мэквиваленте:
/*	unsigned long number;
	printf("Введите значение от 0 до 12 (или q для выхода): ");

	while ((scanf_s("%lu", &number)) == 1)
	{
		printf("Двоичный эквивалент: ");
		to_binary(number);
		putchar('\n');
		printf("Введите целое число (или q для выхода): ");

	}
	printf("Программа завершена. \n");
*/


	// Определение стоимости номера в определнном отеле:
/*	int nights;
	double hotel_rate;
	int code;

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
		case 1:
			hotel_rate = HOTEL1;
			break;
		case 2:
			hotel_rate = HOTEL2;
			break;
		case 3:
			hotel_rate = HOTEL3;
			break;
		case 4:
			hotel_rate = HOTEL4;
			break;
		default:
			hotel_rate = 0.0;
			printf("Ошибка! \n");
			break;
		}

		nights = getnights();
		showprice(hotel_rate, nights);
	}
	printf("Благодарим за использование и желаем успехов! \n");
*/


	// Проверка для выяснения, где находится переменная (&):
/*	int pooh = 2, bah = 5;
	printf("Внутри main() pooh = %d и &pooh = %p \n", pooh, &pooh);				// В функции "main" переменная "pooh" будет со своим адресом (своя ячейка в памяти);
	printf("Внутри main() buh = %d и &bah = %p \n", bah, &bah);					// В функции "main" переменная "bah" будет со своим адресом (своя ячейка в памяти);
	mikado(pooh);																// Вызов функции "mikado", которая принимает значение переменной "pooh" ("2"), которая находится по адресу для функции "main";
*/


	// Попытка функции обмена значениями:
/*	int x = 5, y = 10;
	printf("Первоначально x = %d и y = %d. \n", x, y);
	interchange(x, y);
	printf("Теперь x = %d и y = %d. \n", x, y);					// Значения переменных "x" и "y" не поменяются, т.к. переменные в функции "main" и "interchange" имеют разный адрес (т.е. это разные переменные),
																// в функции "main" не произойдет обмен, а в функции "interchange" переменные обменяются значениями, но после завершения функции переменные пропадут;
*/


// Еще вариант попытки функции обмена значениями:
/*	int x = 5, y = 10;
	printf("Первоначально x = %d и y = %d. \n", x, y);
	interchange(x, y);
	printf("Теперь x = %d и y = %d. \n", x, y);					// Значения переменных "x" и "y" не поменяются, т.к. переменные в функции "main" и "interchange" имеют разный адрес (т.е. это разные переменные),
																// в функции "main" не произойдет обмен, а в функции "interchange" переменные обменяются значениями, но после завершения функции переменные пропадут;
*/


// Использование указателей для обмена значениями переменных:
/*	int x = 5, y = 10;
	printf("Первоначально x = %d и y = %d. \n", x, y);
	interchange(&x, &y);										// Функция "interchange" принимает адреса переменных;
	printf("Теперь x = %d и y = %d. \n", x, y);					// В данном коде теперь переменные обменяются значениями с помощью функции "interchange";
*/


/*	int vol;
	vol = choice();

	printf("Выбран номер варианта %d \n", vol);
*/


// Или еще 9 вариант:
/*	int res;

	showmenu();

	while ((res = getchoice(1, 4)) != 4)			// Пока выбор не равен 4, крутим цикл
	{
		printf("Вы выбрали вариант %d.\n", res);
		showmenu();
	}

	printf("Программа завершена.\n");
*/



	return 0;
}

/*void starbar(void)							// Для "Создание и использование функции";
{
	int count;
	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}
*/


/* void show_n_char(char ch, int num)				// Прототип функции c возращаемым значением;
{
	int count;
	for (count = 1; count <= num; count++)
		putchar(ch);
}
*/


/* int imin(int n, int m)							// Прототип функции c возращаемым значением;
{
	int min;
	if (n < m)
		min = n;
	else
		min = m;

	return min;
}
*/


/* int imax(n, m)									// Неправильное использование функции:
{
	int n, m;

	return (n > m ? n : m);
}
*/

/*void up_and_down(int n)
{
	printf("Уровень %d: ячейка n %p \n", n, &n);	// 1. Функция вызывается в этой же функции. В данном случае "4" раза ("4" уровня получается);
	if (n < 4)
		up_and_down(n + 1);
	printf("УРОВЕНЬ %d: ячейка n %p \n", n, &n);	// 2. Когда переменная "n" будет уже равна "4", функция будет выходит из функции, т.е. "4" уровень перейдет к "3" уровню, из "3" во второй и т.д.
}													// При этом в "4" уровен переменная "n" равна "4", в "3" будет равна "3", во "2" равна "2", в "1" равна "1".
													// Получается в уровне сохраняется свое значение, т.к. в каждой функции (уровне) перменные независимы;
*/

/*long fact(int n)						// Функция основана на цикле;
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;

	return ans;
}

long rfact(int n)						// Функция основана на рекурсии;
{
	long ans;
	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;

	return ans;
}
*/

/*void to_binary(unsigned long n)		// Вывод числа в двоично мэквиваленте;
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');

	return 0;
}
*/

/*void mikado(int bah)
{
	int pooh = 10;																// Локальная переменная "pooh", которой присваивается значение "10";
	printf("Внутри mikado() pooh = %d и &pooh = %p \n", pooh, &pooh);			// В функции "mikado" переменная "pooh" будет уже с другим адресом (тоже своя ячейка в памяти) в отличии от переменной с таким же именем в функции "main";
	printf("Внутри mikado() bah = %d и &bah = %p \n", bah, &bah);				// В функции "mikado" переменная "bah" будет уже с другим адресом (тоже своя ячейка в памяти) в отличии от переменной с таким же именем в функции "main";
}																				// По сути переменные в разных функция с одинаковыми именами, это разные локальные переменные, которые имеют разные адреса;
																				// Функции "mikado" можно передавать значение переменной, которая в функции "main". В функции "mikado" можно изменить значение перемнной, но после завершения функции "mikado" значение этой переменной пропадет;
*/

/* void interchange(int u, int v)			// Попытка функции обмена значениями;
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}
*/

/* void interchange(int u, int v)			// Еще вариант попытки функции обмена значениями;
{
	int temp;
	printf("Первоначально x = %d и y = %d. \n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("Теперь x = %d и y = %d. \n", u, v);
}
*/

/* void interchange(int* u, int* v)			// Попытка функции обмена значениями. Здесь проиходит разыменование переменных;
{
	int temp;								// Переменная "temp" получает значение, на которое указывает переменная "u";
	temp = *u;
	*u = *v;
	*v = temp;
}
*/

/*	void donut(int n);
	int gear(int, int);
	int gues(void);
	void staff_it(double n, double *ptr_n);

	char n_to_char(int n);
	int digits(double n, int v);
	double * which(double* ptr_n, double* ptr_v);
	int random(void);

	int sum(int x, int y)
	{
		return x + y;
	}

	double sum(double x, double y)
	{
		return x + y;
	}

	void alter(int *ptr_x, int *ptr_y)
	{
		int sum = *ptr_x + *ptr_y;
		int difference = *ptr_x - *ptr_y;
		*ptr_x = sum;
		*ptr_y = difference;
	}

	//Или
	void alter(int *ptr_x, int *ptr_y)
	{
		int sum = *ptr_x + *ptr_y;
		*ptr_y = *ptr_x - *ptr_y;
		*ptr_x = sum;
	}

	// Или
	void alter(int* ptr_x, int* ptr_y)
	{
		*ptr_x += *ptr_y;
		*ptr_y = *ptr_x - 2 * *ptr_y;
	}


	void salami(int num)
	{
		int count;
		for (count = 1; count <= num; count++)
			printf("Здравствуйте! \n");
	}

	int vol(int a, int b, int c)
	{
		if (a >= b && a >= c)
			return a;
		else if (b >= a && b >= c)
			return b;
		else
			return c;
	}

	// Или
	int largest(int a, int b, int c)
	{
		int max = a;
		if (b > max) max = b;
		if (c > max) max = c;
		return max;
	}

	*/

	// 9 вариант:
/*	int choice(void)
	{
		int num;
		printf("Выбирите один из следующих вариантов (для выхода нажмите 4). \n");
		printf("1) Копировать файлы		2) Переместить файлы \n");
		printf("3) Удалить файлы		4) Выйти из программы \n");

		while ((scanf_s("%d", &num) != 1) || (num < 1 || num > 4))
		{
			printf("Ошибка! Введите число от 1 до 4: ");

			while (getchar() != '\n')
				continue;
		}
		return num;
	}
*/

/*	void showmenu(void)												// Еще 9 вариант вопроса;
	{
		printf("\n1) Копировать  2) Переместить\n");
		printf("3) Удалить     4) Выйти\n");
		printf("Введите номер: ");
	}


		int getchoice(int low, int high)
	{
		int ans;

		while (scanf("%d", &ans) != 1 || (ans < low || ans > high))
		{
			printf("Ошибка! Введите число от %d до %d: ", low, high);
			while (getchar() != '\n') continue;
		}
		while (getchar() != '\n')
				continue;
		return ans;
	}
*/