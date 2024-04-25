/*
                                                Experiment No : 10
Name: Shaikh Zaid Muddaris Husain
Roll no: 23dco06
batch:03
Aim : Write a program in C to do disk scheduling - FCFS, SCAN, C-SCAN
*/

// Program:
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, req[50], mov = 0, cp;
    printf("\nEnter the current position:: ");
    scanf("%d", &cp);
    printf("\nEnter the number of requests:: ");
    scanf("%d", &n);
    printf("\nEnter the request order::\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }
    mov = mov + abs(cp - req[0]); // abs is used to calculate the absolute value
    printf("\n%d -> %d", cp, req[0]);
    for (i = 1; i < n; i++)
    {
        mov = mov + abs(req[i] - req[i - 1]);
        printf(" -> %d", req[i]);
    }
    printf("\n");
    printf("\nTotal head movement = %d\n", mov);
}

/*

Output:

Enter the current position:: 3

Enter the number of requests:: 5

Enter the request order::
4
2
5
1
6

3 -> 4 -> 2 -> 5 -> 1 -> 6

Total head movement = 15

Conclusion : Thus, we have successfully implemented FCFS, SCAN, C-SCAN.

*/
