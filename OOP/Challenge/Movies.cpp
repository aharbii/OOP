/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

 /*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies() {
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
}

/*************************************************************************
add_movie expects the name of the move, rating and watched count

It will search the movies vector to see if a movie object already exists
with the same name. 

If it does then return false since the movie already exists
Otherwise, create a movie object from the provided information
and add that movie object to the movies vector and return true
*********************************************************************/
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    // you implement this method
    Movie movie{name, rating, watched};
    std::string current_name = movie.get_name();
    bool exist = false;
    for (auto &exists_movie : movies) {
        std::string to_compare = exists_movie.get_name();
        if (current_name == to_compare) {
            exist = true;
            break;
        }
    }
    if (exist == true)
        return false;
    else {
        movies.push_back((movie));
        return true;
    };
}

 /*************************************************************************
increment_watched expects the name of the move to increment the
watched count

It will search the movies vector to see if a movie object already exists
with the same name. 
If it does then increment that objects watched by 1 and return true.

Otherwise, return false since then no movies object with the movie name
provided exists to increment
*********************************************************************/
bool Movies::increment_watched(std::string name) {
    // you implement this method
    bool exist = false;
    for (auto &exists_movie : movies) {
        std::string to_compare = exists_movie.get_name();
        if (name == to_compare) {
            exists_movie.increment_watched();
            exist = true;
            break;
        }
    }
    if (exist == true) {
        return true;
    }
    else
        return false;
}

/*************************************************************************
display

display all the movie objects in the movies vector.
for each movie call the movie.display method so the movie
object displays itself
*********************************************************************/
void Movies::display() const {
    // You implement this method
    for (auto &movie : movies) {
        movie.display();
    }
}