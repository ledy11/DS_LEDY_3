#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include "song.h"

using namespace std;

class playlist {
private:
    string playlist_name;
    playlist(string p) : playlist_name(p) {}

public:
    vector<Song> content;
    string get_playlist_name();
    void set_playlist_name(string text);
};

#endif