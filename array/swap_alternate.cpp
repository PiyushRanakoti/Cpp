#include <iostream>
using namespace std;
int main() {
    int a[]= {1,2,3,4,5};
    
    for(int i =0 ; i< 5;i+=2){
        if(i+1 <5)
            swap(a[i],a[i+1]);
    }
    
    for(int i =0 ; i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
