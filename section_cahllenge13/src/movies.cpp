//
// Created by abdullah on 19.12.2020.
//
#include <iostream>
#include "movies.h"
#include <vector>

using namespace std;

void movies::display() {
    if (movies.size() == 0){
        cout << "Sorry we are not found any movie"<<endl;
    }else{
        //cout <<"============================="<<endl;
        for (auto movie : movies)
            movie.display();
        //cout <<"\n============================="<<endl;
    }
}
void movies::increment_watched(string name,int sayi) {
    for (auto &movie : movies) {
        if (movie.getname() == name) {
            movie.increase_watched(sayi);
            cout << "The Movie"<<"'"<<name<<"'" <<"You Want To Increase Has Been Increased"<<endl;
        }else
            cout << "The Movie"<<"'"<<name<<"'" <<"You Want To Increase Has Been Not Found"<<endl;
    }

}

bool movies::add_movie(string name, string rate, int watched) {
    for (auto movie : movies) {
        if (movie.getname() == name)
            return false;
    }
    movie temp(name, rate,watched);
    movies.push_back(temp);
    return true;
}





