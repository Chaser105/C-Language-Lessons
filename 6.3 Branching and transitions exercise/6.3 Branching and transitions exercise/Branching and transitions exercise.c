#include <stdio.h>
#include <ctype.h>			// Подключение библиотек для вывода символьных значений;
#include <stdbool.h>
#include <locale.h>
#include <Windows.h>

// Для задания 7 и 8:
#define SUM_H1	8.75f		// $8.75/час;
#define SUM_H2	9.33f		// $9.33/час;
#define SUM_H3	10.0f		// $10.00/час;
#define	SUM_H4	11.20f		// $11.20/час;
#define	EXIT	"Выход"			// Выход из программы;
#define	OVER_K	1.5			// 1.5 коэффициент переработки свыше 40 часов;
#define	TAX_1	15			// 15% с первых $300;
#define	TAX_2	20			// 20% со следующих $150;
#define	TAX_3	25			// 25% с остатка;
#define NORM_H	40			// 40 часов в неделю без переработки;

// Для задания 10:
#define ONCE			17850			// 15% с первых 17 850$  плюс 28% от суммы превышающей указанную;
#define	HEAD_FAM		23900			// 15% с первых 23 900$  плюс 28% от суммы превышающей указанную;
#define	MERRIED_JOINT	29750			// 15% с первых 29 750$  плюс 28% от суммы превышающей указанную;
#define	MERRIED_SEPAR	14875			// 15% с первых 14 875$  плюс 28% от суммы превышающей указанную;
#define PERCENT			(15.0/100.0f)	// Процен налогооблажения;
#define OVER_PERC		(28.0/100.0f)	// Процент на сверх прибыль;

// Для задания 11:
#define PRICE_ART				2.05f		// Стоимость артишоков за фунт;
#define PRICE_BEET				1.15f		// Стоимость свеклы за фунт;
#define PRICE_CAR				1.09f		// Стоимость моркови за фунт;
#define DISCOUNT_LIMIT			100.0f		// Скидка свыше $100;
#define DISCOUNT_RATE			0.05f		// Скидка 5% свыше $100;
#define DELIVERY_TO_5			5.0f		// Порог до 5 фунтов;
#define	EXPENSES_1				6.50f		// Стоимость до 5 фунтов;
#define LIMIT_LOW				5.0f		// Порог от 5 фунтов;
#define LIMIT_HIGH				20.0f 		// Порог до 20 фунтов;
#define EXPENSES_2				14.0f		// Стоимость от 5 до 20 фунтов;
#define DELIVERY_FROM_20		20.0f		// Порог от 20 фунтов;
#define EXPENSES_3				0.50f		// Стоимость от 20 фунтов;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задание 1:
/*	char ch;
	int space = 0;
	int row = 0;
	int anything = 0;
	printf("Введите текст: \n");
	while ((ch = getchar()) != '#')
	{
		if (isblank((unsigned char)ch))
			space++;
		else if (ch == '\n')
			row++;
		else
			anything++;
	}
	printf("%d пробелов, %d новых строк, %d прочие символы. \n", space, row, anything);
*/


	// Задание 2
/*	unsigned char ch;
	int count = 1;
	printf("Введите символ или # для выхода из программы: \n");

	while ((ch = getchar()) != '#')
	{
		if (ch != '\n')
		{
			if ((count % 8) != 0)
				printf("%c=%-3d	", ch, ch);
			else
				printf("%c=%d	\n", ch, ch);
			count++;
		}
	}
	printf("Программа завершена \n");
*/


	// Еще вариант к заданию 2:
/*	unsigned char ch;
	int count = 1;
	printf("Введите символ или # для выхода из программы: \n");

	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		printf("%c=%-3d	", ch, ch);

		if ((count % 8) == 0)
			printf("\n");
		count++;
	}
*/


	// Задание 3:
