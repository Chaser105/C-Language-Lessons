// Задание 1:
/*
#pragma once
#define VOL	12
#define LEN	20
struct month
{
	char name_month[LEN];
	char abrr[4];
	int day;
	int number;
};
int calculate(int i, const struct month arr[]);
*/


// Задание 2:
/*
#pragma once
#define LEN		10
#define SIZE	12
struct calendar
{
	int day;
	char month[LEN];
	int year;
};
struct month						// Струкутра справочник:
{
	char name[LEN];
	char abbrev[4];
	int days;
	int month_no;
};
struct calendar enter_data(struct calendar data);
void ToLower(struct calendar* name_struct);
int sum_day(const struct calendar* name_struct_1, struct month* name_struct_2, int count);
*/




// Задание 3:
/*
#pragma once
#define MAXTITL	40								
#define MAXAUTL	40							
#define MAXBKS	100								
struct book
{
	char title[MAXTITL];						
	char author[MAXAUTL];						
	float value;								
};
int enter_book(struct book* name_library);
void print_library(const struct book* name_library, int n);
*/




// Задание 4:
/*
#pragma once
#define LEN	50
#define VOL	20
struct num_card
{
	int number;
	struct 
	{
		char surname[LEN];
		char name[LEN];	
		char patronymic[LEN];
	};
};
void print_card(struct num_card author);
void print_list(struct num_card* scroll, int size);
*/




// Задача 5:
/*
#pragma once
#define LEN	30
#define SCORE	3 
#define CSIZE	4
struct name
{
	char surname[LEN];
	char name[LEN];
};
struct student
{
	struct name fio;
	float grade[SCORE];
	float average;
};
void enter_grades(struct student* str_book, int size);
// void average_grades(float* str_grades, float* str_avr);
void calculate_averages(struct student* str_book, int size);

void print_book(struct student* str_book);
void print_grade(struct student* str_book, int size, int size_score);
*/




// Задача 6:
/*
#pragma once
#define LEN		30
#define TEAM	20
struct name
{
	char surname[LEN];
	char name[LEN];
};

struct team
{
	struct name fio;
	int pas_in;
	int kick;
	int passage;
	int run_succes;
	float average;
	int is_active;
};
void read_file(struct team* str_date, int size);
void calc_aver_player(struct team* str_date, int size);
void print_date_player(struct team* str_date, int size);
void print_date_team(struct team* str_date, int size);
*/



// Задание 7:
/*
#pragma once
#define MAXBKS	20
#define MAXTITL 50
#define MAXAUTL	30
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
	int flag;						// Флаг 0 - книга записана, флаг 1 - книга отсутствует;
};
int read(struct book* str_library, int size);
int choice_menu(void);
void show_library(struct book* str_library, int size_books);
int add_book(struct book* str_library, int size);
void edit_book(struct book* str_library, int size_books);
void delite_book(struct book* str_library, int size_books);
void save_library(struct book* str_library, int size_books);
*/



// Задание 8:
/*
#pragma once
#define SIZE	12
#define FIO		30
struct AirCompany
{
	int ID;
	int flag_book;
	char surname[FIO];
	char name[FIO];
};
void read(struct AirCompany* str_fly, int size_place);
char choice_menu(void);
void free_place(struct AirCompany* str_fly, int size_place);
void list_free_place(struct AirCompany* str_fly, int size_place);
void booking_place(struct AirCompany* str_fly, int size_place);
void booking(struct AirCompany* str_fly, int size_place);
void booking_cancel(struct AirCompany* str_fly, int size_place);
void exit_programm(struct AirCompany* str_fly, int size_place);
*/




// Задача 9:
/*
#pragma once
#define SIZE	12
#define FIO		30
#define PLANE	4
struct AirCompany												// Структура типа AirCompany, которая содержит 4 поля;
{
	int ID;
	int flag_book;
	char surname[FIO];
	char name[FIO];
	int flag_confirm;
};
typedef struct AirCompany fly[SIZE];							// Создаем псевдоним fly на тип структуры AirCompany из 12 мест самолета;
struct Flyght_Schedule											// Структура типа Flyght_Schedule, которая содержит 2 поля;
{
	int flyght_id;												// Номер рейса;
	fly airplane;												// Псевдоним fly сообщает компилятору, что переменная airplane типа структуры AirCompany, которая содержит 12 мест. В свою очередь переменная airplane содержит все 4 поля структуры AirCompany;
};
typedef struct Flyght_Schedule flyght[PLANE];					// Создаем псевдоним flyght (массив на 4 рейса) на тип структуры Flyght_Schedule из 4 рейсов, т.е. каждый рейс содержит информацию: номер рейса, сколько мест это рейса;

void read(flyght str_fly, int planes);
int choice_flight(flyght flight_array, int plane);
char choice_menu(int flight_id);

void free_place(struct AirCompany* str_fly, int size_place);
void list_free_place(struct AirCompany* str_fly, int size_place);
void booking_place(struct AirCompany* str_fly, int size_place);
void booking(struct AirCompany* str_fly, int size_place);
void booking_cancel(struct AirCompany* str_fly, int size_place);
void exit_flight(flyght str_fly, int planes);
*/




// Задача 11:
/*
#pragma once
#define SIZE 100
typedef double (*Funct_Math)(double);												// Создание типового указателя на функцию, которая принимает и возвращает тип double;
void transform(const double* source, double* target, int size, Funct_Math func);	// Создание функции, которая принимает 4 аргумента, 4 аргумент Funct_Math - псевдоним, который может принимать функцию конструктивом как double square(double x).
																					// При вызове функции transform(), подставляется функция, например square();
void filling(double* mass_source, int size);
double square(double x);
double triple(double x);
*/


