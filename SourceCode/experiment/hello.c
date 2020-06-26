#include <stdio.h>

void branch()
{
	printf("Hello from local side");
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

