//
//  Hashtable.hpp
//  UpdatedDataStructures
//
//  Created by Brailow, Parker on 4/27/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "../Node/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
Hashtable<Type> :: HashTable()
{
    capacity = 101;
    internalStorage = new HashNode<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}
template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}
template <class Type>
Hashtable<Type> :: HashNode<Type> ** internalStorage()
{
    
}
template <class Type>
long Hashtable<Type> :: size()
{
    
}
template <class Type>
long Hashtable<Type> :: capacity()
{
    
}
template <class Type>
double Hashtable<Type> :: loadFactor()
{
    
}
template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    
}
template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    
}
template <class Type>
void Hashtable<Type> :: resize()
{
    
}
template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type>* insertedNode)
{
    
}
template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type>* insertedNode, long index)
{
    
}
template <class Type>
void Hashtable<Type> :: insert(Type data)
{
    
}
template <class Type>
long Hashtable<Type> :: getSize()
{
    
}

#endif /* Hashtable_hpp */
