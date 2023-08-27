//. You are given a string convert all the letters to uppercase.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string sentence;
    cin >> sentence;
    string arr[sentence.size()];

    for (int i = 0; i < sentence.size(); i++)
    {
        sentence[i] = toupper(sentence[i]);
    }
    cout << sentence << endl;
    return 0;
}