/*Exp No: 3  Aim : Implementing basic commands of linux like mv using kernel APIs*/

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    int i, fd1, fd2;
    char *file1, *file2, buf[2];
    file1 = argv[1];
    file2 = argv[2];
    printf("file1=%s file2=%s", file1, file2);
    fd1 = open(file1, O_RDONLY, 0777);
    fd2 = creat(file2, 0777);
    while (i = read(fd1, buf, 1) > 0)
        write(fd2, buf, 1);
    remove(file1);
    close(fd1);
    close(fd2);
}

/*Output:
aiktc@aiktc20:~$ cd Desktop
aiktc@aiktc20:~/Downloads$ cd 23dco06
aiktc@aiktc20:~/Downloads/23dco06$ gcc mv.c -o mv
aiktc@aiktc20:~/Desktop/23dco06$ ./move os Input
file1=Input file2=Output@aiktc20:~/Desktop/23dco06$
*/
