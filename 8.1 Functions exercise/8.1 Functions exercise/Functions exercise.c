#include <stdio.h>
#include <locale.h>
#include <Windows.h>
	
// double min_val(double x, double y);							// К 1 заданию;	

// void chline(char c, int i, int j);							// Ко 2 заданию;

// void symbol(char c, unsigned int i, unsigned int j);			// К 3 заданию;

// double average(double x, double y);							// К 4 заданию;

// void larger_of(double* n_1, double* n_2);					// К 5 заданию;

// void change(double *x, double *y, double *z);				// К 6 заданию;

// int symbol(int x);											// К 7 заданию;

// double power(double n, int p);								// К 8 и 9 заданию;

// void to_base(unsigned int x, unsigned int y);				// К 10 заданию;

// unsigned long long fibonachi(unsigned int x);				// К 11 заданию;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задание 1:
/*	double vol_1, vol_2;
	double vol;
	printf("Введите два дробных числа (для выхода введите q: ");
	while (1)
	{
		if ((scanf_s("%lf %lf", &vol_1, &vol_2) == 2))							// Истино если ввели два числа. Если ввели после чисел букву, то все равно будет истина;
		{
			vol = min_val(vol_1, vol_2);
			printf("Наименьшим числом является %.3lf. \n", vol);	
		}
		else
		{
			int ch = getchar();													// Ложь Если ввели не два числа. Если ввели первое значение с буквой, к примеру, уже будет ложь. Переменной "ch" присвоится значение;
			if (ch == 'q')
				break;															// Если ввели "q", то затем произойдет выход из цикла "while";
			printf("Ошибка! Необходимо ввести только числа. \n");
		}
		printf("Введите снова два дробных числа (для выхода введите q): ");
		while ((getchar()) != '\n')												// Убираем лишние числа и символы;
			continue;
	}
	printf("Программа завершена. \n");
*/


	// Задание 2:
/*	char ch;
	int col_1, col_2;
	while (1)
	{
		printf("Введите символ и два числа(для выхода q): ");
		if ((scanf_s(" %c", &ch, 1) != 1) || ch == 'q')
			break;

		if ((scanf_s("%d %d", &col_1, &col_2) == 2))
		{
			chline(ch, col_1, col_2);
			putchar('\n');
		}
		while ((getchar()) != '\n')
			continue;
	}
	printf("Программа завершена. \n");
*/


	// Задание 3:
/*	char ch;
	int row, col;

	while (1)
	{
		printf("Введите символ, число столбцов и строк (для выхода q): ");
		if ((scanf_s(" %c", &ch, 1)) != 1 || ch == 'q')
			break;

		if ((scanf_s("%d %d", &col, &row)) == 2)
			symbol(ch, col, row);
		else
			printf("Ошибка! Введите данные корректно. \n");

		while ((getchar()) != '\n')
			continue;
	}
	printf("Программа завершена. \n");
*/


	// Задание 4:
/*	char check;
	double num_1, num_2, num;
	int status;

	while (1)
	{
		printf("Введите два числа (для выхода q): ");

		status = (scanf_s("%lf %lf", &num_1, &num_2));

		if(status == 2)
		{
			num = average(num_1, num_2);

			if (num == 0)
			{
				printf("Сумма двух чисел равно 0. На 0 делить нельзя! Введи снова два числа. \n");
			}
			else
				printf("Среднее гармоническое значение для двух чисел %.3lf. \n", num);
		}

		else
		{
			scanf_s(" %c", &check, 1);
			if(check == 'q')
				break;
			else
				printf("Ошибка! Введите данные корректно. \n");
		}

		while ((getchar()) != '\n')
			continue;
	}
	printf("Программа завершена. \n");
*/


	// Задание 5:
