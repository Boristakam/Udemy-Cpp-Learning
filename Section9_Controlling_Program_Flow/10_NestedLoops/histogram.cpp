// print a histogram of user entered values 
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    cout << "\nhow many data items do you have? ";
    int num_items;
    cin >> num_items;

    vector <int> data {};

    for (int i {0}; i < num_items; i++)
    {
        cout << "enter data number " << i << ": ";
        int item {0};
        cin >> item;
        data.push_back(item);
    }
    cout << "\nlist of " << data.size() << " data: " << endl;
    for (auto val: data)
        cout << val << endl;

    cout << "\nhistogram of the " << data.size() << " data: " << endl;
    for (auto val: data)
    {
        for (int i {0}; i < val; i++)
        {
            if (i % 5 == 0)
                cout << ",";
            cout << "-";
        }
        cout << endl;
    }
    

    cout << endl;
    return 0;
}