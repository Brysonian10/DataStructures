//
//  CiruclareList.h
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "../Nodes/DoubleNode.hpp"

tempate <class Type>
class CircularList
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    
    DoubleNode<TYpe. * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    //list methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};

 template <class Type>
    Type CircularList<Type> :: CircularList();
    {
        //stuff
        front = nullptr;
        end = nullptr;
        this->size = 0;
    }
    
    template <class Type>
    Type CircularList<Type> :: ~CircularList();
    {
        //stuff
        
    }
    
    template <class Type>
    Type CircularList<Type> : add(Type item);
    {
        //stuff
    }
    
    template <class Type>
    Type CircularList<Type> : addAtIndex(int index, Type item);
    {
        //stuff
    }
    
#endif /* CiruclareList_h */
