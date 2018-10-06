#include <stdio.h>

/*
В круглых скобках функции указываются передаваемые аргументы для данной функции.

*/

unsigned short sum (char a, char b)
/* a и b - аргументы - параметры, которые влияют на ход выполнения данной функции.
*/
{
	return a + b;
}

short sub (char c, char d)
{
	
	return c - d;
}

void main (void)
{
	char a1 = 25;
	char a2 = 12;

	printf("\r\n");
	printf("Summ: \r\n");
	printf("%i\r\n", sum(2, 3));
	printf("%i\r\n", sum(5, 6));
	printf("%i\r\n", sum(8, 9));

	printf("\r\nSubstract: \r\n");
	printf("%i\r\n", sub(5, 2));
	printf("%i\r\n", sub(8, 7));
	
	printf("%i\r\n", sub(a1, a2)); 
	// в качестве аргументов передаем в функцию sub значения 
	// ранее задекларированных переменных. 
	return;
}