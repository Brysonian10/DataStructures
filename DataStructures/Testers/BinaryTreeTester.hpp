//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 4/22/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Linear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTree Tester
{
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    
public:
    void doTreeStuff();
};

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(7);
    testTree.insert(1);
    testTree.insert(24);
    testTree.insert(6);
    testTree.insert(66);
    testTree.insert(5);
    testTree.insert(25);
    testTree.insert(4380);
    testTree.insert(99);
    testTree.insert(9001);
    testTree.insert(101);
    
    testTree.inOrderTraversal();
}


#endif /* BinaryTreeTester_hpp */
