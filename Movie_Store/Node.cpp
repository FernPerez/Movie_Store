#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

Node::Node()
{
    return;
}

void Node::setTitle(string newTitle)
{
    title = newTitle;
}

string Node::getTitle()
{
    return title;
}

void Node::setYear(string newYear)
{
    title = newYear;
}

string Node::getYear()
{
    return year;
}
void Node::setDirector(string newDirector)
{
    title = newDirector;
}

string Node::getDirector()
{
    return director;
}

void Node::setIdAndOutDate(string newId, string newOutDate)
{
    id = newId;
    outDate = newOutDate;
}

string Node::getId()
{
    return id;
}

string Node::getOutDate()
{
    return outDate;
}
void Node::setStatus(bool stat)
{
    checkedOut = stat;
}

bool Node::getStatus()
{
    return checkedOut;
}

string * Node::getActorList()
{
    return actorList;
}

string Node::getAll()
{
    // print out all tags in order. Check if status is out.
    // If status is out, also display id and outDate.
    string result;
    return result;
}

void Node::setNext(Node * ptr)
{
    next = ptr;
}

Node * Node::getNext()
{
    return next;
}
