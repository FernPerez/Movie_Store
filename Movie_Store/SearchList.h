#include <iostream>
#include <string>
#include <fstream>
#include "KeyNode.h"

using namespace std;
#ifndef SEARCHLIST_H
#define SEARCHLIST_H

struct stringAndPtr{
    string str;
    KeyNode * ptr;
};
class SearchList
{
    public:
        stringAndPtr * titles = new stringAndPtr[0];
        stringAndPtr * years = new stringAndPtr[0];
        stringAndPtr * directors = new stringAndPtr[0];
        stringAndPtr * actors = new stringAndPtr[0];
        void expandArray(stringAndPtr * arr, stringAndPtr newtag);
};

#endif
