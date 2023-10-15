#include <stdio.h>
#include <conio.h>

#define LEFT (i + 4) % 5
#define RIGHT (i + 1) % 5
#define THINKING 0
#define HUNGRY 1
#define EATING 2

int state[5]; // An array to represent the state of each philosopher (thinking, hungry, eating)

// Function to put down forks after eating
void put_forks(int);

// Function to check if a philosopher can start eating
void test(int);

// Function for a philosopher's behavior
void take_forks(int);
void philosopher(int i)
{
    if (state[i] == THINKING)
    {
        take_forks(i);
        if (state[i] == EATING)
            printf("\n Eating in process....");
        put_forks(i);
    }
}

// Function to release forks after eating
void put_forks(int i)
{
    state[i] = THINKING; // The philosopher has finished eating and is now thinking
    printf("\n Philosopher %d completed its work", i);
    test(LEFT);  // Check if the left neighbor can start eating
    test(RIGHT); // Check if the right neighbor can start eating
}

// Function to request forks to start eating
void take_forks(int i)
{
    state[i] = HUNGRY; // The philosopher is hungry and trying to take forks
    test(i);           // Check if the philosopher can start eating
}

// Function to test if a philosopher can start eating
void test(int i)
{
    if (state[i] == HUNGRY && state[LEFT] != EATING && state[RIGHT] != EATING)
    {
        printf("\n Philosopher %d can eat", i);
        state[i] = EATING; // The philosopher can start eating
    }
}

int main()
{
    int i;
    // clrscr();

    for (i = 0; i < 5; i++)
        state[i] = THINKING; // Initialize all philosophers as thinking

    printf("\n\t\t\t Dining Philosopher Problem");
    printf("\n\t\t...........");

    for (i = 0; i < 5; i++)
    {
        printf("\n\n The philosopher %d gets hungry\n", i);
        philosopher(i); // Simulate the philosopher's behavior
    }

    getch();
}
