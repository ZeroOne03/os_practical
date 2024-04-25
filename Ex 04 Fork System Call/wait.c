/*
Name:Shaikh Zaid Muddaris Husain
Rollno:23dco06
AIM:Implementing Fork System Call
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
   // fork() Create a child process

   int pid;
   pid = fork();

   if (pid > 0)
   {
      wait(NULL);
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
aiktc@aiktc20:~/Desktop$ gcc wait.c
aiktc@aiktc20:~/Desktop$ ./a.out

 After fork
 The New Child Process Created by fork system call 9087

 Before fork
 The Parent Process ID is :- 8629
Parent Process exexuted successfully
*/
