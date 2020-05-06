#include<iostream>

#define ARRAYLEN(arr) (sizeof(arr)/sizeof(arr[0]))

// template <typename T> mergeSort(T *arr)

void merge(int* a,int start,int mid,int end){
    int i=start,j=mid+1,k=start;
    int resultarr[100];
    while(i<=mid && j<=end){
        if(a[i]<a[j]){resultarr[k++]=a[i++];}
        else{resultarr[k++]=a[j++];}
    }
    while(i<=mid){
        resultarr[k++]=a[i++];
    }
    while(j<=end){
        resultarr[k++]=a[j++];
    }
    for(int s=start;s<=end;s++){
        a[s] = resultarr[s];
    }
}

int mergeSort(int* arr,int start,int end){
    
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,(mid+1),end);
        merge(arr,start,mid,end);
    }
    return 0;
}

int main() {
    int a[] = {4,45,65,322,666,242,12,53,23};
    
    // int resultArray[ARRAYLEN(a)+ARRAYLEN(b)];
    mergeSort(a,0,(ARRAYLEN(a)-1));
    std::cout<<"Sorted Array: ";
    for(auto i:a){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    
    return 0;
}