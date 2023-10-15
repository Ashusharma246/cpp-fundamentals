#include <stdio.h>
#include <conio.h>

int main()
{
    int nop, t, wt[10], twt, tat[10], ttat, i, j, p[10], b[10], tmp;
    float awt, atat;
    // clrscr(); // Clear the console screen

    awt = 0.0;
    atat = 0.0;

    printf("Enter the number of processes:");
    scanf("%d", &nop); // Read the number of processes from the user

    for (i = 0; i < nop; i++)
    {
        printf("Enter the burst time of Process %d:", i);
        scanf("%d", &b[i]); // Read burst times for each process
    }

    for (i = 0; i < nop; i++)
    {
        printf("Enter the priority number of Process %d:", i);
        scanf("%d", &p[i]); // Read priority for each process
    }

    // Sorting processes by priority using a bubble sort
    for (i = 0; i < nop; i++)
    {
        for (j = i + 1; j < nop; j++)
        {
            if (p[i] > p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }

    wt[0] = 0;
    tat[0] = b[0];
    twt = wt[0];
    ttat = tat[0];

    for (i = 1; i < nop; i++)
    {
        wt[i] = wt[i - 1] + b[i - 1]; // Calculate waiting time for each process
        tat[i] = wt[i] + b[i];        // Calculate turnaround time for each process
        twt += wt[i];                 // Update total waiting time
        ttat += tat[i];               // Update total turnaround time
    }

    awt = (float)twt / nop;   // Calculate average waiting time
    atat = (float)ttat / nop; // Calculate average turnaround time

    printf("Process No:\tPriority:\tBurst Time:\tWaiting Time\tTurnaround Time:\n");

    for (i = 0; i < nop; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, p[i], b[i], wt[i], tat[i]); // Print process details
    }

    printf("Total Turnaround Time:%d\n", ttat);   // Print total turnaround time
    printf("Total Waiting Time:%d\n", twt);       // Print total waiting time
    printf("Average Waiting Time:%f\n", awt);     // Print average waiting time
    printf("Average Turnaround Time:%f\n", atat); // Print average turnaround time

    getch(); // Wait for a key press before exiting
}