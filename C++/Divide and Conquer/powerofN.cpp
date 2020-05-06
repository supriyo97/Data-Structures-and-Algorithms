#include <iostream>

/*========================================================================
Brute force method using for loop which takes O(n) Time to execute
========================================================================*/

int powerofN_BF(int n,int p){
    int result = 1;
    for (int i=1; i<=p; i++){
        result *= n;
    }
    return result;
}

/*========================================================================
Divide and Conquer method which takes o(n) time to execute
========================================================================*/

int powerofN_DC1(int n,int p){
    int result;
    if(p==1)return n;
    else{
        int mid = p/2;
        if(p%2==0){
            result = powerofN_DC1(n,mid)*powerofN_DC1(n,mid);
        }else{
            result = n*powerofN_DC1(n,mid)*powerofN_DC1(n,mid);
        }
    }
    return result;
}

/*========================================================================
Divide and Conquer method which takes o(logn) time to execute
========================================================================*/

int powerofN_DC2(int n,int p){
    int result;
    if(p==1)return n;
    int temp = powerofN_DC2(n,p/2);
    if(p%2==0){
        result = temp*temp;
    }else{
        result = n*temp*temp;
    }
    return result;
}

//Main Function 
int main(){
    int a,b,choice;
    std::cout<<"Enter the no: ";
    std::cin>>a;
    std::cout<<"Enter the power: ";
    std::cin>>b;
    std::cout<<"Which Algo do you want to use?\n1.Brute Force(O(n))\n2.Divide and Conquer(O(n))\n3.Divide and Conquer(O(logn))\n";
    std::cin>>choice;
    if(choice==1)std::cout<<"Result is: "<<powerofN_BF(a,b)<<"\n";
    if(choice==2)std::cout<<"Result is: "<<powerofN_DC1(a,b)<<"\n";
    if(choice==3)std::cout<<"Result is: "<<powerofN_DC2(a,b)<<"\n";
}