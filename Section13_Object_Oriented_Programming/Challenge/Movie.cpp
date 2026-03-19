#include <iostream>
//#include <string>   /* redundant because Movie.h already includes it */
#include "Movie.h"

using namespace std;

/* void Movie::set_name(string name_val)
{
    name = name_val;
} */

/* void Movie::set_rating(string rating_val)
{
    rating = rating_val;
} */

/* void Movie::set_watch_count(int watch_count_val)
{
    watch_count = watch_count_val;
} */

/* void Movie::increment_watch_count()
{
    watch_count++;
} */

/* string Movie::get_name() const
{
    return name;
} */

/* string Movie::get_rating() const
{
    return rating;
} */

/* int Movie::get_watch_count() const
{
    return watch_count;
} */

/* to display a movie and its attributes */
void Movie::display() const 
{
    cout << name << ", " << rating << ", " << watch_count << endl;
}

// constructor
Movie::Movie(string name, string rating, int watch_count)
    :name(name), rating(rating), watch_count(watch_count) // initialising member attributes with new movie
{

}

// copy constructor
Movie::Movie(const Movie &source) 
    :Movie{source.name, source.rating, source.watch_count}
{

}

// destructor
Movie::~Movie()
{

}