#include <iostream>
#include <string>

using namespace std;
#ifndef NODE_H
#define NODE_C

class Node
{
    private:
        Node * next;
        string title, year, director, id, outDate;
        bool checkedOut = false;

    public:
        Node();
        string * actorList;
        int actorNo;
        void setTitle(string newTitle);
        void setYear(string newYear);
        void setDirector(string newDirector);
        void setIdAndOutDate(string NewId, string newOutDate);
        void setNext(Node * ptr);
        void setStatus(bool stat);

        Node * getNext();
        string getTitle();
        string getYear();
        string getDirector();
        string getId();
        string getOutDate();
        string * getActorList();
        string getAll();
        bool getStatus();
};

#endif
