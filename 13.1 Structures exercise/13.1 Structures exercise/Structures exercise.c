#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>
#include "Function.h"


int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// Задание 1:
/*	int sum_day = 0;
	int count;
	char choice[LEN] = { 0 };
	bool found = false;
	struct month name[VOL] =
	{
		{"Январь",   "Янв", 31, 1},
		{"Февраль",  "Фев", 28, 2},
		{"Март",     "Мар", 31, 3},
		{"Апрель",   "Апр", 30, 4},
		{"Май",      "Май", 31, 5},
		{"Июнь",     "Июн", 30, 6},
		{"Июль",     "Июл", 31, 7},
		{"Август",   "Авг", 31, 8},
		{"Сентябрь", "Сен", 30, 9},
		{"Октябрь",  "Окт", 31, 10},
		{"Ноябрь",   "Ноя", 30, 11},
		{"Декабрь",  "Дек", 31, 12}
	};
	puts("Введите название месяца (для выхода нажмите ввод):");
	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
	{
		choice[0] = (char)toupper((unsigned char)choice[0]);										// Если ввели первую букву нижним регистром;
		for (count = 0; count < VOL; count++)
		{
			if ((strcmp(choice, name[count].name_month)) == 0)
			{
				sum_day = calculate(count, name);
				found = true;
				break;
			}
		}
		if (found)
		{
			printf("За %d месяца с начала года %d дней. \n", ++count, sum_day);
			puts("Введите название месяца (для выхода нажмите ввод):");
			found = false;
		}
		else
			puts("Ошибка! Введите название месяца корректно.");
	}
	puts("Программа завершена.");
*/



	// Задание 2:
/*	struct month months[12] =                               // Справочник;
	{
		{"января",   "янв", 31, 1},
		{"февраля",  "фев", 28, 2},							// В феврале по умолчанию 28, код потом исправит на 29 если что;
		{"марта",    "мар", 31, 3},
		{"апреля",   "апр", 30, 4},
		{"мая",      "май", 31, 5},
		{"июня",     "июн", 30, 6},
		{"июля",     "июл", 31, 7},
		{"августа",  "авг", 31, 8},
		{"сентября", "сен", 30, 9},
		{"октября",  "окт", 31, 10},
		{"ноября",   "ноя", 30, 11},
		{"декабря",  "дек", 31, 12}
	};
	struct calendar user_date = { 0, 0, 0 };
	while (1)
	{
        user_date = enter_data(user_date);
        if (user_date.day == EOF)
            break;
        
        if ((user_date.year % 4 == 0 && user_date.year % 100 != 0) || user_date.year % 400 == 0)    // Проверка для високосного года. 1700, 1900, 2100 года считаются не високосными;
            months[1].days = 29;                                                                    // Меняем значение в справочнике;
        else
            months[1].days = 28;
    
        ToLower(&user_date);                                                                        // Перевод введенных символов (название месяца) в нижний регистр, т.к. в справочнике все мелкими буквами;   

        // Проверка на ввод номера месяца:
        int month_index = -1;                                                                       // Если функция не сможет найти ни слово, ни цифру, в условие проверки подставляется значение, где будет сообщение об ошибке. 
                                                                                                    // В данной программе можно не использовать, есть функция на ввод, где происходит проверка на ввод;
        int parsed_num = atoi(user_date.month);                                                     // Если функция atoi() не нашла искомый месяц или цифру, то ошибка;


        // Поиск в справочнике:
        for (int i = 0; i < SIZE; i++)                                                              //  Или for(int i = 0; i <  months[11].month_no; i++);  
        {
            if (parsed_num == months[i].month_no ||
                strcmp(user_date.month, months[i].name) == 0 ||
                strcmp(user_date.month, months[i].abbrev) == 0)
            {
                month_index = i;
                break;
            }
        }
        if (month_index < 0)
        {
            puts("Ошибка. Неверно введено название или номер месяца.");
            continue;
        }

        // Проверка на количество дней:
        if (user_date.day < 1 || user_date.day > months[month_index].days)
        {
            printf("Введенное количество введено неверно %d %s месяца. \n", months[month_index].days, months[month_index].name);
            puts("Введите дату корректно.");
            continue;
        }

        // Подсчет дней:
       int total =  sum_day(&user_date, months, month_index);
       printf("Прошло всего дней с начала года %d. \n", total);
	}
    puts("Программа завершена.");
*/




	// Задание 3:
