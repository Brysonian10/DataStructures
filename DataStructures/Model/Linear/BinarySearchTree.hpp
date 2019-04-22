//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 4/18/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp
#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //MARK : Protected Methods
    int calculatedSize(BinaryTreeNode<Type> * startNode);
    int calculatedHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isCompleted(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversals(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    //MARK: Public Methods
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isCompleted();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type intemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    size += calculatedSize(this->root);
    
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculatedSize(BinaryTreeNode<Type> * current)
{
    if(current != nullptr)
    {
        return calculatedSize(current->getLeftChild()) + calculatedSize(current->getRightChild()) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    if(startNode == nullptr)
    {
        return true;
    }
    
    if(index >= size)
    {
        return false;
    }
    
    return (isComplete(startNode->getLeftChild(), 2 = index + 1, size) && isComplete(startNode->getRightChild(), 2 * index + 2, size));
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(this->root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculatedHeight(current->getLeftChild());
    rightHeight = calculatedHeight(current->getRightChild());
    
    int heightDifference = abs(leftHeight) - rightHeight);
    bool leftBalanced = isBalanced(current->getLeftChild());
    bool rightBalanced = isBalanced(current->getRightChild());
    
    if (heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

//MARK: - Recursive Traversal Implementation
/*
 In order traversal goes in the order Left, Root, Right
 Notice that the non-recursive case does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        inOrderTraversal(currentNode->getLeftChild());
        cout << currentNode->getData() << endl;
        inOrderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this->root);
}
/*
 Pre order traversal goes in the order Root, Left, Right
 Great for building math problems
 Notice that the non-recursive case does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getData() << endl;
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(this->root);
}
/*
 Post order traversal goes in the order Left, Right, Root
 Great for destroying the tree
 Notice that the non-recursive case does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getData() << endl;
    }
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this- = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current-getData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightChild();
            }
            else //Remove cerr after verification of understanding
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return; //OKAY because it is returning nothing
            }
        }
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe)
        }
        insertMe->setRootNode(previous);
    }
}
template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}


#endif /* BinarySearchTree_hpp */
