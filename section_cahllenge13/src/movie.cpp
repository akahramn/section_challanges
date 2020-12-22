//
// Created by abdullah on 19.12.2020.
//
#include <iostream>
#include "movie.h"
using namespace std;
movie::movie(std::string name, std::string rating, int watched) {
    this->name = name;
    this->rating = rating;
    this->watched_num = watched;
}
movie::~movie() {}
void movie::display() {
    cout <<"=============================================="<<endl;
    cout<<"Name : " <<name<<"\nRating : "<<rating<<"\nWatched : "<<watched_num<<endl;
    cout <<"=============================================="<<endl;

}
std::string movie::getname() {return name;}

void movie::increase_watched(int sayi){watched_num += sayi;}