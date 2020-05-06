#include <iostream>

int TOH(int n,int a,int b,int c){
    static int ci = 0;
    if(n>0){
        TOH(n-1,a,c,b);
        std::cout<<"("<<a<<","<<c<<")"<<",";
        ci++;
        TOH(n-1,b,a,c);
    }
    return ci;
}

int main(){
    int nd,start=1,medium=2,end=3;
    std::cout<<"Enter no of disk: "<<"\n";
    std::cin>>nd;
    int no_of_calls = TOH(nd,start,medium,end);
    std::cout<<no_of_calls<<"\n";
    return 0;
}