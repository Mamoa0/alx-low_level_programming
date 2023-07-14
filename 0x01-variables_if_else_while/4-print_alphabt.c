#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 * Return: 0
 **/
int main()
{
  char i; 
  for(i="a"; i<="z"; i++){
    if(i != "q" || i !="e"){
      putchar(i);
    }
  }
  putchar("\n");
  return 0;
}