/*	struct book library[MAXBKS] = {0};
	int count = 0;																			
	
	// Ввод книг:
	count = enter_book(library);
	
	// Вывод списка книг:
	print_library(library, count);
*/




	// Задание 4:
/*	struct num_card list[VOL] =
	{
		{ 6061799,  {"Пушкин", "Александр", "Сергеевич"} },				// 06.06.1799;
		{ 11111821, {"Достоевский", "Фёдор", "Михайлович"} },			// 11.11.1821;
		{ 29011860, {"Чехов", "Антон", "Павлович"} },					// 29.01.1860;
		{ 15101814, {"Лермонтов", "Михаил", "Юрьевич"} },				// 15.10.1814;
		{ 9111818,  {"Тургенев", "Иван", "Сергеевич"} },				// 09.11.1818 -> 9111818;
		{ 15051891, {"Булгаков", "Михаил", "Афанасьевич"} },			// 15.05.1891;
		{ 28031868, {"Горький", "Максим", "Алексеевич"} },				// 28031868;
		{ 10121821, {"Некрасов", "Николай", "Алексеевич"} },			// 10.12.1821;
		{ 26091870, {"Куприн", "Александр", "Иванович"} },				// 26.09.1870;
		{ 22101870, { "Бунин", "Иван", "Алексеевич"} },					// 22.10.1870;
		{ 3101895,  {"Есенин", "Сергей", "Александрович"} },			// 03.10.1895 -> 3101895;
		{ 19071893, {"Маяковский", "Владимир", "Владимирович"} },		// 19.07.1893;
		{ 23061889, {"Ахматова", "Анна", "Андреевна"} },				// 23.06.1889;
		{ 8101892,  {"Цветаева", "Марина", "Ивановна"} },				// 08.10.1892 -> 8101892;
		{ 10021890, {"Пастернак", "Борис", "Леонидович"} },				// 10.02.1890;
		{ 22041899, {"Набоков", "Владимир", "Владимирович"} },			// 22.04.1899;
		{ 23041564, {"Шекспир", "Уильям", ""} },						// 23.04.1564 (без отчества);
		{ 7021812,  {"Диккенс", "Чарльз", ""} },						// 07.02.1812 -> 7021812 (без отчества);
		{ 26021802, {"Гюго", "Виктор", ""} },							// 26.02.1802 (без отчества);
		{ 22061898, {"Ремарк", "Эрих", "Мария"} }						// 22.06.1898;
	};
	
	// Передача по одной структуре массива структур:
	for (int count = 0; count < VOL; count++)
		print_card(list[count]);
	printf("\n\n");


	// Передача всей структуры в функцию:
	print_list(list, VOL);
*/




	// Задача 5:
/*	struct student grade_book[CSIZE] =
	{
		{ {"Пушкин", "Александр"} },
		{ {"Достоевский", "Фёдор"} },
		{ {"Чехов", "Антон"} },
		{ {"Лермонтов", "Михаил"} }
	};
	enter_grades(grade_book, CSIZE);


//	average_grades(&grade_book[0].grade, &grade_book[0].average);

	// Продвинутый вариант;
	calculate_averages(grade_book, CSIZE);

// Другой вариант создать в main() цикл и передавать по структуре в фунцкию (кода нет, это как идея);


	print_book(grade_book);
	print_grade(grade_book, CSIZE, SCORE);
*/



	// Задача 6:
/*	struct team player[TEAM] = {0};
	read_file(player, TEAM);				// Чтение и запись с файла с массив структур;
	calc_aver_player(player, TEAM);			// Подсчет среднего коэфициэнта полезного действия для каждого игрока;
	print_date_player(player, TEAM);		// Вывод на экран данных на каждого игрок;
	print_date_team(player, TEAM);			// Вывод на экран данные команды;
*/



	// Задание 7:
/*	struct book library[MAXBKS] = {0};
	int books;
	int index = 0;
	
	// Чтение реестра книг с файла:
	books = read(library, MAXBKS);			// Количество книг;
	while (index != 5)
	{
		index = choice_menu();
		switch (index)
		{
			case 1:
				show_library(library, books);
				break;
			case 2:
				books = add_book(library, MAXBKS);
				break;
			case 3:
				edit_book(library, books);
				break;
			case 4:
				delite_book(library, books);
				break;
			case 5:
				save_library(library, books);
				break;		
		}
	}
	puts("Сохранение файла завершено.");
*/



	// Задание 8:
