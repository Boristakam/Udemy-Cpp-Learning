//Grades 
#include <iostream>

using namespace std;

/* in C++ and else statement belonngs to the closest if statement (solution to dangling else statements - when you have more else that if statements) */
int main ()
{
    int score {0};
    cout << "\nenter your score (0-100): ";
    cin >> score;
    char letter_grade {};
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            letter_grade = 'A';
        }
        else if (score >= 80)
        {
            letter_grade = 'B';
        }
        else if (score >= 70)
        {
            letter_grade = 'C';
        }
        else
        {
            letter_grade = 'F';
        }

        cout << "your grade is " << letter_grade << endl;
        if (letter_grade == 'F')
        {
            cout << "sorry you have failed this class" << endl;
        }
        else 
        {
            cout << "congrats buddy" << endl;
        }
    }
    else
    {
        cout << "sorry " << score << " is an invalid score";
    }
    return 0;
}