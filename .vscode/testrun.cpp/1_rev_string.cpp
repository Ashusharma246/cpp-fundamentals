// 7. Write a program that takes a string as input and prints the string in reverse order.
#include <iostream>
using namespace std;
int main()
{
    string sentence = " ";
    cin >> sentence;
    int sentenceLength = sentence.length();
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        cout << sentence[i];
    }

    return 0;
}