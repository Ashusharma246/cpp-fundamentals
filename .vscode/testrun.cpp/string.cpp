// 6. Write a program that takes a string as input and prints the length of the string.
#include <iostream>
using namespace std;
int main()
{
    string sentence = "";
    cin >> sentence;
    int sentenceLength = sentence.length();
    cout << sentenceLength << endl;

    return 0;
}