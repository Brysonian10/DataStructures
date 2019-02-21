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
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * nextNode);
    type getData();
    void setData(Type data);
}

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    this->next = nullptr;
}




#endif /* DoubleNode_h */