/*	double num_1, num_2;

	while (1)
	{
		printf("Введите два числа (для выхода q): ");
		int status = (scanf_s("%lf %lf", &num_1, &num_2));
		if (status == 2)
		{
			larger_of(&num_1, &num_2);
			printf("Наибольшим число является %.2lf \n", num_1);		// В данном случае разницы нет, какую переменную вписывать; 
		}
		else
		{
			char check; 
			scanf_s("%s", &check, 1);
			if (check == "q")
				break;
			else
				printf("Ошибка! Введите данные корректно. \n");
		}
		while ((getchar()) != '\n')
			continue;
	}
	printf("Программа завершена. \n");
*/


	// Еще вариант (улучшенный) к 5 заданию:
/*	double num_1, num_2;
	int next;

	while (1)
	{
		printf("Введите два числа (или 'q' для выхода): ");	
		int status = scanf_s("%lf %lf", &num_1, &num_2);						// Попытка считать два числа типа double;
		if (status == 2)
		{
			larger_of(&num_1, &num_2);
			printf("Результат: оба числа теперь равны %.2f\n\n", num_1);	
			while ((next = getchar()) != '\n' && next != EOF);					// Очистка буфера после успешного ввода чисел (убирает оставшийся Enter);
		}
		else
		{
			char check;		
			if (scanf_s(" %c", &check, 1) == 1)									// Считываем символ. Число 1 — это размер буфера для char в scanf_s;
			{
				next = getchar();												// Проверяем, что после символа;
				if (check == 'q' && (next == '\n' || next == EOF))
					break;														// Строгий выход только по одной 'q';
				else
				{
					printf("Ошибка! Введите числа или одиночную 'q'.\n");																
					if (next != '\n' && next != EOF)							// Если ввели мусор (типа 'qwfd'), чистим буфер до конца строки;
						while ((next = getchar()) != '\n' && next != EOF);		// EOF вводмм если принудительно введкм "ctrl+z" либо при работе с файлами, например, через командную строку;
				}
			}
		}
	}
	printf("Программа завершена.\n");
*/


// Задание 6:
/*	double num_1, num_2, num_3;
	int check, status;
	while (1)
	{
		printf("Введите 3 числа (для выхода q): ");
		status = scanf_s("%lf %lf %lf", &num_1, &num_2, &num_3);
		if (status == 3)
		{
			change(&num_1, &num_2, &num_3);
			printf("Итоговый порядок чисел: %.2lf, %.2lf, %.2lf \n", num_1, num_2, num_3);
		}
		else if ((check = getchar()) == 'q' && status == 0)
		{
			if ((check = getchar()) == '\n')
				break;
			printf("Ошибка! Введите данные корректно. \n");
		}
		else
			printf("Ошибка! Введите данные корректно. \n");
		while ((getchar()) != '\n')
			continue;
	}
	printf("Программа завершена. \n");
*/


// Задание 7:
/*	int vol;
	printf("Введите символ (выход \"ctrl+z\"): \n");
	while((vol = getchar()) != EOF)
	{
		if (!isspace(vol))
			symbol(vol);
		if(vol == '\n')
			printf("Введите символ (выход \"ctrl+z\"): \n");
	}

	printf("Программа завершена. \n");
*/


// Задание 8 и 9:
/*	double x, xpow;
	int exp, status;
	int check;

	printf("Введите число (со знаком или без) и степень, ");
	printf("в которую \nчисло будет возведено. Для завершения программы");
	printf(" введите q: ");
	while(1)
	{
		status = scanf_s("%lf%d", &x, &exp);
		if (status == 2)
		{
			xpow = power(x, exp);
			printf("%.3g в степени %d равно %.5g \n", x, exp, xpow);
			printf("Введит следующую пару чисел или q для завршения. \n");
		}

		else if(status < 2)
		{
			check = getchar();
			if (check == 'q' && getchar() == '\n')
				break;
			printf("Ошибка! Введите данные корректно. \n");
		}
		while ((getchar()) != '\n')
			continue;

	}
	printf("Программа завершена. \n");
*/


	// Задание 10:
