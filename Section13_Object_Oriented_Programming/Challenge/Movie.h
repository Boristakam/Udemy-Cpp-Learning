/*************************************************************************
 * Movie.h
 * Models a movies with the following attributes
 * 
 * std::string name - the name of the movie
 * std::string rating - the rating of the movie
 * int watch_count - the number of times the movies was watched
 *************************************************************************/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

class Movie 
{
private:
    string name;            /* movie name */
    string rating;          /* movie rating (G, PG, PG-13, R) */
    int watch_count;        /* number of times the movie was watched */

public:
    /* basic getters and setters */
    void set_name(string name) {this->name = name; }
    string get_name() const { return name; }
    
    void set_rating(string rating) {this->rating = rating; }
    string get_rating() const { return rating; }

    void set_watch_count(int watch_count) {this->watch_count = watch_count; }
    int get_watch_count() const { return watch_count; }
    void increment_watch_count() { watch_count++; }

    void display() const; /* to display a movie and its attributes */

    /* constructor */ 
    Movie(string name, string rating, int watch_count);
    /* copy constructor */
    Movie(const Movie &source);
    /* destructor */
    ~Movie();
};

#endif  /* _MOVIE_H_ */