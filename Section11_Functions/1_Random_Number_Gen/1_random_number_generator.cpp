#include<iostream>
#include<cstdlib>   //for rand() number generator 
#include<ctime>     //for seeding random numbers generator

using namespace std;

int main()
{
    int random_number {0};
    size_t count {10};
    int min_number {1};
    int max_number {6};

    cout << "The maximum random number of this machine is " << RAND_MAX << endl;
    // seeding the random number generator(hence the 's' before 'rand') by passing it the time function with a null argument  
    srand(time(nullptr));
    
    for(size_t i = 0; i < count; i++)
    {
        // Finding the remainder with the max number scales generated number to a value lower or equal to 0 and lower than max number
        // adding the minimum number so the number generated is never 0 (simulating a dice)
        random_number = rand() % max_number + min_number;  
        cout << random_number << endl; 
    }   

    return 0;
}