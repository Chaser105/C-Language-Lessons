// Задание 1:
/*
#pragma once
int convert_deci(char* two_bit);
*/

// Задание 2:
/*
#pragma once
#define SIZE	64
char* s_gets(char* mass, int size);
int  bin_to_int(char* two_bit);
void print_bits(const char* label, int value, int len);
*/

// Задание 3:
/*
#pragma once
int on_bit(int vol);
*/

// Задание 4:
/*
#pragma once
int find_bit(int n, int p);
*/

// Задание 5:
/*
#pragma once
#define SIZE	256
int shift_bit(int n, int sh);
*/

// Задание 6:
/*
#pragma once
// Выравнивание
#define ALG_LFT		0
#define ALG_CNT		1
#define ALG_RGT		2
// Количество опций (функций):
#define SIZE		6

struct props
{
	unsigned int ID_font	 : 8;
	unsigned int size_font	 : 7;
	unsigned int aligment	 : 2;
	unsigned int bold		 : 1;
	unsigned int italic		 : 1;
	unsigned int underlining : 1;
};

typedef void (*Func_opt)(struct props* opt);

int show_menu(void);
void clear_buf(void);
void universal_input_f(struct props* str_opt, int mode, unsigned int max_val);
void ID_f(struct props* str_opt);
void size_f(struct props* str_opt);
void algmt_f(struct props* str_opt);
void bold_f(struct props* str_opt);
void itlc_f(struct props* str_opt);
void under_f(struct props* str_opt);
*/

// Задание 7:
/*
#pragma once
#define SIZE		6
// Выравнивание
#define ALG_LFT		0
#define ALG_CNT		1
#define ALG_RGT		2
// Количество опций (функций):
#define ID			0
#define S_FNT		8
#define ALGT		15
#define BLD			17
#define ITLC		18
#define UNDR		19
// Маски настроек:
#define	M_ID		0xFF
#define	M_SFNT		0x7F
#define	M_ALGT		0x03
#define	OFF_ON		0x01

typedef void (*Func_opt)(unsigned long* vol);

int show_menu(void);
void clear_buf(void);
void universal_input_f(unsigned long* num, int mode, unsigned int max_val);
void ID_f(unsigned long* num);
void size_f(unsigned long* num);
void algmt_f(unsigned long* num);
void bold_f(unsigned long* num);
void itlc_f(unsigned long* num);
void under_f(unsigned long* num);
*/