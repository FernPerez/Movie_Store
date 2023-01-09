#include <iostream>
#include <string>
#include <fstream>
#include "SearchList.h"

using namespace std;
#ifndef FILMSTORE_H
#define FILEMSTORE_H

class filmStore
{
    private:
        string fileName;
        Node * linkList;
        int listLength;
        Node * resultList;

    public:
        void run();
        void menu();
        void checkIn();
        void checkOut();
        void loadIntoArray(string tag, int whichArray, Node * node);
        string * searchTitles(string title);
        string * searchDirectors(string director);
        string * searchActors(string actor);
        string * searchYears(string year);
        void loadDatabase(string file);
        string sentenceCase(string str);
};

#endif
