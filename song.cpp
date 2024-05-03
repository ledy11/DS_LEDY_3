#include "song.h"

string Song::get_song_name(){
    return song_name;
}
void Song::set_song_name(string name){
    song_name = name;
}
string Song::get_artist_name(){
    return artist_name;
}
string Song::get_genre(){
    return genre;
}
void Song::set_artist_name(string text){
    artist_name = text;
}
void Song::set_genre(string text){
    genre = text;
}