/*	int val_even = 0;
	int val_odd = 0;
	int value;
	float average_even = 0.0f;
	float average_odd = 0.0f;

	printf("Введите числа (для выхода 0): \n");

	while ((scanf_s("%d", &value)) == 1 && value != 0)
	{
		if ((value % 2) == 0 && value != 0)
		{
			val_even++;
			average_even += value;
		}
		else
		{
			val_odd++;
			average_odd += value;
		}
	}
	if(val_even !=0)
		printf("%d четных чисел %.4f среднее значение четных чисел. \n ", val_even, average_even / val_even);
	else
		printf("%d четных чисел 0 среднее значение четных чисел. \n ", val_even);
	if(val_odd != 0)
		printf("%d нечетных чисел %.4f среднее значение нечетных чисел. \n ", val_odd, average_odd / val_odd);
	else
		printf("%d нечетных чисел 0 среднее значение нечетных чисел. \n ", val_odd);
*/


	// Еще вариант к заданию 3:
/*	int val_even = 0;
	int val_odd = 0;
	int value;
	int average_even = 0;
	int average_odd = 0;

	printf("Введите числа (для выхода 0): \n");

	while ((scanf_s("%d", &value)) == 1 && value != 0)
	{		
		if ((value % 2) == 0)
		{
			val_even++;
			average_even += value;
		}
		else
		{
			val_odd++;
			average_odd += value;
		}
	}
	printf("%d четных чисел %.4f среднее значение четных чисел. \n ", val_even,  val_even == 0 ? 0 : (double)average_even / val_even);
	printf("%d нечетных чисел %.4f среднее значение нечетных чисел. \n ", val_odd, val_odd == 0 ? 0 : (double)average_odd / val_odd);
*/


	// Задание 4:
/*	char ch;
	int punct_1 = 0, punct_2 = 0;
	printf("Введите текст (для выхода #): \n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			punct_1++;
		}
		else if (ch == '!')
		{
			putchar(ch);
			putchar(ch);
			punct_2++;
		}
		else
			putchar(ch);
	}
	printf("Замена . на ! - %d раз, удвоение ! - %d раз. \n", punct_1, punct_2);
*/
	// Задание 5:
/*	char ch;
	int punct_1 = 0, punct_2 = 0;
	printf("Введите текст (для выхода #): \n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case'.':
				putchar('!');
				punct_1++;
				break;
			case'!':
				putchar(ch);
				putchar(ch);
				punct_2++;
				break;
			default:
				putchar(ch);
		}
	}
	printf("Замена . на ! - %d раз, удвоение ! - %d раз. \n", punct_1, punct_2);
*/


	// Задание 6:
/*	char ch_1, ch_2 = 0;
	int count = 0;
	printf("Введите текст (для выхода #): \n");
	while ((ch_1 = getchar()) != '#')
	{
		
		if (ch_1 == 'i' && ch_2 == 'e')
			count++;
		ch_2 = ch_1;
	}
	printf("Последовательность ei встречается %d. \n", count);
*/


	// Задание 7:
/*	int work_h;
	float sum, tax, salary;

	printf("Введите количество отработанных часов за неделю: ");
	while((scanf_s("%d", &work_h)) == 1)
	{
		if (work_h > NORM_H)
			sum = (NORM_H * SUM_H) + ((work_h - NORM_H) * SUM_H) * OVER_K;
		else
			sum = work_h * SUM_H;

		if (sum <= 300)
			tax = (sum / 100 * TAX_1);

		else if (sum > 300 && sum <= 450)
			tax = (300 / 100 * TAX_1) + ((sum - 300) / 100 * TAX_2);

		else 
			tax = (300 / 100 * TAX_1) + (150 / 100 * TAX_2) + ((sum - 450) / 100 * TAX_3);
		salary = sum - tax;
		printf("Всего $%.2f, Налог $%.2f, На руки $%.2f \n", sum, tax, salary);
	}
	printf("Расчет окончен. \n");
*/


	// Задание 8:
