//
// Created by abdullah on 19.12.2020.
//

#ifndef __MOVIES_H__
#define __MOVIES_H__
#include <vector>
#include "movie.h"
using namespace std;


class movies {
private:
    vector<movie>movies;

public:

    bool add_movie(string, string, int);
    void increment_watched(string,int );
    void display();

};


#endif //__MOVIES__
