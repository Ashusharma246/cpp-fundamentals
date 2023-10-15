#include <stdio.h>
#include <conio.h>

#define LEFT (i + 4) % 5
#define RIGHT (i + 1) % 5
#define THINKING 0
#define HUNGRY 1
#define EATING 2

int state[5];

// function to put down forks after eating
void put_forks(int);

// function to chekif the philospher is start eating
void test(int);
// function for a philophe behaviour
void take_forks(int);

void philospher(int i)
{
    if (state[i] == THINKING)
    {
        take_forks(i);
        if (state[i] == EATING)
            printf("\n Eating in progress....");
        put_forks(i);
    }
}
void put_forks(int i)
{
    state[i] = THINKING;
    printf("\nphilospher %d completed its work", i);
    test(LEFT);
    test(RIGHT);
}

// function to request forks to start eating
void take_forks(int i)
{
    state[i] = HUNGRY;
    test(i);
}
// function to test of a philos[her can start easting
void test(int i)
{
    if (state[i] == HUNGRY && state[i] != EATING && state[RIGHT] != EATING)
    {
        printf("\n philospher %d can eat", i);
        state[i] = EATING;
    }
}

int main()
{
    int i;
    // clrscr;
    for (i = 0; i < 5; i++)
    {
        state[i] = THINKING;

        printf("\n\t\t\tDining Philospher Problems");
        printf("\n\t\t.....");
        for (i = 0; i < 5; i++)
        {
            printf("\n\n The Philospher %d gets hungry\n", i);
            philospher(i);
        }
        getch();
    }
}
