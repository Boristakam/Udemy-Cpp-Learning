#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    for (int i {1}; i <= 10; i++)
    {
        for (int y {1}; y <= 10; y++)
        {
            cout << i << " X " << y << " = " << i * y << endl;   
        }
        cout << "-------------" << endl;
    }
    cout << endl;
    return 0;
}
