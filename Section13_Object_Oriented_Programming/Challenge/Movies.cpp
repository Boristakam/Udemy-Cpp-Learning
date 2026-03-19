/******************************************************************
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

/*************************************************************************
    add_movie will search the movies vector to see if a movie object already 
    exists with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
bool Movies::add_movie(string name, string rating, int watch_count)
{
    for (const Movie &name_check: movies)
    {
        if (name_check.get_name() == name)
            return false;
    }

    Movie temp {name, rating, watch_count};
    movies.push_back(temp);
    return true;

}

/*************************************************************************
    increment_watch_count will search the movies vector to see if a movie 
    object already exists with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
bool Movies::increment_watch_count(string name)
{
   for (Movie &name_check: movies) //cant be const here because we want to change it
    {
        if (name_check.get_name() == name)
        {
            name_check.increment_watch_count();
            return true;
        }
    } 

    return false;
}

/*************************************************************************
    displays all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
void Movies::display() const 
{
   if (movies.size() == 0)
   {
        cout <<"Sorry no movies to display\n" << endl;
   }
   else
   {
        cout << "\n==================================" << endl;
        for (const auto &i_movie: movies)
        {
            i_movie.display();
        }
        cout << "\n==================================" << endl;

   }
}

Movies::Movies()
{

}

Movies::~Movies()
{

}

