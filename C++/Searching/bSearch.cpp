#include <iostream>

#define ARRAYLEN(ar) (sizeof(ar)/sizeof(ar[0]))

int bSearch(int* array,int low,int high,int x){
    // if(low==high){
    //     return -1;
    // }
    if(low<high){
        int mid = (low+high)/2;
        if(x ==array[mid]){
            return mid;
        }
        else if (x<array[mid]){
            bSearch(array,low,mid,x);
        }
        else{
            bSearch(array,mid+1,high,x);
        }
    }
}

int main(){
    int arr[] {24,45,76,87,343,5656,3223,6566};
    int key = 3223;
    int pos = bSearch(arr,0,ARRAYLEN(arr),key);
    std::cout<<"Element "<<key<<" present at "<<pos<<std::endl;
    return 0;
}