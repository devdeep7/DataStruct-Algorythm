#include <iostream>
#include <string.h>
using namespace std;


void reverse (int *arrptr, int length){           //reversing an array O(n)
    int temp;
    int i,j;
    for ( i=0,j=length-1; i<j;i++, j--){
        temp = arrptr[i];
        arrptr[i] = arrptr[j];
        arrptr[j]=temp;
    }
        
}
    
  

int search (int *arrptr, int num, int length){  //binary search algo (BAsic)
    int low={0};
    int high={length};
    int mid={(low+high)/2};
    
    while(low<=mid){
        if (num == arrptr[mid]){
            return mid;
        }
        else if (num>arrptr[mid]){
                low = mid+1;
                mid = (low+high)/2;
            }
        else {
                high = mid-1;
                mid = (low+high)/2;
            }
        }
return -1;
}

void display(int *arrptr, int length){       //Displaying the array
    for (int i=0; i<length; i++)
    cout << arrptr[i]<<endl;
    }

struct test {
        int *arr;
        int length;
        int size;
    };
    

int main(){
    
    
    int modi_length={0};
    
    struct test prac;
    cout<< "enter size of the array";
    cin >> prac.size;
    
    prac.arr = new int [prac.size];          //Dynamic array on the heap
    cout<<"enter the number of numbers";
    cin >> prac.length;
    cout << "enter the numbers";
    
//    cin >> arr[2];
    for (int i=0; i<prac.length; i++){      
        cin >> prac.arr[i];
    
    }
    
    display(prac.arr, prac.length);
    int result = search(prac.arr, 5, prac.length);
    cout<<result<<endl;
    
    reverse(prac.arr, prac.length);
    display(prac.arr, prac.length);
    
    delete [] prac.arr;                     //Clearing the heap
    return 0;
    
    
}
