#include <iostream>

int main(){
    int a,b,L;
    std::cout<<"Enter two nos: ";
    std::cin>>a>>b;
    int max = a>b?a:b;
    for (L=max;L<a*b;L+=max){
        if((L%a == 0) && (L%b == 0)) break;
    }
    std::cout<<"LCM is: "<<L<<std::endl;
    return 0;
}