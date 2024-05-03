#include "jukebox.h"

void Jukebox::insert(playlist& playlist){
    jukebox_playlist.push_back(playlist);
}

//Play
void Jukebox::play(){
    cout<< "Now playing: "<<jukebox_playlist[current_playlist_index].content[current_song_index].get_song_name() << 
        " by " << jukebox_playlist[current_playlist_index].content[current_song_index].get_artist_name() << endl;
}

// previous song
void Jukebox::SkipPreviousTrack(playlist& playlist) {
    current_song_index = current_song_index - 1;
    play();
    
    }
    
}

//next song 
void Jukebox::SkipToNextTrack(playlist& playlist){
    current_song_index++;
    play();
        
    }
}

//pause
void Jukebox::pause(){
    cout<<"paused"<<endl;
}

//first song
void Jukebox::skiptoFirstTrack(){
    current_song_index = 0;
    play();
    
}

//first song, previous playlist
//Skip to first track of previous playlist, if it is currently playing the first track of a playlist
void Jukebox::SkipToFirstTrackPrev(){
    if(current_song_index == 0){
        current_playlist_index--;
        current_song_index = 0;
    }
    play();
}

//first song, next playlist
void Jukebox::SkipToFirstTrackNext(){
    current_playlist_index++;
    current_song_index = 0;
    }
    play();
}

//move around playlists order 
void Jukebox::rearrange(){
    //gets random value based on system time
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    
    shuffle(jukebox_playlist.begin(),jukebox_playlist.end(), default_random_engine(seed));
    
    current_playlist_index = 0;
    current_song_index = 0;
    play();
    
}

//autoplay
void Jukebox::ToggleRepeat(){
    jukebox_playlist[current_playlist_index] = jukebox_playlist[0];
    jukebox_playlist[current_playlist_index].content[current_song_index]= jukebox_playlist[current_playlist_index].content[0];
    play();
  
}