/*	char choice = 0;
	struct AirCompany fly[SIZE] = { 0 };
	typedef void (*fly_function)(struct fly, int);
			

	while (1)
	{
		choice = choice_menu();
		switch (choice)
		{
			case 'a':
				free_place(fly, SIZE);
				break;
			case 'b':
				list_free_place(fly, SIZE);
				break;
			case 'c':
				booking_place(fly, SIZE);
				break;
			case 'd':
				booking(fly, SIZE);
				break;
			case 'e':
				booking_cancel(fly, SIZE);
				break;
			case 'f':
				exit_programm(fly, SIZE);
				puts("Программа успешно завершена.");
				exit(EXIT_SUCCESS);
		}
	}
*/	

	// Еще вариант: 
/*	char choice = 0;
	struct AirCompany fly[SIZE] = { 0 };
	typedef void (*Fly_Function)(struct AirCompany*, int);
	read(fly, SIZE);
	Fly_Function menu_function[6] = { free_place, list_free_place, booking_place, booking, booking_cancel, exit_programm };
	while (1)
	{
		choice = choice_menu();							// Получаем букву от 'a' до 'f';
		int index = choice - 'a';						// Переводим букву в индекс от 0 до 5;
		menu_function[index](fly, SIZE);				// Вызываем нужную функцию по индексу одной строкой!

	
		if (choice == 'f')								// Если была выбрана функция 'f' и она отработала без ошибок, значит exit_programm не сделала return, и можно закрывать программу;
		{
			puts("Программа успешно завершена.");
			exit(EXIT_SUCCESS);
		}
	}
*/




	// Задача 9:
/*	char choice = 0;
	int num_flyght;
	flyght flight =											// Создаем массив flight (на 4 рейса) типа flyght;			
	{
		{102, {0} },										// Номер рейса, номер места;
		{311, {0} },
		{444, {0} },
		{519, {0} }
	};
	typedef void (*Fly_Function)(struct AirCompany*, int);
	read(flight, PLANE);									// Считываем информацию по 4 рейсам;
	Fly_Function menu_function[5] = { free_place, list_free_place, booking_place, booking, booking_cancel };
	while (1)
	{
		num_flyght = choice_flight(flight, PLANE);
		if (num_flyght == -1)
		{
			puts("Программа успешно завершена.");		
			exit(EXIT_SUCCESS);
		}
		while (1)
		{
			choice = choice_menu(flight[num_flyght].flyght_id);			// Получаем букву от 'a' до 'f';
			if (choice == 'f')
			{
				puts("Возврат к выбору рейсов.\n");
				break;
			}		
			int index = choice - 'a';						// Переводим букву в индекс от 0 до 5. Согласно ASCII таблице, например, символ b, код его 97, а 96, получем выражение 97 - 96 = 1. Получаем индекс 1;
			menu_function[index](flight[num_flyght].airplane, SIZE);	// Вызываем нужную функцию по индексу одной строкой. flight[num_flyght].airplane - выбираем определенный самолет;		
		}	
		puts("Сохранение данных.");
		exit_flight(flight, PLANE);							// Автоматическое сохранение;	
	}
*/




	// Задача 10 (по примеру с задачей 9):
/*	struct library
	{
		int ID;
		...
	};
	struct library book [SIZE] = {0};
	typedef void(*Main_Function)(struct library*, int SIZE);					// С помощью модификатора typedef создаем указатель *Main_Function (псевдоним) на типовую функцию;
	Main_Function funct[5] = { menu_1, menu_2, menu_3, menu_4, menu_5 };		// К примеру массив функции funct содержит 5 функций;
	while (1)																	// Запускаем цикл;
	{
		funct[index](&book[num], SIZE);											// К примеру index равно 2, выберется функция menu_3. &book[num] - передача структуры под индексом num (к примеру 3);
		...																		// Какой-нибудь код;
		...	
		...
	}
*/



	// Задача 11:
/*	double source[SIZE];
	double target[SIZE];
	filling(source, SIZE);
	transform(source, target, SIZE, sin);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%7.4lf ", target[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}	
	printf("\n\n");
	transform(source, target, SIZE, sqrt);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%7.4lf ", target[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
	transform(source, target, SIZE, square);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%7.4lf ", target[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
	transform(source, target, SIZE, triple);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%7.4lf ", target[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n\n");
*/




	return 0;
}
