#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

int main () 
{
    //the number of rows represent the reviewers and the collums the movies, the elements are the rating given by reviewers
    //int the_movie_ratings [3] [2] {}; // init = 0 for all 6 elements
    int the_movie_ratings [3] [2] // non 0 init. Note you can't redeclare an array hence why the line above is commented out  
    {
        {3, 7},
        {7, 5},
        {5, 0}
    };

    the_movie_ratings [2] [1] = 10; //assignment statement 
    cout << "The third reviewer give the 2nd movie a " << the_movie_ratings[2][1] << " rating!" <<endl;

    return 0;
}