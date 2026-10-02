#include <stdio.h>
#include <ctype.h>			// Подключение библиотек для вывода символьных значений;
#include <stdbool.h>
#include <locale.h>
#include <Windows.h>

#define SPACE ' '			// Для вывоода символов функциями "getchar()" и "putchar()";

// Множественный выбор else if (подсчет суммы для счета за электроэнергию):
#define RATE1	0.13230											// Тариф за первые 360 кВт/ч;
#define RATE2	0.15040											// Тариф за следующие 108 кВт/ч;				
#define	RATE3	0.30025											// Тариф за следующие 252 кВт/ч;		
#define	RATE4	0.34025											// Тариф, когда расход превышает 720 кВт/ч;	
#define BREAK1	360.0											// Первая точка разрыва тарифов;
#define	BREAK2	468.0											// Вторая точка разрыва тарифов;
#define	BREAK3	720.0											// Третья точка разрыва тарифов;
#define	BASE1	(RATE1 * BREAK1)								// Стоимость 360 кВт/ч;
#define	BASE2	(BASE1 + (RATE2 * (BREAK2 - BREAK1)))			// Стоимость 468 кВт/ч;
#define BASE3	(BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))	// Стоимость 720 кВт/ч;

#define PERIOD	'.'			// Для логической операции И;

#define	STOP	'|'			// Для подсчета строк, слов, символов;

#define	COVERAGE	350		// Число квадратных футов на одну банку краски. Условная операция "?";


int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Вычисление процента случаев, когда температура опускается ниже нуля:
/*	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Введите список минимальных дневных температур. \n");
	printf("Используйте шкалу Цельсия; для завершения введите q. \n");

	while (scanf_s("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;
	}
	if (all_days != 0)
		printf("%d - общее количество дней: %.1f%% с температурой ниже нуля. \n",
			all_days, 100.0 * (float)cold_days / all_days);
	if (all_days == 0)
		printf("Данные не введены! \n");
*/
	// Код с добавлением конструкции if else:
/*	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Введите список минимальных дневных температур. \n");
	printf("Используйте шкалу Цельсия; для завершения введите q. \n");

	while (scanf_s("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;
	}
	if (all_days != 0)
		printf("%d - общее количество дней: %.1f%% с температурой ниже нуля. \n",
			all_days, 100.0 * (float)cold_days / all_days);
	else
		printf("Данные не введены! \n");
*/
	// Внесений изменений во входные данные, сохраняя прбелы, используя функции "getchar()" и "putchar()";
/*	char ch;
	ch = getchar();				// Функция "getchar" для ввода символов (только символов), равнозначно "scanf_s("%f", &n)";
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);		// Функция "getchar" для вывода символов (только символов), равнозначно "printf("%f", n)";
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);
*/
	// Меняем входные данные, оставляя неизменными символы, которые не являются буквами, применяя библиотеку ctype.h:
/*	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);
*/
	// Множественный выбор else if (подсчет суммы для счета за электроэнергию):
/*	double kwh;
	double bill;

	printf("Введите объем израсходованной электроэнергии  кВт/ч. \n");
	scanf_s("%lf", &kwh);
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)							// Количество кВт/ч в промежутке от 360 до 468;
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)							// Количество кВт/ч в промежутке от 368 до 720;
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else                                            // Количество кВт/ч превышает 680;
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("Сумма к оплате за %.1f кВт/ч составляет $%.1f. \n", kwh, bill);
*/
	// Вложенные операторы if отображают делители числа:
/*	unsigned long num;
	unsigned long div;
	bool isPrime;
	printf("Введите целое число для анализа; ");
	printf("для завершения введите q. \n");
	
	while (scanf_s("%lu", &num) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)	// "isPrime = true" работает как флаг, присваивает переменной "1", в случает если вводимое число окажется простым, то этот флаг отанется в "1",
		{															// а при проверке истинности в операторе "if" (строка 131) выведется сообщения, что число простое;
			if (num % div == 0)				// Если число делится без остатка, то левый операнд будет "0". Если хоть раз оператор при проверке вернет истинну, то в строке 128 перменной "isPrime" присвоится значение ложь и строка 132 не напечатается;
			{
				if ((div * div) != num)
					printf("%lu  делится на %lu и %lu. \n", num, div, num / div);
				else
					printf("%lu  делится на %lu. \n", num, div);
				isPrime = false;									// Если число не простое, может делится, то флаг устанавливается в "0". И когда цикл переберет все варианты делителя, сообщение о простом числе уже не выведется;
			}
		}
		if (isPrime)
			printf("%lu является простым числом. \n", num);
		printf("Введите следующее число для анализа;");
		printf("для завершения введите q. \n");
	}
	printf("До свиданья. \n");
*/

	// Вложенные операторы if отображают делители числа (включая 1):
