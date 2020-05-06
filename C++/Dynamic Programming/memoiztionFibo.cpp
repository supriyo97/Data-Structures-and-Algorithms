#include <iostream>

#define ARRAYLEN(a) (sizeof(a)/sizeof(a[0]))

int memFibo(int* a,int n){
    if(n<=1){
        a[n] = n;
        return n;
    }
    else{
        if(a[n-2] == 0){
            a[n-2] = memFibo(a,n-2);
        }
        if(a[n-1] == 0){
            a[n-1] = memFibo(a,n-1);
        }
        return a[n-2]+a[n-1];
    }
}
int main(){
    int n;
    std::cout<<"Enter the Fibonacci range: "<<"\n";
    std::cin>>n;
    static int *arr = new int[n+1];
    // memFibo(arr,n);
    // for(int i=0;i<ARRAYLEN(arr);i++){
    //     std::cout<<i<<" "<<std::endl;
    // }
    std::cout<<memFibo(arr,n)<<std::endl;
    return 0;
}