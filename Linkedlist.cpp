#include "Linkedlist.h"
#include <iostream>
#include <string.h>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

 Linkedlist::Linkedlist(int *arr,int len){
    node *temp={NULL};
    node *last;
    int i;
    first = new node;
    first->x = arr[0];
    first->next=NULL;
    last=first;
    
    for (i=1; i<len; i++){
        temp = new node;
        temp->x = arr[i];
        temp->next = NULL;
        last->next=temp;
        last=temp;
    }

}

Linkedlist::~Linkedlist() {
    node *p=first;
    while(first)
    {
    first=first->next;
    delete p;
    p=first;
    }
}

void Linkedlist::display(int length){
    node *temp;
    temp = first;
    temp->next=first->next;
    while (length--){
        cout<<temp->x<<endl;
        temp =temp->next;
    }
}

int Linkedlist::countnodes(){
    node *temp;
    temp = first;
    temp->next=first->next;
    int count={0};
    while (temp!= NULL){
        if (temp!=NULL){
        count++;
        temp =temp->next;
        }
        else{
        }
    
    }
    return count;
}

void Linkedlist::insert(int position, int num){
    int length = countnodes();
    node *newini;
    node *temp={0};
    node *q;
    if (position ==0){
        newini = new node;
        newini->x=num;
        newini->next = first;
        first = newini;
    }
    else if (position >=length){
        temp = first;
        temp->next=first->next;
        while(temp->next!=NULL){
            temp=temp->next;
    }
        newini = new node;
        newini->x=num;
        newini->next=NULL;
        temp->next=newini;
    }
    else if (position >0 && position <length){
        temp = first;
        temp->next=first->next;
        while(position--){
            q=temp;
            temp = temp->next;
        }
        newini = new node;
        newini->x=num;
        q->next=newini;
        newini->next=temp;
        
    }
}

node* Linkedlist::search(int num){
    node *temp;
//    node *q;
    temp = first;
//    q = first;
    temp->next=first->next;
    while(temp!=NULL){
        if (temp->x==num){
            return temp;
        }
        else {
            temp=temp->next;
        }
    }
    return NULL;
}

LoopedLinkedlist::LoopedLinkedlist(int *arr, int len){
    node *temp={NULL};
    node *last;
    int i;
    first= new node;
    first->x = arr[0];
    first->next=NULL;
    last=first;
    
    for (i=1; i<len; i++){
        temp = new node;
        temp->x = arr[i];
        temp->next = NULL;
        last->next=temp;
        last=temp;
    }

//    last->next=first;
}

int LoopedLinkedlist::loopcheck(int length){
    node* i;
    node* q;
    i=first;
    q=first;
    int j;
    
    for (j=0;j<length||i!=q;j++){
        i=i->next;
        q=q->next;
        if(q!=NULL){
        q=q->next;
        }
        else{
            break;
        }
        
    }
    
    if(i==q){
        cout<<"Loope Exists, calling dellLoop function to delete loop"<<endl;
        DellLoop(q);
    }
    else{
        return 0;
        
    }
}
    
    
int LoopedLinkedlist::DellLoop (node* x){
    node* y = first;
    node* q = x;
    int i;
    if(q==NULL){
        return 0;
    }
    for(i=0;y!=q;i++){
        y=y->next;
        q=q->next;
    }
    for(i=0;q->next!=y;i++){
        q=q->next;
    }
    q->next=NULL;
    cout<<"Loop Deleted"<<endl;
    return 1;
}
//LoopedLinkedlist::~LoopedLinkedlist(){
//    int testlength = countnodes();
//    node *p=first;
//    while(testlength--)
//    {
//    first=first->next;
//    delete p;
//    p=first;
//    }
//
//}