/*	unsigned long num;
	unsigned long div;
	bool isPrime;
	printf("Введите целое число для анализа; ");
	printf("для завершения введите q. \n");

	while (scanf_s("%lu", &num) == 1)
	{
		isPrime = true;				// Считаем число простым по умолчанию;

		if (num < 2)
		{
			isPrime = false;		// Числа меньше 2 не бывают простыми, т.е. ввели "1" или "0";
		}							// !!! В цикле "for" убрать "isPrime = true";
		else


			for (div = 2, isPrime = true; (div * div) <= num; div++)	// "isPrime = true" работает как флаг, присваивает переменной "1", в случает если вводимое число окажется простым, то этот флаг отанется в "1",
			{															// а при проверке истинности в операторе "if" (строка 131) выведется сообщения, что число простое;
				if (num % div == 0)				// Если число делится без остатка, то левый операнд будет "0". Если хоть раз оператор при проверке вернет истинну, то в строке 128 перменной "isPrime" присвоится значение ложь и строка 132 не напечатается;
				{
					if ((div * div) != num)
						printf("%lu  делится на %lu и %lu. \n", num, div, num / div);
					else
						printf("%lu  делится на %lu. \n", num, div);
					isPrime = false;									// Если число не простое, может делится, то флаг устанавливается в "0". И когда цикл переберет все варианты делителя, сообщение о простом числе уже не выведется;
				}
			}
		if (isPrime)
			printf("%lu является простым числом. \n", num);
		else
			printf("%lu НЕ является простым числом. \n", num);		// В случае если ввести "1";

		printf("Введите следующее число для анализа;");
		printf("для завершения введите q. \n");
	}
	printf("До свиданья. \n");
*/
	// Использование логической операции И:
/*	char ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
			charcount++;
	}
	printf("Здесь имеется %d символов, отличных от ковычек. \n", charcount);
*/ 
	// Подсчет символов, слов, строк:
/*	char c;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;
	printf("Введите текст для анализа (| для завершения): \n");
	prev = '\n';
	while ((c = getchar()) != STOP)
	{
		n_chars++;						// Подсчет всех символов;
		if (c == '\n')					// Подсчет строк;
			n_lines++;
		if (!isspace(c) && !inword)		// Подсчет слов. Начало слова;
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword)		// Конец слова;
			inword = false;
		prev = c;
	}
	if (prev != '\n')
		p_lines = 1;
	printf("символов = %ld, слов %d, строк = %d, ", n_chars, n_words, n_lines);
	printf("неполных строк = %d \n", p_lines);
*/
	// Использование условной операции ?:
/*	int sq_feet;
	int cans;

	printf("Введите количество квадратных футов, которые необходимо закрасить: \n");
	while (scanf_s("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;			// Сначала выбирется одной из условий "истина" слева или ложь "справа", смотря какой результат будет из условия "sq_feet % COVERAGE == 0", затем значение переменной прибавляется к одному из значений у двоеточия;
		printf("Для этого поотребуется %d %s краски. \n", cans, cans == 1 ? "банка" : "банки");	// В первый аргумент подставляется значение сколько потребуется банок. "cans == 1 ? "банка" : "банки"" - это "2" аргумент, относится к спецификатору "%s",
		printf("Введите следующее значение (или q для завершения): \n");						// если условие слева "истино", то выберется строка лева от двоеточия, если "ложь", то справа строка;
	}
*/
	// Использоание оператора continue для пропуска части цикла:
/*	const float MIN = 0.0f;
	const float MAX = 100.0f;
	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;
	printf("Введите результат первой игры (или q для завершения): ");
	while (scanf_s("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f - недопустимое значение. Повторите попытку: ", score);
			continue;		// Переход к условию проверки цикла "while";
		}
		printf("Accepting %0.1f: \n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Введите результат следующей игры (или q для завершения):");
	}
	if (n > 0)
	{
		printf("Среднее значение %d результатов равно %0.1f. \n", n, total / n);
		printf("Минимальное = %0.1f, максимальное = %0.1f. \n", min, max);
	}
	else
		printf("Не было введено ни одного допустимого результата. \n");
*/
	// Использование оператора break для выхода из цикла:
/*	float lenght, width;
	printf("Введите длину прямоугольника: \n");
	while (scanf_s("%f", &lenght) == 1)
	{
		printf("Длина = %0.2f: \n", lenght);
		printf("Введите ширину прямоугольника: \n");
		if (scanf_s("%f", &width) != 1)					// В случае введения числа функция "scanf_s" вернет "1" и при проверке получится, что "1" равна "1",
			break;										// в результате проверки выражения будет "ложь", оператор "break" пропустится. А если ввести нечисловой символ, то оператор "break" выполнит действие;
		printf("Ширина %0.2f: \n", width);
		printf("Площадь %0.2f: \n", lenght * width);
		printf("Введите длину прямоугольника: \n");
	}
	printf("Программа завершена. \n");
*/
	// Использование оператора switch и break:
