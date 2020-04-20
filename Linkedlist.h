#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <iostream>
#include <string.h>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;



class node{
public:
    int x;
    node *next;
};

class Linkedlist{
public:
    node *first;
public:
    Linkedlist(){first=NULL;}
    Linkedlist(int *arr, int len);
    ~Linkedlist();
    void LoopedLinkedlist(int *arr, int len);
    int countnodes();
    void insert(int position, int num);
    node* search(int num);
    void display(int length);
};

class LoopedLinkedlist:public Linkedlist{
//private:
//    node *loop;
public:
     LoopedLinkedlist(){first=NULL;}
     LoopedLinkedlist(int *arr, int len);
//     ~LoopedLinkedlist();
     int loopcheck(int length);
     int DellLoop (node* x);
     int countnodes();
     void sort();
};

#endif