/*	int work_h, choise = 1;
	float sum, tax, salary, rate;

	printf("Введите число соответствующее желаемой тарифной ставке или действию: \n");

	while (choise)
	{
		printf("1) %-10.2f %*s 2) %.2f \n", SUM_H1, 15, "", SUM_H2);
		printf("3) %-10.2f %*s 4) %.2f \n", SUM_H3, 15, "", SUM_H4);
		printf("5) %s \n", EXIT);
		if (scanf_s("%d", &choise) == 1)
		{
			switch (choise)
			{
				case 1:
					rate = SUM_H1;
					break;
				case 2:
					rate = SUM_H2;
					break;
				case 3:
					rate = SUM_H3;
					break;
				case 4:
					rate = SUM_H4;
					break;
				case 5:
					choise = 0;
					continue;
				default:
					printf("Введите значения от 1 до 5 \n");
					continue;
			}
			printf("Введите количество отработанных часов за неделю: ");
			scanf_s("%d", &work_h);

			if (work_h > NORM_H)
				sum = (NORM_H * rate) + ((work_h - NORM_H) * rate) * OVER_K;
			else
				sum = work_h * rate;

			if (sum <= 300)
				tax = (sum / 100 * TAX_1);

			else if (sum > 300 && sum <= 450)
				tax = (300 / 100 * TAX_1) + ((sum - 300) / 100 * TAX_2);

			else
				tax = (300 / 100 * TAX_1) + (150 / 100 * TAX_2) + ((sum - 450) / 100 * TAX_3);
			salary = sum - tax;
			printf("Всего $%.2f, Налог $%.2f, На руки $%.2f \n\n", sum, tax, salary);
			printf("Введите снова число соответствующее желаемой тарифной ставке или действию: \n");
		}
		else
		{
			printf("Ошибка!!! Введите значения от 1 до 5 \n");
			while (getchar() != '\n')
				continue;
		}
	}
	printf("Расчет окончен. \n");

	/*
if (scanf_s(...) == 1): Если пользователь ввел число, мы идем по «зеленому коридору» к расчету зарплаты.
else: Если ввели букву, "scanf_s" её не трогает, и она «застревает» в буфере.
while (getchar() != '\n'): «метла» заходит в буфер, хватает эту букву (и всё, что введено рядом) и выбрасывает их. 
После символов функция встречается символ следующей строки "\n" и при проверке цикл "while" заканчиается. 
Теперь буфер пуст, и на следующем круге "scanf_s" готов к новому числу;
	*/


	// Задание 9:
/*	unsigned long num;
	unsigned long div, count;
	int is_prime;
	printf("Введите положительное целое число: ");
	while (scanf_s("%lu", &num) == 1)
	{
		printf("До числа %lu натуральными являются следующие числа: ", num);

		if (num >= 2)				// Печатаем двойку явно, раз идем по нечетным;
			printf("2 ");

		for (div = 3; div <= num; div += 2)
		{
			is_prime = 1;			// 1 — значит "истина". Дальше по коду этот флаг даст доступ к выводу простого числа. Присваиваем "1" для КАЖДОГО нового "div", а далее это число пройдет проверку;

			for (count = 3; count * count <= div; count += 2)
			{
				if (div % count == 0)
				{
					is_prime = 0;	// Если выше условие в остатке "0", то флаг ставим в "0", т.е. "ложь" будет дальше по выполнению кода;
					break;			// Выходим из внутреннего цикла (дальше проверять count-ы нет смысла);
				}
			}
			if(is_prime == 1)
				printf("%lu ", div);
		}
		printf("\nСледующее число: ");
	}
*/


	// Задание 10:
/*	int categ;
	float income, total_inc, tax;

	printf("Введите общий доход и категорию для расчета налогооблажения (q для выхода из программы): \n");
	printf("1) Одинокий \n2) Глава семейства \n3) Состоит в браке, совместное ведение хозяйства \n"
		"4) Состоит в браке, раздельное ведение хозяйства \n");
	while (scanf_s("%d %f", &categ, &total_inc) == 2)
	{
		switch (categ)
		{
			case 1:
				income = ONCE;
				break;
			case 2:
				income = HEAD_FAM;
				break;
			case 3:
				income = MERRIED_JOINT;
				break;
			case 4:
				income = MERRIED_SEPAR;
				break;
			default:
				printf("Ошибка! Введите с 1 по 4 категорию. \n");
				continue;
		}

		if (total_inc > income)
		{
			tax = (PERCENT * income) + (total_inc - income) * OVER_PERC;
		}
		else
			tax = PERCENT * total_inc;

		printf("Сумма налога составляет $%.2f \n\n", tax);
		printf("Снова введите общий доход и категорию для расчета налогооблажения (q для выхода из программы): \n");
		printf("1) Одинокий \n2) Глава семейства \n3) Состоит в браке, совместное ведение хозяйства \n"
			"4) Состоит в браке, раздельное ведение хозяйства \n");
	}
*/


	// Задание 11:
