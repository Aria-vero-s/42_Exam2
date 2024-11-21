#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int pgcd (int a, int b)
{
	if(a == 0)
		return(b);
	if(b == 0)
		return(a);
	return pgcd(b, a % b);
}

int main(int ac, char **av)
{
	if(ac != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
}
