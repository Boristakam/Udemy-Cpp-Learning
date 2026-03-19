#include <iostream>
#include "Movies.h"

using namespace std;

/* function prototypes */
void increment_watch_count(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watch_count);

/******************************************************************
 * increment_watch_count expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
 * displays a success message
 * otherwise the watched count could not be incremented
 * because the name of the movie was not found
 * ***************************************************************/
void increment_watch_count(Movies &movies, string name)
{
    if (movies.increment_watch_count(name))
    {
        cout << "Watch count for " << name << " incremented" << endl;
    }
    else
    {
        cout << name << " does not exist in the collection" << endl;
    }
}

/******************************************************************
 * add_movie expects a reference to a Movies object 
 * and the name of the movie, the rating and the watched count
 *
 * If the movie was successfully added to the movies object it
 * displays a success message
 * otherwise the movie was not added 
 * because the name of the movie was already in movies
 * ***************************************************************/
void add_movie(Movies &movies, string name, string rating, int watch_count)
{
    if (movies.add_movie(name, rating, watch_count))
    {
        cout << name << " was added" << endl;
    }
    else
    {
        cout << name << " is already in the collection" << endl;
    }
}

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "AOT", "PG", 1);
    add_movie(my_movies, "JJK", "PG", 1);
    add_movie(my_movies, "DBZ", "PG", 10);

    my_movies.display();

    add_movie(my_movies, "DBZ", "PG", 10); /* already exists */
    add_movie(my_movies, "HxH", "PG", 2);

    my_movies.display();

    increment_watch_count(my_movies, "AOT");
    increment_watch_count(my_movies, "JJK");

    my_movies.display();

    
    increment_watch_count(my_movies, "Pizza"); /* does not exist  */
    
    return 0;
}