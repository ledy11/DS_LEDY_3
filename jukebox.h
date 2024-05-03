#ifndef JUKEBOX_H
#define JUKEBOX_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include "playlist.h"


using namespace std;

class Jukebox{
private:
    vector<playlist>jukebox_playlist;
    int current_song_index;
    int current_playlist_index;

public:

Jukebox() : current_song_index(0),current_playlist_index(0){}
void insert(playlist& playlist);
void SkipPreviousTrack(playlist& playlist);
void SkipToNextTrack(playlist& playlist);
void play();
void pause();
void skiptoFirstTrack();
void SkipToFirstTrackPrev();
void SkipToFirstTrackNext();
void rearrange();
void ToggleRepeat();



};

#endif