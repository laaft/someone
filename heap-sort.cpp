#include<iostream>
using namespace std;
#include<bits/stdc++.h>
 
#define h 10
long arr[h]; 
long h_size = h; // size of heap
 
void Heapify(long i){
    long largest;
 

    // Find index of first, second, third child
    long l = 3 * i + 1, m = 3 * i + 2 ,  r = 3 * i + 3;

     //Find largest among the parent and its child. And save that index
    
    if(l < h_size && arr[l] > arr[i])
        largest = l;
    else
        largest = i;
 
    if(m < h_size && arr[m] > arr[largest])
        largest = m;
 
    if(r < h_size && arr[r] > arr[largest])
        largest = r;
 
    
     //If the largest index is not of parent then there is another bigger value
     //So swap that value with parent
     
    if(largest != i){
        std::swap(arr[i], arr[largest]);
        Heapify(largest);
    }
}
 
void max_Heap(){
    long j;
     // Starting from the last parent to root max heapify
     
    for(j = h_size / 3 - 1; j >= 0; --j)
        Heapify(j);
}
 
void heap_s(){
    max_Heap();
 
    long i;
    
     //Send biggest value root in the end
     //then max heapify from root again
     //this procedure sorts in ascending order because of max heap

    for(i = h_size-1; i > 0; --i){
        std::swap(arr[0],arr[i]);
 
        --h_size;
        Heapify(0);
    }
}
 
int main(){
    
    long i = 0;
    for(i=0; i<h; i++){
        cin>>arr[i];
    }
 
    heap_s();
    for(i = 0; i < h; ++i){
    	cout<<arr[i]<<" ";
	}
    return 0;
}
