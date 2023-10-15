#include <iostream>
#include <utility>
using namespace std; // Include the <utility> header for std::pair

int main()
{
    // Create a pair to store a name (string) and an age (int)
    pair<string, int> person;

    // Assign values to the pair
    person.first = "John"; // The name
    person.second = 30;    // The age

    // Access and print the values
    cout << "Name: " << person.first << endl;
    cout << "Age: " << person.second << endl;

    return 0;
}
