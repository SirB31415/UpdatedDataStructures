//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Brailow, Parker on 3/27/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Stuctures/Nonlinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
