#include <stdio.h>
int main()
{
    int p[20], f[20], min, minindex, n, i, j, c, f1[20], f2[20], f3[20],//16 variavel: 5 array[20],3 initialized by 0, rest is random 
        k = 0, h = 0, flag, t = 0, n1;

    printf("Enter the number of memory partitions:\n");
    scanf("%d", &n);

    printf("Enter the number of processes:\n");
    scanf("%d", &n1);
    
    for (i = 0; i < n; i++)
    {
        printf("Enter the memory partition size %d:", i + 1);
        scanf("%d", &f[i]);
        f2[i] = f[i];
        f3[i] = f[i];
    }
    for (i = 0; i < n1; i++)
    {
        printf("Enter the page size %d:", i + 1);
        scanf("%d", &p[i]);
    }
    do
    {
        printf("\n1. First Fit\n");
        printf("2. Best Fit\n");
        printf("3. Worst Fit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            for (i = 0; i < n1; i++)
            {
                for (j = 0; j < n; j++)
                {
                    f1[i] = 0;
                    if (p[i] <= f[j])
                    {
                        f1[i] = f[j];
                        f[j] = 0;
                        break;
                    }
                }
            }
            break;
        case 2:
            for (i = 0; i < n1; i++)
            {
                min = 9999;
                minindex = -1;
                for (j = 0; j < n; j++)
                {
                    if (p[i] <= f2[j] && f2[j] != 0 && min > f2[j])
                    {
                        min = f2[j];
                        minindex = j;
                    }
                }
                f1[i] = f[minindex];
                f2[minindex] = 0;
            }
            break;
        case 3:
            for (i = 0; i < n1; i++)
            {
                f1[i] = 0;
                for (j = 0; j < n; j++)
                {
                    if (p[i] <= f3[j])
                    {
                        k++;
                        if (k == 1)
                            f1[i] = f3[j];
                        if (f1[i] <= f3[j])
                        {
                            flag = 1;
                            f1[i] = f3[j];
                            h = j;
                        }
                    }
                }
                k = 0;
                if (flag == 1)
                    f3[h] = 0;
            }
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("\nInvalid choice. Please choose 1, 2, 3, or 4.\n");
        }
        if (c != 4)
        {
            printf("\n----------\n");
            printf("\n| Page | Frame | Free\n");
            printf("\n----------\n");
            t = 0;
            for (i = 0; i < n1; i++)
            {
                h = f1[i] - p[i];
                if (h < 0)
                    h = 0;
                printf("\n%d\t\t%d\t\t%d", p[i], f1[i], h);
                t = t + h;
            }
            printf("\n----------\n");
            printf("\nTotal free space in memory: %d\n", t);
        }
    } while (c != 4);
    return 0;
}
