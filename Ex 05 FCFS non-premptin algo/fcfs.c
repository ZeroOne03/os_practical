/*
Name:shaikh zaid Muddaris Husain
Rollno:23dco06
AIM:Implementing FCFS Algo
*/
#include <stdio.h>

int main()

{
    int n, bt[30], wait_t[30], turn_ar_t[30], av_wt_t = 0, avturn_ar_t = 0, i, j;
    printf("Please enter the total number of processes(maximum 30):"); // the maximum process that be used to calculate is specified.
    scanf("%d", &n);

    printf("\nEnter The Process Burst Time");
    for (i = 0; i < n; i++) // burst time for every process will be taken as input
    {
        printf("P[%d]:", i + 1);
        scanf("%d", &bt[i]);
    }

    wait_t[0] = 0;

    for (i = 1; i < n; i++)
    {
        wait_t[i] = 0;
        for (j = 0; j < i; j++)
            wait_t[i] += bt[j];
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

    for (i = 0; i < n; i++)
    {
        turn_ar_t[i] = bt[i] + wait_t[i];
        av_wt_t += wait_t[i];
        avturn_ar_t += turn_ar_t[i];
        printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t\t%d", i + 1, bt[i], wait_t[i], turn_ar_t[i]);
    }

    av_wt_t /= i;
    avturn_ar_t /= i; // average calculation is done here
    printf("\nAverage Waiting Time:%d", av_wt_t);
    printf("\nAverage Turnaround Time:%d", avturn_ar_t);

    return 0;
}

/*OUTPUT
aiktc@aiktc20:~/Desktop$ gcc fcfs.c
aiktc@aiktc20:~/Desktop$ ./a.out
Please enter the total number of processes(maximum 30):5

Enter The Process Burst TimeP[1]:10
P[2]:4
P[3]:7
P[4]:2
P[5]:9

Process		Burst Time	Waiting Time	Turnaround Time
P[1]		10			0				10
P[2]		4			10				14
P[3]		7			14				21
P[4]		2			21				23
P[5]		9			23				32
Average Waiting Time:13
*/
