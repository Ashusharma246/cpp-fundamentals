#include <stdio.h>
#include <conio.h>
#include <process.h>

int main()
{
    typedef int semaphore;           // Define a semaphore type (typically used for synchronization)
    semaphore sread = 0, swrite = 0; // Initialize semaphores for reading and writing to 0 (not locked)
    int ch, r = 0;                   // Initialize choice and reader count
    // clrscr();                        // Clear the console screen
    printf("\nReader writer"); // Display program title

    do
    {
        printf("\nMenu"); // Display menu options
        printf("\n\t 1. Read from file");//reader want to read--->allow reader to read-->increment the count-->display reader action. else--->not possible
        printf("\n \t2. Write to file");`
        printf("\n \t 3. Exit the reader");
        printf("\n \t 4. Exit the writer");
        printf("\n \t 5. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch); // Read user's choice

        switch (ch)
        {
        case 1:              // Reader wants to read
            if (swrite == 0) // If no writer is writing
            {
                sread = 1;                      // Allow the reader to read
                r += 1;                         // Increment the reader count
                printf("\nReader %d reads", r); // Display reader's action
            }
            else
            {
                printf("\n Not possible"); // Display error message if writing is in progress
            }
            break;

        case 2:                            // Writer wants to write
            if (sread == 0 && swrite == 0) // If no reader and writer are active
            {
                swrite = 1;                     // Allow the writer to write
                printf("\nWriter in Progress"); // Display writer's action
            }
            else if (swrite == 1) // If a writer is already writing
            {
                printf("\nWriter writes the file"); // Display writer's action
            }
            else if (sread == 1) // If a reader is reading
            {
                printf("\nCannot write while reader reads the file"); // Display error message
            }
            else
                printf("\nCannot write file"); // Display error message
            break;

        case 3:         // Reader exits
            if (r != 0) // If there are active readers
            {
                printf("\n The reader %d closes the file", r); // Display reader's action
                r -= 1;                                        // Decrement the reader count
            }
            else if (r == 0) // If no readers are active
            {
                printf("\n Currently, no readers access the file"); // Display message
                sread = 0;                                          // Reset the reader semaphore
            }
            else if (r == 1) // If only one reader is active
            {
                printf("\nOnly 1 reader reading the file"); // Display message
            }
            else
                printf("%d readers are reading the file\n", r); // Display number of active readers
            break;

        case 4:              // Writer exits
            if (swrite == 1) // If a writer is writing
            {
                printf("\nWriter closes the file"); // Display writer's action
                swrite = 0;                         // Reset the writer semaphore
            }
            else
                printf("\nThere is no writer in the file"); // Display message
            break;

        case 5:      // Exit the program
            exit(0); // Terminate the program
        }
    } while (ch < 6); // Continue the loop until the user chooses to exit

    getch(); // Wait for a key press before exiting
    return 0;
}
