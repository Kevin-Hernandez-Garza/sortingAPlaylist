// This program asks the user to input 10 of their favorite songs along with the artists names
// then an algorithm sorts the playlist according to the artist name.
//  ******************************************************************

#include <iostream>
#include <string>
using namespace std;

// structure for song
struct Song
{
    string artist;
    string title;
};

// the function prototypes
void getUserData(Song[]);
void sortListInAsc(Song[]);
void showList(Song[]);

int main()
{
    // creates the array named playlist that contains 10 songs
    Song playlist[10];

    // calls the functions
    getUserData(playlist);
    sortListInAsc(playlist);
    showList(playlist);

    return 0;
}

// gets users data
void getUserData(Song playlist[])
{
    for (int i = 0; i < 10; i++)
    {
        // iterates over each input
        cout << "Enter the artist name " << i + 1 << ": ";
        getline(cin, playlist[i].artist);
        cout << "Enter the song name : " << endl;
        getline(cin, playlist[i].title);
    }
}

// this function sorts the songs and artist names in ascending order
void sortListInAsc(Song playlist[])
{
    // creates integer variables
    int i, j;
    Song temp;
    // iterates over each song to sort it
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

// this function makes sure to show the playlist on the console
void showList(Song playlist[])
{
    cout << "Artist\tTitle";
    cout << endl;
    cout << "================================\n";
    for (int i = 0; i < 10; i++)
    {
        cout << playlist[i].artist << "\t\t" << playlist[i].title << endl;
    }
}
