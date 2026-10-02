// Задание 1:
/*
#ifndef FUNCTION_H_   // Защита от повторного включения (Include Guard);
#define FUNCTION_H_

// Макросы-константы:
#define MY_PI 3.141592653589793
#define DEG_TO_RAD(deg) ((deg) * MY_PI / 180.0)

// Прототипы функций:
int get_max(int a, int b);
int get_min(int a, int b);
double power(double base, int exp);


// Константы для ограничения размеров строк:
#define MAX_LINE_LEN 256

// Прототипы функций:
void clear_input_buffer(void);         // Очищает буфер (чтобы scanf_s не сбоил)'
void print_centered(const char* str);  // Выводит текст по центру экрана;
int count_vowels(const char* str);     // Считает количество гласных в строке;


// Объявление структуры данных:
struct Student 
{
    char name[50];
    int id;
    double average_grade;
};

// Прототипы функций для работы со структурой:
void show_student(struct Student s);
struct Student create_student(const char* name, int id, double grade);

#endif // FUNCTION_H_
*/


// Задание 2:
/*
#define AVRG_GRM(X,Y) ((2.0 * (X) * (Y)) / ((X) + (Y)))
*/

// Задание 3:
/*
#define DEGREE_TO_RAD ((4.0 * atan(1)) / 180.0) 

typedef struct pol
{
    double pol_vector;      // Расстояние до точки;
    double pol_degree;      // Угол от оси Х;
} Polar;

typedef struct rect
{
    double rect_x;      
    double rect_y;
} Rect;

void change(const Polar* str_p, Rect* str_r);
*/


// Задание 4:
/*
void delay(double time);
*/


// Задание 5:
/*
#define SIZE 100
void fillarray(int* mass, int size);
void show_array(const int* mass, int size);
void random(int* mass, int size, int sam);
*/


// Задание 6:

