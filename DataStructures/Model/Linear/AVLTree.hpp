//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 4/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp:"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rigthRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<TYpe> * rigthLeftRotation (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<TYpe> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode (BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode (BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
}


#endif /* AVLTree_hpp */
