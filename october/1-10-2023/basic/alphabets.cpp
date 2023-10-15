#include <iostream>
using namespace std;
void alphabet(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "alphabet";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "alphabet";
    }
    else
        cout << "error";
}
int main()
{
    char word;
    cin >> word;
    alphabet(word);
    return 0;
}