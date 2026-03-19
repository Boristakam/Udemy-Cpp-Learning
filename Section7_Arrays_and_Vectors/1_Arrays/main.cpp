#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

int main () 
{
    char vowels [] = {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    int n = sizeof(vowels);
    cout << "The last vowel is: " << vowels[n -1] << endl;
    //cout << "The last vowel is: " << vowels[6] << endl; // out of bound! dont do this might crash depending on program and machine
    


    double hi_temps [] = {90.1, 89.8, 77.5, 34.8, 57.6, 4756.76};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 45.9; // Assignment statement changing the value of first array element 
    cout << "The first high temperature is now: " << hi_temps[0] << endl;


    int test_scores [5];
    /* The following prints return junk values if the array is not initialised. 
    add {} to initialise all elements to 0, or {0}. {1} initialised the first element to 1 */ 
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fith score at index 4: " << test_scores[4] << endl;

    //polulating the array with 5 elements 
    cout << "enter 5 interger values and press enter after each one: " << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    // new values
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fith score at index 4: " << test_scores[4] << endl;


    //printing the address of the array name
    cout << "name of the array is: " << test_scores << endl;


    return 0;
}