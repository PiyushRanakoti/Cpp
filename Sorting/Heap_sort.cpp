#include<iostream>
using namespace std;

void Heapify(int A[], int i , int n) {    
    int l = 2*i + 1, r = 2*i + 2, largest = i;
    if(l < n && A[l] < A[largest])
        largest = l;
    if(r < n && A[r] < A[largest])
        largest = r;

    if(largest != i) {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
       
        Heapify(A, largest, n);
    }
}

void build(int arr[], int n) {
    for(int i = n/2 - 1; i >= 0; i--)
        Heapify(arr, i, n);
}

void heapsort(int A[], int n) {
    build(A, n);
    for(int i = n - 1; i > 0; i--) {
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        Heapify(A, 0, i);
    }
}

        
void display(int arr[] , int size){
    for(int i =0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    }

int main()
{
    int arr[] ={2,4,5,2,5,2,8,1,3};
    int size = sizeof(arr)/sizeof(int) ;
    cout <<"Before : \n ";
    display(arr,size);
    heapsort(arr,size);
    
    cout <<"After : \n ";
    display(arr,size);
    return 0;
}
