#include <iostream>

#define LEFT 0
#define RIGHT 1
#define ARRAYLEN(arr) (sizeof(arr)/sizeof(arr[0]))

void rotateArr(int*,int,int,int = RIGHT);

int main(){
    int arr[] {20,5,56,23,7,2};
    int shift = 3;
    for (int i:arr) std::cout<<i<<" ";
    rotateArr(arr,ARRAYLEN(arr),shift,RIGHT);
    std::cout<<"\n";
    for (int i:arr) std::cout<<i<<" ";
    std::cout<<"\n";
}

void rotateArr(int* ar,int len,int shift,int direction){
    int temp;
    if(direction == RIGHT){
        while (shift){
            temp = ar[len-1];
            for (size_t i = len-1; i >= 1; i--){
                ar[i] = ar[i-1];
            }
            ar[0] = temp;
            shift--;
        }
    }
    else{
        while (shift){
            temp = ar[0];
            for (size_t i = 0; i < len-2; i++){
                ar[i] = ar[i+1];
            }
            ar[len-1] = temp;
            shift--;
        }
    }
    
}