/*	unsigned int number_1, number_2, status;

	while (1)
	{
		printf("Введите первое целое число и второе число от 2 до 10 (или q для выхода): ");
		status = scanf_s("%u %u", &number_1, &number_2);
		if (status == 2)
		{
			if (number_2 >= 2 && number_2 <= 10)
			{
					printf("Двоичный эквивалент: ");
					to_base(number_1, number_2);
					putchar('\n');
			}
			else
				printf("Ошибка! Второе число должно быть от 2 до 10. \n");
		}
		else
		{
			char check;
			if(scanf_s(" %c", &check, 1) == 1)
				if(check == 'q' && getchar() == '\n')
					break;
			printf("Ошибка! Введите данные корректно. \n");
			while ((getchar()) != '\n')
				continue;
		}		
	}
	printf("Программа завершена. \n");
*/


	// Задача 11:
/*	unsigned int vol;
	unsigned long long  result;
	int check, status;

	while (1)
	{
		printf("Введите число (выход из программы q: ");
		status = scanf_s("%u", &vol);
		if (status == 1)
		{
			result = fibonachi(vol);
			printf("%llu \n", result);
		}

		else if (status == 0)
		{
			check = getchar();
			if (check == 'q' && getchar() == '\n')
				break;
			printf("Ошибка! Введите данные корректно. \n");
		}
		while ((getchar()) != '\n')
			continue;

	}
	printf("Программа завершена. \n");
*/


		return 0;
}

/* double min_val(double x, double y)							// К 1 заданию;
{
	if (x < y)
		return x;
	else
		return y;
}
*/

/* void chline(char c, int i, int j)							// Ко 2 заданию;
{
	int start = 1;

	if (i > j)
	{
		int temp = j;
		j = i;
		i = temp;
	}

	for (; start <= j; start++)
	{
		if (start >= i)
			putchar(c);
		else
			putchar(' ');
	}
}
*/

/* void symbol(char c, unsigned int i, unsigned int j)				// К 3 заданию;
{
	unsigned int row, col;
	for (row = 1; row <= j; row++)
	{
		for (col = 1; col <= i; col++)
			putchar(c);
		putchar('\n');
	}
	putchar('\n');
}
*/

/* double average(double x, double y)								// К 4 заданию;
{
	if (x + y == 0)
		return 0;
	else
		return (2 * x * y) / (x + y);
}
*/

/* void larger_of(double* n_1, double* n_2)							// К 5 заданию;
{
	if (*n_1 > *n_2)
		*n_2 = *n_1;
	else
		*n_1 = *n_2;
}
*/

/* void change(double* x, double* y, double* z)						// К 6 заданию;
{
{
	double temp;
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*y > *z)
	{
		temp = *y;
		*y = *z;
		*z = temp;
	}
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}

}
*/

/* int symbol(int x)													// К 7 заданию;
{
	int num;

	if (x >= 'A' && x <= 'Z')
	{
		num = (x - 'A') + 1;
		printf("Символ %c является буквой и имеет порядковый номер в алфавите %d. \n", x, num);
	}
	else if (x >= 'a' && x <= 'z')
	{
		num = (x - 'a') + 1;
		printf("Символ %c является буквой и имеет порядковый номер в алфавите %d. \n", x, num);

	}
	else
	{
		if (isspace(x));
		else
			printf("Символ \"%c\" не является буквой. \n", x);
		return -1;
	}
	return	num;
}
*/

/* double power(double n, int p)										// К 8 заданию;
{
	double pow = 1.0;

	if (p == 0 && n == 0)
	{
		printf("Не определено. \n");
		pow = 1;
	}
	else if (n == 0)
	{
		pow = 0;
		printf("Ошибка! На 0 делить нельзя. \n");
	}
	else if (p < 0)
	{
		p *= -1;
		for (int i = 1; i <= p; i++)
			pow /= n;
	}
	else if (p > 0)
		for (int i = 1; i <= p; i++)
			pow *= n;

	return pow;
}
*/


