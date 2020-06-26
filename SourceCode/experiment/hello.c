#include <stdio.h>

void branch()
{
	printf("Testing at remote");
}

void hello()
{
	printf("Hello World");
}

void doSomethingAtRemote(int k)
{
	printf("Changes at Remote");
}

int main()
{
	hello();
}

