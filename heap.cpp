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
 heap[i]=key;                //most recent element
 
 int p=(i-1)/2;              //parent of key

 while(heap[p]<heap[i]){      //if parent less than child, swap
  int h=heap[p];
  heap[p]=heap[i];
  heap[i]=h;

  i=p;

  p=(i-1)/2;
 }

}

void remove(){
  
 //int root=heap[0];
 size--;
 heap[0]=heap[size];
 
 int i=0;
int m=i;         //to store index with max
while(i<size){
 int l=2*i+1;         //left n right child
 int r=2*i+2;                                                                                                                           
 if(l<=size && heap[l]>heap[i])
   {
    m=l;                 
   }
 if(r<=size && heap[r]>heap[m])
  {
   m=r;
  }
 if(m!=i)                 //swap current with max of children
  {
   int max=heap[m];
   heap[m]=heap[i];
   heap[i]=max;
   i=m;
  }
else break;  
}

 
 display();

 }
  
  int m=0;

/*void heapify(int a[], int i, int n)
 {
   int root=a[i];
   a[i]=a[n];
    
   
   
   
     int l=2*i+1;
      int r=2*i+2;
       if(l<=n && a[l]>a[i])
          {
              m=l;
                 }
                  if(r<=n && a[r]>a[m])
                    {
                       m=r;
                         }
                          if(m!=i)
                            {
                               int max=heap[m];
                                  heap[m]=heap[i];
                                     heap[i]=max;
 heapify(a, m, n);
}
}

*/

//function to print heap array
void display(){
 for(int j=0; j<size; j++){
   cout<<heap[j]<<"\t";
  }
 cout<<"\n";
}

};

int main(){
  MaxHeap mh;
  mh.insert(9);
  mh.insert(7);
  mh.insert(18);
  mh.insert(2);
  mh.insert(5);
 mh.insert(67);
 mh.insert(20);
 mh.display();
mh.remove();  

return 0;
}

