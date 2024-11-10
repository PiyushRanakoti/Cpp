#include<iostream>
using namespace std;

int partition(int arr[],int l ,int r ){
    int p = arr[r];
    for(int j = l;j<r;j++){
        if(arr[j]>p){
            swap(arr[l],arr[j]);
            l++;
        }
    }     
    swap(arr[l],arr[r]);
    return l;
    }
 
void quicksort(int arr[],int l , int r ){
    if(l<r){
        int p = partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
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
    
    quicksort(arr,0,size-1);
    
    cout <<"After : \n ";
    display(arr,size);
    return 0;
}

/* 
Before :
 2 4 5 2 5 2 8 1 3
After :
 8 5 5 4 3 2 2 2 1 */
