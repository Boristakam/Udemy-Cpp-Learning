// while loops are an example of control flow statements. others are switch statements,
// for loops etc..

#include <iostream>
#include <vector>
#include <iomanip> // used to manipulate decimal places with the keyword/function setprecision()
using namespace std;

int main ()
{
    // cout << "count down machine" << endl;
    // int num1 {0};
    // cout << "\nenter a number to count down from: ";
    // cin >> num;
    // while (num > 0)// expression evaluates to a boolean value
    // {
    //     cout << num << endl;
    //     num--;
    // }


    // cout << "count up machine" << endl;
    // int num2 {0};
    // int i {0};
    // cout << "\nenter a number to count up to: ";
    // cin >> num2;
    // while (i <= num2)
    // {
    //     cout << i << endl;
    //     i++;
    // }


    // cout << "input validation" << endl;
    // int num3 {0};
    // cout << "\nenter a number less than 100: ";
    // cin >> num3;
    // while (!(num3 < 100))
    // {
    //     cout << "invalid. enter another number " << endl;
    //     cin >> num3;
    // }
    // cout << "thanks"<< endl;


    cout << "requesting interger between a range:";
    bool done {false}; // initialised to false so we can get into the loop 
    int num4 {0};

    while (!done) 
    {
        cout << "\nenter a number between 1 and 5: ";
        cin >> num4;
        if (num4 <= 1 || num4 >= 5)
        {
            cout << "invalid number try again" << endl;
        }
        else
        {
            cout <<  "thanks" << endl;
            done = true;
        }
    }



    cout << endl;
    return 0;
}