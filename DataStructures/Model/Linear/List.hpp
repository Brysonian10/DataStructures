//
//  List.h
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_h
#define List_h

#include "../Nodes/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
    
public:
    //list operations
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //helper accessor methods
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
    
};

#endif /* List_h */
