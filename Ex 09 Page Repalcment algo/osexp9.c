/*
                                                 Experiment No.: 9
Name: Shaikh Zaid Muddaris Husain
Roll no: 23dco06
batch:03
Aim : Implementation of Page Replacement Algorithm.


Algorithm:


    1. Start the process

    2. Declare the size with respect to page length

    3. Check the need of replacement from the page to memory

    4. Check the need of replacement from old page to new page in memory

    5. Forma queue to hold all pages

    6. Insert the page require memory into the queue

    7. Check for bad replacement and page fault

    8. Get the number of processes to be inserted

    9. Display the values

    10. Stop the process

*/

// Program:
#include <stdio.h>
int main()
{
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;
    printf("\nEnter the number of pages:: ");
    scanf("%d", &n);
    printf("\nEnter the page number::\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the number of frames:: ");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
        frame[i] = -1;
    j = 0;
    printf("\n\nRef String\t\tPage Frames\n\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t", a[i]);
        avail = 0;
        for (k = 0; k < no; k++)
            if (frame[k] == a[i])
                avail = 1;
        if (avail == 0)
        {
            frame[j] = a[i];
            j = (j + 1) % no;
            count++;
            for (k = 0; k < no; k++)
                printf("%d\t", frame[k]);
        }
        printf("\n");
    }
    printf("\nPage Fault Is %d\n", count);
    return 0;
}

/*

Output:

Shaikh Zaid@LAPTOP-TJNC6RNL MINGW64 ~/Documents/2nd Year Engineering/Operating System/Practicals
$ ./exp9

Enter the number of pages:: 5

Enter the page number::
20
40
80
100
120

Enter the number of frames:: 5


Ref String              Page Frames

20              20      -1      -1      -1      -1
40              20      40      -1      -1      -1
80              20      40      80      -1      -1
100             20      40      80      100     -1
120             20      40      80      100     120

Page Fault Is 5

Conclusion : Thus, we have successfully demonstrated the concept of page replacement policies for handling page faults eg: FIFO, LRU etc.
*/
