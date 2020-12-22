//
// Created by abdullah on 19.12.2020.
//

#ifndef __MOVIE_H__
#define __MOVIE_H__
#include <string>

class movie {
private:
    std::string name;
    std::string rating;
    int watched_num;

public:
    movie(std::string name, std::string rating, int watched);
    ~movie();
    void display();
    std::string getname();
    void increase_watched(int sayi);



};


#endif //__MOVIE_H__