/* double power(double n, int p)										// К 9 заданию;
{

	if (p == 0)
	{
		if (n == 0)
			printf("Не определено, но вернем 1.\n");
		return 1.0;													// ВОТ ОНА, ЕДИНИЦА! Она вернется для любого n в степени 0;
	}
	else if (n == 0)
	{
		printf("Ошибка! На 0 делить нельзя. \n");
		return 0;
	}
	else if (p < 0)
		return 1.0 / power(n, -p);
	else if (p > 0)
		return n * power(n, p - 1);
}
*/
/*
Этап «Спуск» (Откладывание дел на потом)
Программа идет сверху вниз, ничего не умножая, а просто создавая «заметки»:

	Вызов №1: power(2, 3)
Смотрит в код: p=3 (больше 0).
Записывает в память: «Я должен вернуть 2 * (результат Вызова №2)».
Уходит ждать.
	Вызов №2: power(2, 2)
Смотрит в код: p=2 (больше 0).
Записывает: «Я должен вернуть 2 * (результат Вызова №3)».
Уходит ждать.
	Вызов №3: power(2, 1)
Смотрит в код: p=1 (больше 0).
Записывает: «Я должен вернуть 2 * (результат Вызова №4)».
Уходит ждать.
2. Этап «Дно» (Где берется первая цифра)
	Вызов №4: power(2, 0)
Смотрит в код: p=0. Опа!
У него в коде написано: if (p == 0) return 1.0;.
Он никого не вызывает. Он просто кричит Вызову №3: «Держи, мой ответ — 1!». И закрывается.

	3. Этап «Подъем» (Схлопывание или «Опа, пришло!»)
Теперь те, кто «ждал», начинают просыпаться и доделывать свою работу снизу вверх:
	Вызов №3 проснулся:
Он ждал результат от №4. Получил 1.
Теперь он делает свое дело: 2 * 1 = 2.
Кричит Вызову №2: «Мой ответ — 2!». И закрывается.
	Вызов №2 проснулся:
Он ждал результат от №3. Получил 2.
Делает свое дело: 2 * 2 = 4.
Кричит Вызову №1: «Мой ответ — 4!». И закрывается.
	Вызов №1 (самый первый) проснулся:
Он ждал результат от №2. Получил 4.
Делает финал: 2 * 4 = 8.
Это и есть итоговый ответ.

Как работает power(2, -3):
	Первый заход: Программа видит p = -3.
Срабатывает условие else if (p < 0).
Программа должна выполнить: return 1.0 / power(2, -(-3)).
Минус на минус дает плюс, поэтому вызывается power(2, 3).
Важно: Первый вызов «замирает» и ждет ответа от power(2, 3), чтобы потом разделить 1.0 на этот результат.
Рекурсия для положительной степени:
Теперь запускается else if (p > 0)
		return n * power(n, p - 1);
power(2, 3)  считает:
Когда цепочка «схлопнулась», число 8 возвращается в самый первый вызов.
	Финал:
Первый вызов «просыпается», получает восьмерку и доделывает свое дело: 1.0 / 8.
Результат: 0.125;

В языке С (и в математике) запись -p — это просто смена знака.
Если p = -3, то -p — это -(-3), то есть просто 3.
*/

/* void to_base(unsigned int x, unsigned int y)						// К 10 заданию;
{
	int r;
	r = x % y;
	if (x >= y)
		to_base(x / y, y);
	putchar(r + '0');												// Символ "0" в ASCII имеет код 48, поэтому когда переменная "r" равна, к примеру "3", то получается 3 + 48 = 51, а "51" это код ASCII цифры 3;
}																	// А функция "putchar" работает только символами;
																	// Важный момент для будущего: Этот трюк с + '0' работает только для систем счисления до 10 включительно. Если бы перевели число в 16-ричную систему (где есть буквы A, B, C, D, E, F), 
																	// там понадобилась бы дополнительная проверка if (r > 9), чтобы прибавлять не к '0', а к 'A';
*/


/* unsigned long long fibonachi(unsigned int x)						// К заданию 11;
{
	unsigned long long num = 0, num_1 = 0, num_2 = 1;				// Числовой ряд фибоначи должен быть 0, 1, 1, 2, 3, 5 и т.д.;
	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else
	{
		for (int count = 2; count <= x; count++)
		{
			num = num_1 + num_2;
			num_1 = num_2;
			num_2 = num;
		}
	}
	return num;
}
*/