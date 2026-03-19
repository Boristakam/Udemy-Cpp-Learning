#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main () 
{
    vector <int> ages; // Does not require definition of size like with arrays. also it's an empty vector right now 
    vector <char> brands (5); // 5 elements/characters initialised to 0 NOTE '2' is a character and 2 is an integer
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};        
    vector <int> test_scores (10); // all 10 elements/integers are initialised to 0 no need to do it explicitly
    vector <int> prices {234, 45, 345, 345};

    // here we declare a vector of 365 elements and initialise all elements to 25.0 degree celcius 
    vector <double> hi_temperatures (365, 25.0);

    // vector subscripting or indexing using square brakets (array syntax).. not bound checked
    cout << "\nfirst brand element: " << brands[0] << endl;
    cout << "first test score element: " << test_scores[0] << endl;
    cout << "first hi_temp element: " << hi_temperatures[0] << endl;

    // vector subscripting or indexing using the .at() method/operator. does bound checking unlike the array subscript syntax
    cout << "\nforth brand element: " << vowels.at(3) << endl;
    cout << "third test score element: " << prices.at(2) << endl;
    cout << "46th hi temp element: " << hi_temperatures.at(45) << endl;

    prices [0] = 75757; // assignment statement 
    cout <<"\nnew first price amount: " << prices[0] << endl;

    // adding new element at the end of a vector using the .push_back() method/operator.. new element should be of the same type
    prices.push_back(5000); // could also pushback a variable containing an integer
    cout << "\nnew fith element of prices vector is: " << prices.at(4) << endl;
    cout << "new size of prices vector: " << sizeof(prices) << endl;
    cout << "there are " << prices.size() <<" elements in prices vector" << endl;

    //error bound check test. should return an error/exception msg prompting the end of execution which is good 
    //instead of having the program crash or return junk data. It helps to build exceptions handling and dealing with these situations
    // prompting user to change the 100th element of vowels vector  
    //cin >> vowels.at(99);


    //dynamically change elements in a vector 
    cin >> test_scores.at(0);
    cin >> test_scores.at(2);
    cin >> test_scores.at(4);
    cin >> test_scores.at(6);
    cin >> test_scores.at(8);


    //multidimentional vector (2D)
    vector <vector<int>> movie_ratings
    {
        {3, 4, 6},
        {0, 4, 8},
        {4, 8, 4}
    };
    cout <<"\naccessing elements of a multidimentional vector:\n";
    cout << movie_ratings[0][2] << endl;        //using array notation (not bound)
    cout << movie_ratings.at(0).at(2) <<endl;   //using the vector notation (provides bound check)

    return 0;
}