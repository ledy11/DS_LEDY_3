#include "jukebox.h"

void Jukebox::insert(playlist& playlist){
    jukebox_playlist.push_back(playlist);
}

//This function will skip to the previous track
void Jukebox::SkipPreviousTrack(playlist& playlist) {
    current_song_index = current_song_index - 1;
    if(current_playlist_index > 0){
        current_playlist_index = current_playlist_index - 1;
        current_song_index = jukebox_playlist[current_playlist_index].content.size() -1;
    }
    
}

void Jukebox::SkipToNextTrack(playlist& playlist){
    current_song_index = current_song_index + 1;
    if(current_playlist_index > 0){
        current_playlist_index++;
        current_song_index = jukebox_playlist[current_playlist_index].content.size()+1;
        play();
        
    }
}

void Jukebox::play(){
    cout<< "Now playing: "<<jukebox_playlist[current_playlist_index].content[current_song_index].get_song_name() << " by " << jukebox_playlist[current_playlist_index].content[current_song_index].get_artist_name() << endl;
}

void Jukebox::pause(){
    cout<<"paused"<<endl;
}

void Jukebox::skiptoFirstTrack(){
    current_song_index = 0;
    jukebox_playlist[current_playlist_index].content[current_song_index].get_song_name();
    play();
    
}

void Jukebox::SkipToFirstTrackPrev(){
    if(current_song_index == 0){
        current_playlist_index--;
        current_song_index = 0;
    }
    play();
}

void Jukebox::SkipToFirstTrackNext(){
    if(current_song_index == 0){
        current_playlist_index++;
        current_song_index = 0;
    }
    play();
}

void Jukebox::rearrange(){
    //gets random value based on system time
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    
    shuffle(jukebox_playlist.begin(),jukebox_playlist.end(), default_random_engine(seed));
    
    current_playlist_index = 0;
    current_song_index = 0;
    play();
    
}

void Jukebox::ToggleRepeat(){
    jukebox_playlist[current_playlist_index] = jukebox_playlist[0];
    jukebox_playlist[current_playlist_index].content[current_song_index]= jukebox_playlist[current_playlist_index].content[0];
    play();
  
}










