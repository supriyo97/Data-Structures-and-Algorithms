#include <iostream>

#define ARRAYLEN(arr) (sizeof(arr)/sizeof(arr[0])) 

int* returnArrayM1(){
    static int array[] = {1,2,3,4};
    return array;
}

int* returnArrayM2(){
    int* array = new int[4];
    array[0] = 23;
    array[1] = 24;
    array[2] = 25;
    return array;
}

int main(){
    int* arr1 = returnArrayM1();
    int* arr2 = returnArrayM2();
    // for(int i=0;i<a1size;i++){
    //     std::cout<<"Array1: "<<arr1[i]<<" "<<std::endl;
    // }
    std::cout<<"Array1: "<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<std::endl;
    // std::cout<<"Array2: "<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<std::endl;
    for(int i=0;i<a2size;i++){
        std::cout<<"Array2: "<<arr2[i]<<" "<<std::endl;
    }
}