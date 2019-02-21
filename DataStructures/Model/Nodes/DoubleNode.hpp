//
//  DoubleNode.h
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef DoubleNode_h
#define DoubleNode_h

#include "Node.hpp"

template <class Type>
class DoubleNode <Type> : public Node<Type>
{
private:
    DoubleNode<Type> * nextNode;
    DoubleNode<Type> * prevNode;
public:
    //constructor
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * nextNode);
    //   get/set
    DoubleNode<Type> * getNode;
    void setNode(DoubleNode<Type> * next);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    this->nextNode = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>()
{
    this->nextNode = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> * nextNode) : Node<Type>()
{
    this->nextNode = nextNode;
}

template <class Type>
void DoubleNode<Type> :: setNode(DoubleNode<Type> * nextNode )
{
    this->nextNode = nextNode;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNode()
{
    return next;
}

#endif /* DoubleNode_h */
