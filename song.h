#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;

//This project consisted of 3 different business objects which are jukebox,song,and playlist.
//I will create a class for each

class Song {
private:
    string song_name;
    string artist_name;
    string genre;
    Song(string n, string a, string g): song_name(n), artist_name(a), genre(g){}
public:
    string get_song_name();
    void set_song_name(string name);
    string get_artist_name();
    string get_genre();
    void set_artist_name(string text);
    void set_genre(string text);

};

#endif
