  For my final project, I chose the exam remediation route to increase my grade for Exam 1. For this project I was asked to create a program that resembles the typical functions of a jukebox while having separate playlists. The main functions I needed to include were Play/Pause, skip to previous track, skip to next track, skip to first track of current playlist,skip to first track of previous playlist, if it is currently playing the first track of a playlist, skip to first track of next playlist,rearrange playlist order,toggle Jukebox repeat.

  Initially, I planned to use a circular doubly linked list to accommodate for the next and previous functions. However, after some consideration I decided to use a vector instead. This is because I felt much more comfortable storing the songs from the playlist into a vector and I could easily use indexing to quickly find the next song, previous song, first song of previous playlist, etc. Also, since vectors are a type of array and are commonly used to store data of one type, all my songs being strings worked great too.

  The project consists of two parts, the actual code for the functions and a main.cpp file with my main function where I implemented a jukebox menu to have the user select what they would like to do. The main.cpp file can be ran with the following command "g++ -std=c++11 -o jukebox main.cpp jukebox.cpp playlist.cpp song.cpp ./jukebox" . This is a very simple menu with just cout statements but if you see the code for this on my main.cpp file, I commented out all the functions that correspond to each statement. For example, if you pick option 3, you'll get the a message saying "Playing previous song" but under this function, the my_jukebox.SkipPreviousTrack(playlist); function call is commented out but it is what would be here if we were to actually run all the functions.

  I also created a pdf document as a walkthrough for my project. It is the file named "DS_final_ex_2.pdf".
