/* this program allows the user to select an option from a menu/list to perform an action */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main ()
{
    //displaying the menu
    cout << "\nList of actions: " << endl;
    cout << "P - Print numbers" << endl; 
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    

    char letter{};
    vector <int> numbers;
    int new_number {0}; 
    int sum {0};

    do
    {
        //getting user input
        cout << "\nChose an action and press the enter key: ";
        cin >> letter;

        //performing operations based on user choice
        switch (letter)
        {
        case 'P':
        case 'p':
            cout << "List of number [ ";
            for (auto num: numbers)
            {
                sum += num;
                cout << num << " ";
            }
            cout << "]" << endl;
            if (numbers.size() == 0)
                cout << "The list is empty!" << endl;
            break;

        case 'A':
        case 'a':
            cout << "Enter a new number: ";
            cin >> new_number;
            cout << new_number << " added!" << endl;
            numbers.push_back(new_number);
            break;
        
        case 'M':
        case 'm':
            if (numbers.size() == 0)
            {
                cout << "Unable to calculate the average - list empty!" << endl;
            }
            else
            {
                double avg = sum / numbers.size();
                cout << "The average of all numbers is: " << avg << endl;
            }
            break;

        case 'S':
        case 's':
            if (numbers.size() == 0)
            {
                cout << "Unable to determine smallest number - list empty!" << endl;
            }
            else 
            {
                int min_number = numbers.at(0);
                for (auto num: numbers)
                    if (num < min_number)
                        min_number = num;
                cout << "The smallest number is: " << min_number << endl;
            }
            break;

        case 'L':
        case 'l':
            if (numbers.size() == 0)
            {
                cout << "Unable to determine Largest number - list empty!" << endl;
            }
            else 
            {
                int max_number = numbers.at(0);
                for (auto num: numbers)
                    if (num < max_number)
                        max_number = num;
                cout << "The largest number is: " << max_number << endl;
            }
            break;
        
        case 'Q':
        case 'q':
            cout << "Goodbye!" << endl;

        default:
            cout << "Unknown selection try again!";
            break;
        }
     } while (letter != 'Q' && letter != 'q');



    cout << endl;
    return 0;
}
