#include <iostream>
#include <vector>
using namespace std;

// the semicolon is required between expressions but the expressions are optional. for loop with no expressions is an endless loop -> for (;;)
// for (initialisation; condition; increment)
//      statement;
int main ()
{
    for (int i {0}; i < 5; i++)
    {
        cout << i << endl;
    }
    cout << endl;

    for (int i {0}; i < 5; i += 2) //we dont have to increment i by 1 each time 
    {
        cout << i << endl;
    }
    cout << endl;

    for (int i {10}; i > 0; i--)
    {
        cout << i << endl;
    }
    cout << endl;


    cout << "counting from 10 t0 100 by 10:" << endl;
    for (int i {10}; i <= 100; i += 10)
    {
        if (i % 15 == 0)
        {
            cout << i << endl;
        }
    }
    cout << endl;


    cout << "adding 2 incrementing variables:" << endl;
    for (int i {1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }
    cout << endl;


    cout << "output a new line after every 10th i:" << endl;
    for (int i {1}; i <= 100; i++)
    {
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else 
            cout << " ";

    }
    cout << endl;


    cout << "output a new line after every 10th i using conditional operator:" << endl;
    for (int i {1}; i <= 100; i++)
    {
        cout << i << ((i % 10 == 0) ? "\n" : " ");

    }
    cout << endl;


    cout << "using a vector:" << endl;
    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned int i {0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    cout << endl;
    return 0;
}