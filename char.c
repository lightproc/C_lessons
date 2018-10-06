#include <stdio.h>

char getNumber3 (void)
{
	return 127;
}

unsigned char getPositiveNumber (void)
{
	return 127;
}

	// char имеет две модификации: 
	// signed char - используем знак (и + и -)
	// unsigned char - не используется знак, только положительные числа
	// по умолчанию char - signed
	// диапазон для unsigned char - 0 ... 255.
	// диапазон для signed char - -128 ... 127.

	// char - используем для представления символов
	// signed char и unsigned char - для чисел


void main (void)
{
	printf("%d", getNumber3());
	return;
}
