/*
Name:Shaikh Zaid Muddaris Husain
Rollno:23dco06
AIM:Implementing Fork System Call
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("\n \t This is main process and child process creation using fork \n \t");

	fork();

	printf("\n \t This is Child process and child process creation using fork \n \t");

	return 0;
}

/*Output
aiktc@aiktc20:~/Desktop$ bash fork1.c
fork1.c: line 5: syntax error near unexpected token `('
fork1.c: line 5: `int main()'
aiktc@aiktc20:~/Desktop$ gcc fork1.c
aiktc@aiktc20:~/Desktop$ ./a.out

	 This is main process and child process creation using fork

	 This is Child process and child process creation using fork

	 This is Child process and child process creation using fork
	aiktc@aiktc20:~/Desktop$
*/
