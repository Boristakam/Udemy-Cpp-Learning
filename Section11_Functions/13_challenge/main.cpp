/* this program allows the user to select an option from a menu/list to perform an action */

#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

//function prototypes
void display_menu();
void handle_quit();
void handle_default_selection();

char get_user_selection(char &character);
int add_number(int &new_number);

void display_numbers(const vector<int>);
void display_mean(const vector<int>);
void display_smallest_num(const vector<int>);
void display_largest_num(const vector<int>);


int main ()
{
    char            letter {};
    vector<int>     numbers;
    int             new_number {0};

    display_menu();

    do
    {
        get_user_selection(letter);

        //performing operations based on user choice
        switch (letter)
        {
        case 'P':
        display_numbers(numbers);
        break;

        case 'A':
        add_number(new_number);
        numbers.push_back(new_number);
        break;
        
        case 'M':
        display_mean(numbers);
        break;

        case 'S':
        display_smallest_num(numbers);    
        break;

        case 'L':
        display_largest_num(numbers);
        break;

        case 'Z':
        display_menu();
        break;
        
        case 'Q':
        handle_quit();
        break;

        default:
        handle_default_selection();
        break;
        }

    } while (letter != 'Q');

    cout << endl;
    return 0;
}


/**********************************************************
 * This function displays the menu to the consol 
 *********************************************************/
void display_menu()
{
    cout << "\nMake a seclection from the list below and press enter: " << endl;
    cout << "P - Print numbers" << endl; 
    cout << "A - Add a new number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

/***********************************************************
 * This function reads and returns the user's 
 * menu selection as an upper case character 
 **********************************************************/
char get_user_selection(char &selection)
{
    cout << "\nWhat's your selection: ";
    cin >> selection;
    //converting user selection to upper case character
    if (islower(selection))
        selection = toupper(selection);

    return selection;
}

/************************************************************
 * This function displays numbers added to the vector 
 ***********************************************************/
void display_numbers(const vector<int> numbers)

{
    cout << "List of number [ ";
    for (auto n: numbers)
    {
        cout << n << " ";
    }
    cout << "]" << endl;
    if (numbers.size() == 0)
        cout << "The list is empty!" << endl;
}

/*************************************************************
 * This function returns a new value to be added to the vector 
 ************************************************************/
int add_number(int &new_number)
{
    cout << "Enter a new number: ";
    cin >> new_number;
    cout << new_number << " added!" << endl;

    return new_number;
}

/*************************************************************
 * This function calculates and displays the mean value 
 * of all numbers in the added to the vector 'numbers' 
 ************************************************************/
void display_mean(const vector<int> numbers)
{
    double  sum {0.0};
    double  avg {0.0};
    if (numbers.size() == 0)
    {
        cout << "Unable to calculate the average - list empty!" << endl;
        cout << "Press 'Z' to display the menu again" << endl;
    }
    else
    {
        for(auto n: numbers)
        {
            sum += n;
        }
        cout << setprecision(3);
        avg = sum / numbers.size();
        cout << "The average of all numbers is: " << avg << endl;
    }
}

/*************************************************************
 * This function displays the smallest number in the vector 
 ************************************************************/
void display_smallest_num(const vector<int> numbers)
{
    if (numbers.size() == 0)
    {
        cout << "Unable to determine smallest number - list empty!" << endl;
        cout << "Press 'Z' to display the menu again" << endl;
    }
    else 
    {
        int min_number = numbers.at(0);
        for (auto n: numbers)
        {
            if (n < min_number)
                min_number = n;
        }
        cout << "The smallest number is: " << min_number << endl;
    }
}

/*************************************************************
 * This function displays the largest number in the vector 
 ************************************************************/
void display_largest_num(const vector<int> numbers)
{
    if (numbers.size() == 0)
    {
        cout << "Unable to determine Largest number - list empty!" << endl;
        cout << "Press 'Z' to display the menu again" << endl;
    }
    else 
    {
        int max_number = numbers.at(0);
        for (auto n: numbers)
        {
            if (n > max_number)
                max_number = n;
        }
        cout << "The largest number is: " << max_number << endl;
    }
}

/*************************************************************
 * This function displays the programme's quit message
 ************************************************************/
void handle_quit()
{
    cout << "Goodbye!!" << endl;
}

/*************************************************************
 * This function handles invalid user entries 
 ************************************************************/
void handle_default_selection()
{
    cout << "Unknown selection try again!" << endl;
    cout << "Press 'Z' to display the menu again" << endl;
}
