#include <iostream>

int** createDynaArray(int,int);
int deleteDynaArray(int**,int);
int displayMultipliedArray(int**,int,int);

int main(){
    int arows,acolumns,brows,bcolumns;
    std::cout<<"Enter no rows and columns of matrix a: ";
    std::cin>>arows>>acolumns;
    int** a = createDynaArray(arows,acolumns);

    for (int l=0;l<arows;l++){
        std::cout<<"Enter "<<acolumns<<" numbers for row "<<l<<" : ";
        for(int k=0;k<acolumns;k++){
            std::cin>>a[l][k];
        }
        std::cout<<std::endl;
    }

    std::cout<<"Enter no rows and columns of matrix b: ";
    std::cin>>brows>>bcolumns;
    int** b = createDynaArray(brows,bcolumns);

    for (int l=0;l<brows;l++){
        std::cout<<"Enter "<<bcolumns<<" numbers for row "<<l<<" : ";
        for(int k=0;k<bcolumns;k++){
            std::cin>>b[l][k];
        }
        std::cout<<std::endl;
    }

    int** c = createDynaArray(arows,bcolumns);
    int sum = 0;

    for (int i = 0; i < arows; i++){
        for (int j = 0; j < bcolumns; j++){
            for (int k = 0; k < brows; k++){
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    
    std::cout<<"Product of arrays: "<<std::endl;
    displayMultipliedArray(c,arows,bcolumns);

    deleteDynaArray(a,arows);
    deleteDynaArray(b,brows);
    deleteDynaArray(c,arows);
    return 0;
}

int** createDynaArray(int row,int cols){
    int** array = new int* [row];
    for(int i=0;i<row;i++){
        array[i] = new int[cols];
    }
    return array;
}

int deleteDynaArray(int** arr,int row){
    for (int i=0;i<row;i++){
        delete arr[i];
    }
    delete arr;
    return 0;
}

int displayMultipliedArray(int** arr,int row,int cols){
    for (size_t i = 0; i < row; i++){
        for (size_t j = 0; j < cols; j++){
            std::cout<<arr[i][j]<<" ";   
        }
        std::cout<<std::endl;
    }
    return 0;
}