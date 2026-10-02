#include <stdio.h>
#include <stdlib.h>				// Для работы функции "exit()";
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>
#include <Windows.h>

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


// char get_first(void);			// К 6 заданию;


int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// Задание 1:
	
/*	int count = 0;		// Пока что без "long", в учебных целях можно через "int";
	printf("Введите текст: \n");

	while ((getchar()) != EOF)
		count++;
	printf("Текст содержит %d символов. \n", count);
*/


	// Задание 2:
/*	int ch;
	int count = 0;
	printf("Введите символы чтобы увидеть их в десятичном ASCII - коде: \n");

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			printf("\\n, ");
		else if (ch == '\t')
			printf("\\t, ");
		else if (isprint(ch))
			printf("%c = %d, ", ch, ch);
		else
			printf("^%c = %d, ", ch + 64, ch);
		count++;

		if (count == 10)
		{
			printf("\n");
			count = 0;
		}		
	}
	printf("Прогрмма завершена. \n");
*/


	// Задание 3:
/*	int ch;
	long high, low, other;
	high = low = other = 0;

	printf("Введите текст: \n");

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			low++;
		else if (isupper(ch))
			high++;
		else
			other++;
	}
	printf("Итого: строчных букв %ld, прописных букв %ld, остальных символов %ld. \n", low, high, other);
*/


	// Задание 4:
	// В данной программе необходимо как минимум нажать "ввод", только потом "ctrl+z";
/*	int ch;
	long letter, sum_letter, word, punct;
	double average = 0.0;
	letter = sum_letter = word = punct = 0;
	

	printf("Введите текст: \n");
	while ((ch = getchar()) != EOF)
	{
		if (isalpha((unsigned char)ch))
			letter++;
		else if (letter == 0 && ch == ' ')					// Защита от первых пробелов;
		{
			printf("Ошибка! Необходимо ввести символ отличный от пробела. \n");		// Защита от первых пробелов;
			while((getchar()) != '\n')						// Вычищает символ новой строки;
				continue;
		}
		else if (letter == 0 && ch == '\n')
		{
			printf("Ошибка! Необходимо ввести символ отличный от новой строки. \n"); // Защита от первого нажатия ввода;
			continue;
		}


		if (ispunct(ch))
			punct++;

		if ((ch == ' ' || ch == '\n') && letter > 0)			// Если есть какие буквы;
		{
			word++;
		}
	}

	if (word > 0)
		average = (double)letter / word;
	else
		average = 0;

	printf("Слов %ld, среднее количество букв в словах %.2f, знаков припинаний %ld. \n", 
			word, average, punct);
*/


	// Задание 5:
/*	int low = 1, high = 100;
	int guess = 50;
	char response;

	printf("Загадай число от 1 до 100, а я угадаю.\n");
	printf("Отвечай: 'у' (угадал), 'б' (больше), 'м' (меньше).\n");

	do {
		printf("Мое предположение: %d. (у/б/м): ", guess);
		
		response = getchar();				// Читаем ПЕРВЫЙ символ;
		
		while (getchar() != '\n')			// ВЫКИДЫВАЕМ ENTER и прочий мусор из очереди;
			continue;

		if (response == 'б') 
			low = guess + 1;				// Число больше, значит нижняя граница растет;

		else if (response == 'м')
			high = guess - 1;				// Число меньше, значит верхняя падает;

		guess = (low + high) / 2;			// КЛЮЧЕВАЯ ШТУКА: Считаем середину нового диапазона;

	} while (response != 'у');				// Крутимся, пока не введут 'у';

	printf("Изи! Это было число %d.\n", guess);
*/


	// Задание 6:
/*	int choise;
	printf("Введите текст: \n");

	while ((choise = get_first()) != 'q')
	{
			putchar(choise);
	}
	printf("Программа завершена. \n");
*/


	// Задание 7:
