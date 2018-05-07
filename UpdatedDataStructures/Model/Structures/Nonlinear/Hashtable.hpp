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
    return -1;
}
template <class Type>
long Hashtable<Type> :: capacity()
{
    return -1;
}
template <class Type>
double Hashtable<Type> :: loadFactor()
{
    return -1;
}
template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    return -1;
}
template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    return false;
}
template <class Type>
void Hashtable<Type> :: resize()
{
    return null;
}
template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type>* insertedNode)
{
    return -1;
}
template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type>* insertedNode, long index)
{
    return -1;
}
template <class Type>
void Hashtable<Type> :: insert(Type data)
{
    this->size++;
    if(((this->size * 1.000) / this->capacity) > this->loadFactor)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    
    if(internalStorage[index] == nullptr)
    {
        internalStorage[index] = temp;
    }
    else
    {
        long updatedPosition = handleCollision( index);
        if (updatedPosition != -1)
        {
            internalStorage[updatedPosition] = temp;
        }
    }
}
template <class Type>
long Hashtable<Type> :: getSize()
{
    return -1;
}

#endif /* Hashtable_hpp */
