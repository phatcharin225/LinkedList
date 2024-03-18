#ifdef _LINKEDLIST_H
#define _LINKEDLIST_H
#include "../ChainNode/ChainNode.h"

class LinkedList
{
private:
    bool isFull();
    bool isEmpty();
    ChainNode *firstNode;
    int curSize;
    int maxSize;

public:
    LinkedList(int maxSize);
    ~LinkedList();
    int get_maxSize();
    int size();
    int indexOf(int e);
    int get(int i);
    void set(int i, int e);
    void add(int i, int e);
    int remove(int i); 
    void display();
    void clear();
    int min();
    int max();

    int oddCount();
    int EvenCount();
    float sum();
    float mean();
    void sort();

};
#endif