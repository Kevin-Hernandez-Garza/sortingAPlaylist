//******************************************************************
// Author: Kevin Hernandez-Garza
// Assignment Number: Programming Assignment "6"
// File Name: KevinHernandezG_Lab4.cpp
// Course/Section: COSC 1337 Section -009
// Due Date: 4/15/23
// Instructor: Dr.Haytham Mohamed
//
// This program asks the user to input 10 of their favorite songs along with the artists names
// then an algorithm sorts the playlist according to the artist name.
//  ******************************************************************

#include <iostream>
#include <string>
using namespace std;

// Define the structure for a song
struct Song
{
    string artist;
    string title;
};

// Function prototypes
void getData(Song[]);
void sortPlaylist(Song[]);
void displayPlaylist(Song[]);

// Main function
int main()
{
    // Create an array of 10 Song objects
    Song playlist[10];

    // Call the functions to get the data, sort the playlist, and display it
    getData(playlist);
    sortPlaylist(playlist);
    displayPlaylist(playlist);

    return 0;
}

// Function to get the data from the user
void getData(Song playlist[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the artist and title of song " << i + 1 << ": ";
        getline(cin, playlist[i].artist);
        getline(cin, playlist[i].title);
    }
}

// Function to sort the playlist in ascending order by artist
void sortPlaylist(Song playlist[])
{
    int i, j;
    Song temp;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (playlist[i].artist > playlist[j].artist)
            {
                temp = playlist[i];
                playlist[i] = playlist[j];
                playlist[j] = temp;
            }
        }
    }
}

// Function to display the playlist
void displayPlaylist(Song playlist[])
{
    cout << "Artist\t\tTitle\n";
    cout << "------------------------------------\n";
    for (int i = 0; i < 10; i++)
    {
        cout << playlist[i].artist << "\t\t" << playlist[i].title << "\n";
    }
}
