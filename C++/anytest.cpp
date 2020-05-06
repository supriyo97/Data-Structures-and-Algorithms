#include <iostream>

int main(){
    int n;
    std::cout<<"Enter n: "<<"\n";
    std::cin>>n;
    int *arr = new int[n+1];
    std::cout<<arr[3]<<std::endl;
}