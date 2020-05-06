#include <iostream>

#define ARRAYLEN(arr) (sizeof(arr)/sizeof(arr[0]))

int main(){
    int a[] {132,5355,23245,3446,231,23,235,34};
    int i,x = 2;
    for(i=0;i<ARRAYLEN(a);i++){
        if(x == a[i]){
            std::cout<<"Element "<<x<<" present in "<<i<<std::endl;
            break;
        }
    }
    if(i == ARRAYLEN(a))std::cout<<"Element is not present"<<std::endl;
}