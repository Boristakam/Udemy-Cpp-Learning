// useful when the core program statements need to be executed at least once 
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    char selection {};
    // // using a do while loop to display a menu of user selections 
    // do
    // {
    //     cout << "\n------------------------\n1: do this\n2: do that\n3: do something else\nq: quit" << endl;
    //     cout << "enter your selection: ";
    //     cin >> selection;
    //     if (selection == '1')                           //NOTICE the expression in the if statements are not interger because of the single quotes 
    //         cout << "\nyou selected do this" << endl;
    //     else if (selection == '2')
    //         cout << "\nyou selected do that" << endl;
    //     else if (selection == '3')
    //         cout << "\nyou selected do something else" << endl;
    //     else if (selection == 'q' || selection == 'Q')
    //         cout << "\ngoodbye" << endl;
    //     else
    //         cout << "\ninvalid selection please try again" << endl;
    // } while (selection != 'q' && selection != 'Q');
    // cout << "quitting program!" << endl;



    //now using a  statement for the same exercise (the differece here is that you dont loop, the program ends after any selection)
    //this limitation is solved by including the switch in a while loop with a condition to remain in or to exit the loop..
    cout <<"\n------------------------" << endl;
    cout << "1. do this" << endl;
    cout << "2. do that" << endl;
    cout << "3. do something else" << endl;
    cout << "q. quit" << endl;

    cout << "\nmake your selection: ";
    cin >> selection;

    switch (selection)
    {
    case '1':
        cout << "you selected do this" << endl;
        break;
    case '2':
        cout << "you selected do that" << endl;
        break;
    case '3':
        cout << "you selected do something else" << endl;
        break;
    case 'q':
    case 'Q':
        cout << "goodbye\nquitting the program";
    default:
        cout << "invalid selection please try again" << endl;

        break;
    }


    cout << endl;
    return 0;
}