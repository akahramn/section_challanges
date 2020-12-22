#include <iostream>
#include "movie.h"
#include "movies.h"
using namespace std;


void add_movie(movies &movies , string name, string rating, int watched);
void increment_watched(movies &movies, string name, int artir);


int main() {
    movies my_movies;
    char secim;
    string name;
    string rating;
    int watched;
    int artir;
    do {
        cout<<"yapmak istdigi secim gir"<<endl;
        cout<<"01. film eklemek"<<endl;
        cout <<"02. film izlenme sayısını artır"<<endl;
        cout <<"03. filmleri görüntüle"<<endl;
        cout <<"04. cıkıs"<<endl;
        cout <<"Secim : ";
        cin >>secim;
        switch (secim) {
            case '1':{
                cout << "eklemek istiğin filmin ismini gir : ";
                cin >> name;
                cout << "rating : ";
                cin >> rating;
                cout << "watched : ";
                cin >> watched;
                add_movie(my_movies, name, rating, watched);
            }
            case '2':{
                cout <<"hangi filmin izlenme sayısını artırmak istiyorsunuz : ";
                cin >>name;
                cout <<"izlenme sayısını ne kadar artırmak istiyorsunuz: ";
                cin >>artir;
                increment_watched(my_movies, name, artir);
            }
            case '3':{
                my_movies.display();
            }
        }

    } while (secim != '04' && secim != '4');

    cout << "Bye bye"<<endl;
    return 0;
}

void add_movie(movies &movies, string name,string rating, int watched){

    if(movies.add_movie(name, rating, watched)){
        cout << "The Movie"<<"'"<<name<<"'" <<"You Want To Add Has Been Added"<<endl;
    }else{
        cout <<"The Movie"<<"'"<<name<<"'"<<"You Want To Add Has Been Already Exist"<<endl;
    }
}

void increment_watched(movies &movies, string name, int sayi){
    movies.increment_watched(name,sayi);
}

