#include <iostream>
#include <string>
#include <fstream>
#include "FilmStore.h"

using namespace std;

void filmStore::run()
{
    // call menu()
    return;
}

void filmStore::menu()
{
    // interface stuff
    // ask for database
    // load in the database
    // ask whether to check in or out
    // call accordingly for checkIn() or checkOut()
    // return to beginning of menu.
    return;
}

void filmStore::checkIn()
{
    // ask for what type of tag
    // depending on tag, call search
    // display up to 10 results and ask if user wants to display more
    // if user selects option, update its status to checked in  and its id and outdate to blank and exit
    // exit if user inputs `.`
}

void filmStore::checkOut()
{
    // ask for what type of tag
    // depending on tag, call search
    // display up to 10 results and ask if user wants to display more
    // if user selects option, update its status to checked out and exit
    // exit if user inputs `.`
}

void filmStore::loadDatabase(string file)
{
    // initialize Node ptr `tmp`
    // initialize an `entry` string that will store the entire read line.
    // store first value in file as the list length.
    // read for list length.
        // each time storing the line in `entry`
        // create a new Node for tmp ptr.
        // first substring gets removed and set to `tmp`'s title.
        // second gets removed and set to `tmp`'s director.
        // third gets removed and set to `tmp`'s year.
        // fourth gets removed and set to `tmp`'s actorNo, which also creates a list in it.
        // iterate amount of times that is stored in actorNo (1-3)
            // take next substring and add it to tmp's actor list.

        // #Note that for every searchable parameter above, I will call loadIntoArray()

        // take next substring and store in tmp's status (in or out)
        // if status is out
            // take next two substrings as tmp's id and outdate.
        // if(i != 0)
            // tmp->setNext(linkList);

        // linkList = tmp;

    return;
}

void filmStore::loadIntoArray(string tag, int whichArray, Node * node)
{
    // create a keyNode and have its entryNode point to given Node
    // given switch statement with whichArray to determine the array to add to
    // check to see, using linear search, if tag is in array.
    // If it finds it,
        // set the KeyNode's next pointer to what the struct is pointing to
        // Then set the struct's ptr to KeyNode.

    // else
        // create a StringAndPtr struct and have its str be the tag and its ptr be the KeyNode.
        // Then expand the array and add the struct to the end.
}

string * filmStore::searchTitles(string title)
{
    // create list that stores all Nodes ptrs that match by linear search.

    // If that works, instead do binary search on titles array and then display the Node mapped to each keyNode in
    // the list that's mapped to the struct.
}

string * filmStore::searchDirectors(string director)
{
    // same as above, but check for director matches.
}

string * filmStore::searchYears(string year)
{
    // same as above, but check for year matches.
}

string * filmStore::searchActors(string actor)
{
    // same as above, but checks in the Node's actor list to see if there is a match
}

string filmStore::sentenceCase(string str)
{
    // convert word to sentence case by iterating over each character and capitalizing
    // first character and characters after -
    // used for case insensitive searching.
}