/*	char ch;

	printf("Дайте мне букву алфавита, и я укажу вам ");
	printf("название животного, \nначинающееся с этой буквы. \n");
	printf("Введите букву или #  для завершения. \n");
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			continue;
		if (islower(ch))		// Только строчные буквы. Для кириллицы "islower" нужны другие настройки, поэтому в операторе "switch" анголийсские буквы;
			switch (ch)
			{
			case 'a':
				printf("архар, дикий горный азиатский баран. \n");
				break;
			case 'b':
				printf("бабирусса, дикая малайская свинья. \n");
				break;
			case 'k':
				printf("коати, носуха обыкновенная. \n");
				break;
			case 'v':
				printf("выхухоль, водоплавающее существо. \n");
				break;
			case 'e':
				printf("ехидна, игольчатый муравей. \n");
				break;
			case 'r':
				printf("рыболов, светло-коричневая куница. \n");
				break;
			default:
				printf("Вопрос озадачил! \n");
			}
		else
			printf("Распознаются только строчные буквы. \n");
		while (getchar() != '\n')
			continue;
		printf("Введите следующую букву или # для завершения. \n");
	}
	printf("До свиданья.\n");
*/
	// Использование множества веток:
/*	char ch;
	int a_ct, e_ct, i_ct, o_ct, u_ct;
	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
	printf("Введите текст или # для завершения программы. \n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case 'a':
			case 'A': a_ct++;
				break;
			case 'e':
			case 'E': e_ct++;
				break;
			case 'i':
			case 'I': i_ct++;
				break;
			case 'o':
			case 'O': o_ct++;
				break;
			case 'u':
			case 'U': u_ct++;
				break;
			default:
				break;
		}
	}
	printf("Количество гласных:	A	E	I	O	U \n");
	printf("			%d	%d	%d	%d	%d \n", a_ct, e_ct, i_ct, o_ct, u_ct);
*/
	// Разные варианты применения оператора goto:
/*	if (size > 12)
		goto a;
	goto b;
	a: cost = cost * 1.05;
	flag = 2;
	b: bill = cost * flag;
	// Эквиалент:
	if (size > 12)
	{
		cost = cost * 1.05;
		flag = 2;
	}
	bill = cost * flag;
*/

/*	if (ibex > 14)
	goto a;
	sheds = a;
	goto b;
	a: sheds = 3;
	b: help = 2 * sheds;
	// Эквивалент:
	if (ibex > 14)
		shed = 3;
	else
		sheds = 2;
	help = 2 * sheds;
*/

/*	reading: scanf_s("%d", &score);
	if (score < 0)
		goto stage2;
	множество операторов
	goto reading;
	stage2: дополнительная обработка;
	// Эквивалент:
	scanf_s("%d", &score)
	while (score <= 0)
	{
		множество операторов
		scanf_s("%d", &score);
	}
	дополнительная обработка;
*/

	// Условия:
	// if(number >= 90 && number < 100)
	// if(ch != q || ch != k)
	// if((number >= 1 && number <= 9) && number != 5)
	// if(number < 1 || number > 9), либо if(!(number >= 1 && number <= 9))

	// Код с if else:
/*	int weight, height;
	printf("Введите вес в фунтах, рост в дюймах: ");
	scanf_s("%d %d", &weight, &height);
	if (weight < 100 && height > 64)
		if (height >= 72)
			printf("Ваш вес слишком мал для вашего роста. \n");
		else
			printf("Ваш вес мал для вашего роста. \n");

	else if (weight > 300 && height < 48)
		printf("Ваш рост мал для вашего веса. \n");
	else
		printf("У вас идеальный вес. \n");
*/
	// Счетчик разных символов:
/*	char ch;
	int lc = 0;
	int uc = 0;
	int oc = 0;
	printf("Введите текст: ");
	while ((ch = getchar()) != '#')
	{
		if (ch >= 'a' && ch <= 'z')
			lc++;
		else if (ch >= 'A' && ch <= 'Z')
			uc++;
		else
			oc++;
	}
	printf("%d строчных букв, %d прописных букв, %d прочие символы. \n", lc, uc, oc);
*/
	// Либой другой счетчик:
/*	char ch;
	int lc = 0;
	int uc = 0;
	int oc = 0;
	printf("Введите текст: ");
	while ((ch = getchar()) != '#')
	{
		if (islower(ch))
			lc++;
		else if (isupper(ch))
			uc++;
		else
			oc++;
	}
	printf("%d строчных букв, %d прописных букв, %d прочие символы. \n", lc, uc, oc);
*/
	// Код с применением операторов continue и goto:
/*	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		printf("Шаг 1 \n");
		if (ch == 'c')
			continue;
		else if (ch == 'b')
			break;
		else if (ch == 'h')
			goto laststep;
		printf("Шаг 2 \n");
	laststep: printf("Шаг 3 \n");
	}
	printf("Готово \n");
*/
	// Код без применением операторов continue и goto:
/*	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch != '\n')
		{
			printf("Шаг 1 \n");
			if (ch == 'b')
				break;						// При операторе "break" происходит выход из цикла "while";
			else if (ch != 'c')
			{
				if (ch != 'h')
					printf("Шаг 2 \n");
				printf("Шаг 3 \n");
			}

		}
	}
	printf("Готово \n");
*/
 	return 0;
}