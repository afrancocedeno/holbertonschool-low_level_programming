#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int d);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
void print_delimiter(int);

/**
 * print_delimiter - delimiter funciton for "," and " " (space).
 *
 * @n: input variable with number of spaces.
 */
void print_delimiter(int n)
{
	int i = 0;

	_putchar(44);
	for (; i < n; i++)
		_putchar(32);
}

#endif
