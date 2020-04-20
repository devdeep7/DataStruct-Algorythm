//#include <iostream>
//#include <string.h>
//#include <chrono>
//using namespace std;
//using namespace std::chrono;
//
//
//
//void create (int size){
//    prac.a = new int [prac.size];
//    
//}
//int main(){
//    struct stack{
//        int size;
//        int top;
//        int *a;
//    };
//    
//    struct stack prac;
//    cin>>prac.size;
//    prac.a = new int [prac.size];
//    
//    
//    
//}
#include <iostream>
#include <string.h>
#include <chrono>
#include <vector>
#include "Linkedlist.h"
using namespace std;
using namespace std::chrono;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
//    Linkedlist dev();
    LoopedLinkedlist dev(a,9);
    dev.loopcheck(9);
    dev.display(9);
//    node *y = dev.search(99);
//    cout<<y->x<<endl;
    
    
    return 0;
    
}