#include<iostream>
using namespace std;

void insertion(int arr[], int n){
    for(int j =2; j <= n ; j++ ){
        int key = arr[j] ;
        int i = j -1;
        while( i>=0 && arr[i] > key){
            arr[i+1]=arr[i];
            i--;
            }
        arr[i+1] = key ;
        }
        }

void display(int arr[] , int size){
    for(int i =0;i<=size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    }

int main()
{
    int arr[] ={2,4,5,2,5,2,8,1,3};
    int size = sizeof(arr)/sizeof(int) -1;
    cout <<"Before : \n ";
    display(arr,size);
    insertion(arr,size);
    
    cout <<"After : \n ";
    display(arr,size);
    return 0;
}
