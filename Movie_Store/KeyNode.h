#include <iostream>
#include <string>
#include "Node.h"

using namespace std;
#ifndef KEYNODE_H
#define KEYNODE_H

class KeyNode
{
    private:
        KeyNode * next;
        Node * entryNode;

    public:
        void setNext(KeyNode * ptr);
        void setEntryNode(Node * ptr);
        KeyNode * getNext();
        Node * getEntryNode();
};

#endif
