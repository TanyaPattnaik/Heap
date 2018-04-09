#include<iostream>
using namespace std;

class MaxHeap{
public:
int *heap;
int size;

public:
//constructor
MaxHeap(){
size=0;
heap=new int[100];
}

void insert(int key){
 size++;
 int i=size-1;
 heap[i]=key;
 
 int p=(i-1)/2;

 while(heap[p]<heap[i]){
  int h=heap[p];
  heap[p]=heap[i];
  heap[i]=h;

  i=p;

  p=(i-1)/2;
 }

}

/*void remove(){
  int root=heap[0];
  heap[0]=heap[size-1];
  size--;
  
  int curr=heap[0];
  int j=0;
  
  while(j<size-1){
    l=2*j+1;
    r=2*j+2;
    max=heap[j];
    if(
*/
void display(){
 for(int j=0; j<size; j++){
   cout<<heap[j]<<"\t";
  }

}

};

int main(){
  MaxHeap mh;
  mh.insert(9);
  mh.insert(7);
  mh.insert(18);
  mh.insert(2);
  mh.insert(5);
 mh.insert(20);
 mh.display();
  return 0;
}
