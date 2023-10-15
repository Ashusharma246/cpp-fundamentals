#include <stdio.h>
#include <conio.h>

int main()
{
    int nop, wt[10], twt, tat[10], ttat, i, j, bt[10], t;
    float awt, atat;
    // clrscr(); // Clear the console screen

    awt = 0.0;
    atat = 0.0;

    printf("Enter the no. of processes:");
    scanf("%d", &nop); // Read the number of processes from the user

    for (i = 0; i < nop; i++)
    {
        printf("Enter the burst time for process %d: ", i);
        scanf("%d", &bt[i]); // Read burst times for each process
    }

    wt[0] = 0;
    tat[0] = bt[0];
    twt = wt[0];
    ttat = tat[0];

    for (i = 1; i < nop; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1]; // Calculate waiting time for each process
        tat[i] = wt[i] + bt[i];        // Calculate turnaround time for each process
        twt += wt[i];                  // Update total waiting time
        ttat += tat[i];                // Update total turnaround time
    }

    awt = (float)twt / nop;   // Calculate average waiting time
    atat = (float)ttat / nop; // Calculate average turnaround time

    printf("\nProcessid\tBurstTime\tWaitingTime\tTurnaroundTime\n");

    for (i = 0; i < nop; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], wt[i], tat[i]); // Print process details
    }

    printf("\nTotal Waiting Time:%d\n", twt);       // Print total waiting time
    printf("\nTotal Turnaround Time:%d\n", ttat);   // Print total turnaround time
    printf("\nAverage Waiting Time:%f\n", awt);     // Print average waiting time
    printf("\nAverage Turnaround Time:%f\n", atat); // Print average turnaround time

    getch(); // Wait for a key press before exiting
    return 0;
}
