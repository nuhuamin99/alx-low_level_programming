/*
 #include <stdio.h>

int main(void)
{

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\0";

	int i = 0;
	char ch = str[i];
	char end = '\0';

	while (ch != end)
	{
		putchar(ch);
		i++;
		ch = str[i];
	}

	return (0);

}
*/

#include <stdio.h>
#include <unistd.h>
/**
* main - main function in the task
*
*
*Return: return 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
