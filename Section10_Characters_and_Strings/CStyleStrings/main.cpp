#include <iostream>
#include <cstring> //header file for c style string functions
#include <cctype> // to use character-based functions

using namespace std;

int main ()
{
    // char first_name [10] {};
    // char last_name [10] = {};
    char full_name [20]{};
    char temp [50] {};

    //Working with CIN 
    // NOTE : with cin you enter one name/string at a time because the null character between the name means last name will be ignored 
    // cout << "\nEnter your first name: ";
    // cin >> first_name; //either define when declared, user prompt to define, use strcpy() to define, cannot use assignment op like in c++ style strings i.e. first_name = "Don"

    // cout << "Enter your last name: ";
    // cin >> last_name;

    // cout << "Your first name " << first_name << " has " << strlen(first_name) << " characters" << endl; //strlen() returns a size_t not an interger (size_t is an unsigned int)
    // cout << "Your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // //building up full_name
    // strcat (full_name, first_name); //concatonate/copying fisrt name into full name 
    // strcat (full_name, " "); //adding a space after first name 
    // strcat (full_name, last_name); 
    // cout << "\nYour full name is " << full_name << endl;


    //Working with cin.getline() so the null character effect is stopped and the user can enter more that one word 
    cout << "\nEnter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your name is " << full_name << endl;

    cout << "----------------------------" << endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same!" << endl;
    else
        cout << temp << " and " << full_name << " different!" << endl;


    cout << "Now changing all characters of temp to capital letters and comparing again:" << endl;
    for (size_t i {0}; i < strlen(temp); i++)
    {
        if(isalpha(temp[i])) // if tolower() would make more sense here 
            temp[i] = toupper(temp[i]);
    }
    cout << temp << endl;

    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same!" << endl;
    else
        cout << temp << " and " << full_name << " are different!" << endl;

    cout << "----------------------" << endl;
    // the strcmp function returns 0 if there are no difference between characters of a string 
    // and it returns 1 or -1 if there is a least one difference. the sign depend on order of operands 
    cout << strcmp(temp, full_name) << endl;
    cout << strcmp(full_name, temp) << endl;


    
    cout << endl;
    return 0;
}