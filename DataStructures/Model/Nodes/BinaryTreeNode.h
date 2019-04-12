//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Spaulding, Bryson on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h

#include <assert.h>

template <class Type>
class BinaryTreeNode
{
private:
    //data members
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rigtChild;
public:
    //methods
    BinaryTreeNode<Type>();
    BinaryTreeNode<Typ>(Type data);
    //getters and setters
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    BinaryTreeNode<Type> * getLeftChild();
    void setLeftChild(BinaryTreeNode<Type> * left);
    BinaryTreeNode<Type> * getRightChild();
    void setRighthild(BinaryTreeNode<Type> * right);
};

//template definitions

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node <Type>(data)
{
    
}

//root getter and settter
template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRoot()
{
    return root;
}

//leftChild getter and setter
template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this->left = left;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return leftChild;
}

//rightChild getter and setter
template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this->right = right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return rightChild;
}









#endif /* BinaryTreeNode_h */
