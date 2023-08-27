#include <iostream>
using namespace std;

int main()
{
    int number_of_students;
    cin >> number_of_students;

    int arr[number_of_students][5];

    for (int i = 0; i < number_of_students; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int score[number_of_students];
    for (int i = 0; i < number_of_students; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "score of student " << i + 1 << " is " << sum / 5 << endl;
        F
            score[i] = sum / 5;
        cout << score[i] << endl;
    }

    int max = score[0];
    int min = score[0];
    int winner = 0;
    int loser = 0;
    for (int i = 0; i <= number_of_students; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            winner = i;
        }
        if (score[i] < min)
        {
            min = score[i];
            loser = i;
        }
    }
    cout << "winner is student " << winner + 1 << endl;
    cout << "loser is student " << loser << endl;

    return 0;
}
