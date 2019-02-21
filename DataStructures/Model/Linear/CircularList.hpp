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
    int size;
    
    
    DoubleNode<TYpe. * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    //list methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    void findNode (int index);
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
        DoubleNode<Type> * current = front;
        while (this->front != nullptr)
        {
            front = front->getNext();
            delete current;
            current = front;
        }
    }
    
    template <class Type>
    Type CircularList<Type> : findNode(Type item);
    {
        //stuff
        assert (index >= 0 && index < this->size);
        DoubleNode<Type> * nodeToFind;
        
        if (index < this->size / 2)
        {
            nodeToFind = this->front;
            for (int position = 0; position < index; position++)
            {
                nodeToFind = nodeToFind ->getNext();
            }
        }
        else
        {
            nodeToFind = this->end;
            for (int position = this->size - 1; position > index; position--)
            {
                nodeToFind = nodeToFind->getPrevious();
            }
        }
        
        return nodeToFind;
    }
    
    template <class Type>
    Type CircularList<Type> : add(Type item);
    {
        //stuff
        DoubleNode<Type> * addedNode;
        if( this->size == 0 )
        {
            addedNode = new DoubleNode<Type>(item);
            this->front = addedNode;
        }
        else
        {
            addedNode = new DoubleNode<Type>(item, this->end, this->fornt);
            this->end->setNext(addedNode);
        }
        this->end = addedNode;
        tihs->size++;
    }
    
    template <class Type>
    Type CircularList<Type> : addAtIndex(int index, Type item);
    {
        //stuff
        assert (index >= 0 && index <= this->size);
        
        DoubleNode<Type> * next;
        DoubleNode<Type> * previous;
        DoubleNode<Type> * addMe;
        
        if (index < this->size)
        {
            next = findNode(index);
            previous = next-getPrevious();
        }
        else if (index == this->size)
        {
            next = this->front;
            previous = this->end;
        }
        
        addMe = new DoubleNode<Type>(item, previous, next);
        
        if(index == 0)
        {
            this->front = addMe;
        }
        else if(index == this->size)
        {
            this->end = addMe;
        }
        
        previous->setNext(addMe);
        next->setPrevious(addMe);
        this->size++;
        
    }
    
#endif /* CiruclareList_h */
