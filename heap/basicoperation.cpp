#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size= size+1;
        int index = size;
        arr[index]=val;

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


// we are deleting only root node

    void deletefromheap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return ;
        }
 
    arr[1]=arr[size];

    size--;
  int i=1;
    while(i<size){
        int leftindex=i*2;
        int rightindex=i*2+1;

        if(leftindex<size && arr[i]<arr[leftindex]){
            swap(arr[i],arr[leftindex]);
            i=leftindex;
        }
        else if(rightindex<size && arr[i]<<arr[rightindex]){
            swap(arr[i],arr[rightindex]);
            i=rightindex;
        }
        else
        {
            return ;
        }
        
    }

    }




};

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest !=i){
        swap(arr[largest],arr[i]);
        heapify(arr ,n , largest);
    }

}

int main(){
    heap h;
    h.insert(55);
    h.insert(32);
    h.insert(56);
    h.insert(9);
    h.insert(87);
    h.insert(78);
    h.insert(76);
    h.print();

    h.deletefromheap();
    h.print();
    

  int arr[6]={-1,45,54,34,23,67};
  int n=6;
  for(int i =n/2 ; i>0 ;i--)
  {
    heapify(arr,n,i);
   
  }

  cout<<"printing your array now"<<endl;

  for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
  }


    return 0;
}