//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Brailow, Parker on 3/27/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "BinaryTreeTester.hpp"

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
    
    testTree.demo();
    testTree.inOrderTraversal();
}
