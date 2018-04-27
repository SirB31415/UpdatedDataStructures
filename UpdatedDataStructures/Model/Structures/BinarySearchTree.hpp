//
//  BinarySearchTree.hpp
//  UpdatedDataStructures
//
//  Created by Brailow, Parker on 4/9/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculatedSize(BinaryTreeNode<Type> * startNode);
    int calculatedHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
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
int BinarySearchTree<Type> :: calculatedSize(BinaryTreeNode<Type> * startNode)
{
    return -1;
}
template <class Type>
int BinarySearchTree<Type> :: calculatedHeight(BinaryTreeNode<Type> * startNode)
{
    return -1;
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * startNode)
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    
}
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * preStart)
{
    
}
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * postStart)
{
    
}
template <class Type>
void BinarySearchTree<Type> :: destroyTree(BinaryTreeNode<Type> * node)
{
    
}
template <class Type>
BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current)
{
    
}
template <class Type>
BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current)
{
    
}
template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    
}
template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    
}
template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}
template <class Type>
BinaryTreeNode<Type> * getRoot()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * node)
{
    
}
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}
template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
}
template <class Type>
void BinarySearchTree<Type> :: remove(Type value)
{
    
}
template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    
}
template <class Type>
Type BinarySearchTree<Type> :: findMaximum()
{
    
}
#endif /* BinarySearchTree_hpp */
