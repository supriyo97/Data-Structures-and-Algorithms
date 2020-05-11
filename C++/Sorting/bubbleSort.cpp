#include <iostream>

#define ARRAYLEN(arr) (sizeof(arr)/sizeof(arr[0]))

int bubbleSort(int*,int);

int main(){
    int arr[] {34,56,45};
    std::cout<<"Unsorted Array: ";
    for (auto i:arr) std::cout<<i<<" ";
    std::cout<<"\n";
    bubbleSort(arr,ARRAYLEN(arr));
    std::cout<<"Sorted Array: ";
    for (auto i:arr) std::cout<<i<<" ";
    std::cout<<"\n";
}

int bubbleSort(int* ar,int len){
    int swap,i,j;
    for(i=0; i<len-1; i++){
        swap = 0;
        for (j = 0; j < len-1-i; j++){
            if(ar[j]>ar[j+1]){
                std::swap(ar[j],ar[j+1]);
                swap = 1;
            }
        }
        if(swap == 0) return 0;    
    }
    return 0;
}