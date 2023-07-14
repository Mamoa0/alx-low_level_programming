#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0
**/
int main(){
char lowercase;
char uppercase;
for(lowercase="a"; lowercase <="z"; lowercase++){
putchart(lowercase);
}
putchar("\n");
for(uppercase="A"; uppercase<="Z"; uppercase++){
	putchar(uppercase);
}
putchar("\n");
return 0;
}
