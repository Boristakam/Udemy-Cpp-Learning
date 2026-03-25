#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "noboolalpha - default (10 == 10):" << (10 == 10) << endl; //1
    cout << "noboolalpha - default (20 == 10):" << (20 == 10) << endl; //0

    //set True/False formatting (this fomatting is permanent unless the program toggles back to the default formatting)
    cout << boolalpha; 
    cout << "boolalpha - default (10 == 10):" << (10 == 10) << endl;  //true
    cout << "boolalpha - default (20 == 10):" << (20 == 10) << endl;  //false

    //toggling back to the defaul 1/0
    cout << noboolalpha;
    cout << "noboolalpha - default (10 == 10):" << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10):" << (20 == 10) << endl;

    //set back to True/False using the setf method
    cout.setf(ios::boolalpha);  //ios is the class and boolalpha is the flag defined in that class (wouldnt know where to find the flag without 'ios')
    cout << "boolalpha - default (10 == 10):" << (10 == 10) << endl;  //true
    cout << "boolalpha - default (20 == 10):" << (20 == 10) << endl;  //false

     //reset to the defaul 1/0
    cout << resetiosflags(ios::boolalpha);
    cout << "noboolalpha - default (10 == 10):" << (10 == 10) << endl;
    cout << "noboolalpha - default (20 == 10):" << (20 == 10) << endl;


    return 0;
}