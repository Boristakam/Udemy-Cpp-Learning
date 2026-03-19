#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    
    // Assignment statements for vector 1
    int vect1_num1 {0};
    int vect1_num2 {0};
    cout << "\nEnter the first integer value for vector1: ";
    cin >> vect1_num1;
    cout << "Enter the second integer value for vector1: ";
    cin >> vect1_num2;

    vector1.push_back(vect1_num1);
    vector1.push_back(vect1_num2);

    cout << "First element of vector1 is: " << vector1.at(0) << endl;
    cout << "Second element of vector1 is: " << vector1.at(1) << endl;
    cout << "Vector 1 has " << vector1.size() << " elements" << endl;

    // Assignment statements for vector 2
    int vect2_num1 {0};
    int vect2_num2 {0};
    cout << "\nEnter the first integer value for vector2: ";
    cin >> vect2_num1;
    cout << "Enter the second integer value for vector2: ";
    cin >> vect2_num2;

    vector2.push_back(vect2_num1);
    vector2.push_back(vect2_num2);

    cout << "First element of vector2 is: " << vector2.at(0) << endl;
    cout << "Second element of vector2 is: " << vector2.at(1) << endl;
    cout << "Vector 1 has " << vector2.size() << " elements" << endl;


    vector <vector<int>> vector_2d;
    //adding 1d vectors to the new 2d vector
    vector_2d.push_back(vector1); // can only 1 pushback at a time unlike the .at() 
    vector_2d.push_back(vector2);
    cout << "\nVector_2d elements: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000; //This assignment statement updates vector 1 but not vector 2_d. Need to push_back() again or use a pointer initially to update vector 2d
    cout << "\nVector_2d new elements: " << endl;
    cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

    cout << "\nFirst element of vector1 is: " << vector1.at(0) << endl;
    cout << "Second element of vector1 is: " << vector1.at(1) << endl;
    


    return 0;
}