/*	char choise = 1;
	int work_h;
	float sum, tax, salary, rate;

	printf("Введите букву соответствующую желаемой тарифной ставке или действию: \n");

	while (choise)
	{
		printf("а) %-10.2f %*s б) %.2f \n", SUM_H1, 15, "", SUM_H2);
		printf("в) %-10.2f %*s г) %.2f \n", SUM_H3, 15, "", SUM_H4);
		printf("q) %s \n", EXIT);
		if (scanf_s(" %c", &choise, 1) == 1)
		{
			switch (choise)
			{
			case 'а':
				rate = SUM_H1;
				break;
			case 'б':
				rate = SUM_H2;
				break;
			case 'в':
				rate = SUM_H3;
				break;
			case 'г':
				rate = SUM_H4;
				break;
			case 'q':
				choise = 0;
				continue;
			default:
				printf("Введите значения от а до г (для выхода q): \n");
				continue;
			}
			printf("Введите количество отработанных часов за неделю: ");

			while ((scanf_s("%d", &work_h)) == 0)
			{
				while((getchar()) != '\n');
				printf("Ошибка! Введите числовое значение: \n");
				continue;
			}
			while (getchar() != '\n');

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
			printf("Ошибка!!! Введите значения от а до г (для выхода q): \n");
			while (getchar() != '\n')
				continue;
		}
	}
	printf("Расчет окончен. \n");
*/


	// Задание 8:
/*	char choise = 1;
	float num_1, num_2, result = 0.0f;

	printf("Выберете желаемую математическу операцию: \n");

	while (choise)
	{
		printf("%-20s в. вычитание \n", "с. сложение");
		printf("%-20s д. деление \n", "у. умножение");
		printf("з. завершение \n");

		if (scanf_s(" %c", &choise, 1) == 1)
		{
			while ((getchar()) != '\n');
				
			switch (choise)
			{
				case 'в':
					printf("Вычитание \n");
					break;
				case 'с':
					printf("Сложение \n");
					break;
				case 'д':
					printf("Деление \n");
					break;
				case 'у':
					printf("Умножение \n");
					break;
				case 'з':
					choise = 0;
					continue;
				default:
					printf("Ошибка! Выберете один из предложенных вариантов: \n");
					continue;
			}

			printf("Введите первое число. \n");

			while ((scanf_s("%f", &num_1)) != 1)
			{
				while ((getchar()) != '\n');
				printf("Ошибка! Буквы и другие символы не принимаются. \nВведите число. \n");
				continue;
			}
			while ((getchar()) != '\n');

			printf("Введите второе число. \n");
			num_2 = 1;

			while ((scanf_s("%f", &num_2)) != 1 || (num_2 == 0 && choise == 'д'))
			{
				if (num_2 == 0 && choise == 'д')
				{
					printf("Ошибка! На 0 делить нельзя. \nВыберете другое число. \n");
					continue;
				}

				while ((getchar()) != '\n');
				printf("Ошибка! Буквы и другие символы не принимаются. \nВведите число. \n");
				continue;
			}
			while ((getchar()) != '\n');

			if (choise == 'в')
				result = num_1 - num_2;

			else if (choise == 'с')
				result = num_1 + num_2;

			else if (choise == 'у')
				result = num_1 * num_2;

			else if (choise == 'д')
				result = num_1 / num_2;

			printf("Ответ %.4f \n", result);

			printf("Снова выберете желаемую математическу операцию: \n");
		}
	}

	printf("Программа завершена. \n");
*/
	return 0;

}

/*char get_first(void)						// Для 6 задания;
{
	int ch;		
	
	while (isspace(ch = getchar()))			// В "while (isspace(ch = getchar()))" сначала "ch" присваивается буква, затем "isspace" видит что это не пробельный символ, табуляция, новая строка,
		continue;							// выдает "0", т.е.ложь и цикл прекращает работу, за дело берется второй цикл "while", где откидываются отсавшиеся буквы (символы);

	while ((getchar()) != '\n')
		continue;

	return ch;								// В результате функция возвращает один символ, т.е. первый;
}
*/
