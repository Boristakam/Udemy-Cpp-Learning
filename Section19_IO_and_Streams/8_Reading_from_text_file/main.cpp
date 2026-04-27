
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ifstream in_file; //declaring fstream or ifstream object. i = input, f = file
    string line;
    int num;
    double total;
    
    in_file.open("../test.txt"); // connecting to file on my system. 1 dir up from where the executable file is
    //in_file.open("../test.txt", ios::in); // the line above does the ios::in by default 
    if (!in_file) 
    {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    in_file >> line >> num >> total;
    //reading data from the file
    cout << line << endl;
    cout << num << endl;
    cout << total << endl;
    //closing the steam.. to flush out any unwritten data
    in_file.close();

    return 0;
}

