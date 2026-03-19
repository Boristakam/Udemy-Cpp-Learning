#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.h"

class Movies
{
private:
    vector <Movie> movies;

public:
    /* constructor */
    Movies();
    /* destructor */
    ~Movies();

    /*************************************************************************
    add_movie will search the movies vector to see if a movie object already 
    exists with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
    bool add_movie(string name, string rating, int watch_count);

    /*************************************************************************
    increment_watch_count will search the movies vector to see if a movie 
    object already exists with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
    bool increment_watch_count(string name);

    /*************************************************************************
    displays all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
    void display() const;
};

#endif