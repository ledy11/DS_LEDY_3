#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include "jukebox.h"


using namespace std;

int main(){


    Jukebox my_jukebox;
    cout<<"My_Jukebox App Menu" << '\n' << "Please select from the following options or Enter 0 to quit" << '\n' << 
    "1: Play "<< '\n' << "2: Pause"<<'\n'<<"3: Play previous track" << '\n' << "4: Play next track" 
    << '\n' <<  "5: Play 1st song of playlist" << '\n' << 
    "6: Play 1st song of previous playlist" << '\n' << "7: play 1st song of next playlist" << '\n' << 
     "8: Random reassange pof playlists" << '\n' << "9: Autoplay(repeat) " << '\n' << endl;
    int input;
    cin>>input;

    while(true){
    if(input == 0){
        cout<<"Thank you for using My_Jukebox App"<<endl;
    
     }
    else if(input == 1){
        cout<<"Playing" <<endl;
        //my_jukebox.play();
    }
    else if(input == 2){
        cout<<"Paused"<<endl;
        //my_jukebox.pause();
    }
    else if(input == 3){
        cout<<"Playing previous song"<<endl;
        //my_jukebox.SkipPreviousTrack(playlist);

    }

    else if(input == 4){
        cout<<"Playing next song"<<endl;
        //my_jukebox.SkipToNextTrack();
    }
    else if(input == 5){
        cout<< "Playing 1st song"<<endl;
        //my_jukebox.skiptoFirstTrack();
    }
    else if(input == 6){
        cout<<"Playing 1st song of previous playlist"<<endl;
        //my_jukebox.SkipToFirstTrackPrev();
    }
    else if( input == 7){
        cout<<"Playing 1st song of next playlist"<<endl;
        //my_jukebox.SkipToFirstTrackNext();
    }
    else if(input == 8){
        cout<< "Rearranging playlist order"<<endl;
        //my_jukebox.rearrange();
    }
    else if(input == 9){
        cout<<"Autoplay On"<<endl;
        //my_jukebox.ToggleRepeat();
    }
    break;

    }



   




}
