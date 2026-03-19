
//print functions that do differents things 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//prototypes
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

//function definitions 
void print (int num)
{
    cout << "printing an integer: " << num << endl;
    cout << endl;
}

void print (double num)
{
    cout << "printing a double: " << num << endl;
    cout << endl;
}

void print (string s)
{
    cout << "printing a double: " << s << endl;
    cout << endl;
}

void print (string s, string str)
{
    cout << "printing 2 strings: " << s << " and " << str << endl;
    cout << endl;
}

void print (vector<string> names)
{
    for (auto c : names)
    {
       cout << c + " ";
    }
    cout << endl;
}


int main()
{
    print(5); //call first print function 
    print('A'); //there are no functions with a char parameter so the char here get promoted to int ASCII (65)

    print(6.4); //calls second function and prints double 
    print(6.56F); //there is no function with a float param so second func is called 

    print("c style string"); //promoted to cpp style string.  
    string s {"c++ string"};
    //print(s); //now there no need for promotion/conversion 

    print("c style string", s); //the first argument gets promoted to a c++ style string. s passed to str param

    vector<string> us {"Boris", "Landry", "Sony", "Ryan"};
    print(us);

}