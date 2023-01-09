#include <iostream>
#include <string>
#include <fstream>
#include "KeyNode.h"

using namespace std;

void KeyNode::setNext(KeyNode * ptr)
{
    next = ptr;
}

void KeyNode::setEntryNode(Node * ptr)
{
    entryNode = ptr;
}

KeyNode * KeyNode::getNext()
{
    return next;
}

Node * KeyNode::getEntryNode()
{
    return entryNode;
}

