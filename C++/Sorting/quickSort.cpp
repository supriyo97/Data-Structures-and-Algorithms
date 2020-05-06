#include <iostream>

#define ARRAYLEN(a) (sizeof(a)/sizeof(a[0]))

int partitionList(int* arr,int start,int end){
    int pivot = arr[end];
    int pindex = start;
    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
            std::swap(arr[i],arr[pindex]);
            pindex++;
        }
    }
    std::swap(arr[pindex],arr[end]);
    return pindex;
}

int quickSort(int* arr,int start,int end){
    if(start<end){
        int partIndex = partitionList(arr,start,end);
        quickSort(arr,start,partIndex-1);
        quickSort(arr,partIndex+1,end);
    }
    return 0;
}
int main(){
    int a[] = {4,45,65,322,666,242,12,53,23};
    quickSort(a,0,ARRAYLEN(a)-1);
    for(auto i:a){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    
    return 0;
}