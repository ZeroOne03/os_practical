/*
Name:Shaikh Zaid Muddaris Husain
Rollno:23dco06
AIM:Implementing Fork System Call
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
   // fork() Create a child process

   int pid;
   pid = fork();

   if (pid > 0)
   {
      printf("\n Before fork");
      printf("\n The Parent Process ID is :- %d", getppid());
      printf("\nParent Process exexuted successfully \n");
   }
   else if (pid == 0)
   {
      printf("\n After fork");
      printf("\n The New Child Process Created by fork system call %d \n", getpid());
   }
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
