#include<stdio.h>
#include<stdlib.h>
/**
* main - Prints lowercase letters from a to z
*
* Description:This program uses a loop to iterate through the uppercase letters
* from 'A' to 'Z' and prints them to the console. Each letter is output
* using the putchar function. The program then prints a newline character
* to move to the next line after printing all the letters.
*
* Return: 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
