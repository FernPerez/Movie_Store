#include <iostream>
#include <string>
#include <fstream>
#include "FilmStore.h"

using namespace std;

int main()
{
    filmStore * store = new filmStore;
    store->run();

    delete store;
}