/*	char choise;
	float discont = 0.0f;
	float shipping = 0.0f;
	float weight, total_wight = 0.0f, total_sum, weight_art = 0.0, weight_beet = 0.0, weight_car = 0.0;
	
	printf("--- Овощная лавка ---\n");
	printf("a) Артишоки:  $%.2f/фунт\n", PRICE_ART);
	printf("b) Свекла:    $%.2f/фунт\n", PRICE_BEET);
	printf("c) Морковь:   $%.2f/фунт\n", PRICE_CAR);
	printf("q) Закончить заказ и выйти\n");
	while (printf("Выберете товар от a до c: ") && (scanf_s(" %c", &choise, 1) == 1 && choise != 'q'))	// Перед " %c" обязательно пробел для пропуска символа '\n' вследующем круге цикла при нажатии "Enter" когда вводишь;
	{																									// "(" %c", &choise, 1)" - "1" для того чтобы функция считала информацию в "1" байт и не больше;
		while ((getchar()) != '\n');		// Чистка буфера от пробелов и прочих лишних символов;

		if (choise < 'a' || choise > 'c')
		{
			printf("Ошибка! Выберете товар от a до b. \n");
			continue;
		}

		printf("Введите вес товара в фунтах: ");
		if (scanf_s("%f", &weight) != 1 || weight < 0)
		{
			printf("Ошибка! Введите корректный вес. \n");
			while ((getchar()) != '\n');	// Чистка буфера от пробелов и прочих лишних символов;
			continue;
		}

		while ((getchar()) != '\n');		// Чистка буфера от пробелов и прочих лишних символов;

		switch (choise)
		{
			case 'a':
				weight_art += weight;
				break;
			case 'b':
				weight_beet += weight;
				break;
			case 'c':
				weight_car += weight;
				break;						// "default" не нужен, т.к. есть фильтр "if (choise < 'a' || choise > 'c')"
		}

		total_wight = weight_art + weight_beet + weight_car;

		if (total_wight == 0)
		{
			printf("Заказ пуст! До свидания. \n");
			return 0;
		}
	}

	total_sum = (weight_art * PRICE_ART) + (weight_beet * PRICE_BEET) + (weight_car * PRICE_CAR);

	if (total_sum > DISCOUNT_LIMIT)
		discont = total_sum * DISCOUNT_RATE;

	if (total_wight <= DELIVERY_TO_5)
		shipping = EXPENSES_1;
	else if (total_wight > LIMIT_LOW && total_wight <= LIMIT_HIGH)
		shipping = EXPENSES_2;
	else
		shipping = EXPENSES_2 + (total_wight - LIMIT_HIGH) * EXPENSES_3;

	printf("\n\n-------------Ваш чек--------------\n");

	if (weight_art > 0)
		printf("%-20s: %.2f ф по $%.2f = $%.2f \n", "Артишоки", weight_art, PRICE_ART, weight_art * PRICE_ART);
	if (weight_beet > 0)
		printf("%-20s: %.2f ф по $%.2f = $%.2f \n", "Свекла", weight_beet, PRICE_BEET, weight_beet * PRICE_BEET);
	if (weight_car > 0)
		printf("%-20s: %.2f ф по $%.2f = $%.2f \n", "Морковь", weight_car, PRICE_CAR, weight_car * PRICE_CAR);

	printf("----------------------------------\n");

	if (discont > 0)
		printf("%-20s: $%8.2f \n", "Скидка 5%", discont);
	printf("%-20s: $%8.2f \n", "Доставка", shipping);
	printf("%-20s: $%8.2f \n", "Общая сумма", total_sum);
	printf("%-20s: $%8.2f \n\n\n", "Итого к оплате", total_sum - discont + shipping);
*/

	return 0;
}