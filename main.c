#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*command[])(int,int)={plus,minus,multiply,divided};

int main()
{
	int a, c,ch;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF
	if (b == '+')
		ch=0;
	else if (b == '-')
		ch=1;
	else if (b == '*')
		ch=2;
	else if (b == '/')
		ch=3;

	printf("%d %c %d =%d\n",a,b,c,command[ch](a,c));
}
