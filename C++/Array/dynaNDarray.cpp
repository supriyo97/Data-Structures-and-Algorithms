#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter no of rows and columns: ";
    cin>>row>>column;
    //creating a 2D array Dynamically in memory in the runtime
    //--------------------------------------------------------
    int **arr = new int*[row];
    for (int i=0;i<row;i++){
        arr[i] = new int[column];
    }
    //--------------------------------------------------------

    //second method for c++11 and above
    //---------------------------------
    auto arr2 = new int[2][3];
    //---------------------------------

    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[0][2] = 3;
    // arr[1][0] = 6;
    // arr[1][1] = 7;
    // arr[1][2] = 8;
    for (int l=0;l<row;l++){
        std::cout<<"Enter "<<column<<" numbers for row "<<l<<" : ";
        for(int k=0;k<column;k++){
            std::cin>>arr[l][k];
        }
        std::cout<<std::endl;
    }

    for(int l=0;l<row;l++){
        for(int k=0;k<column;k++){
            cout<<arr[l][k]<<" ";
        }
        cout<<endl;
    }

    //Deallocate 2D array
    for (int i=0;i<row;i++){
        delete arr[i];
    }
    delete arr;

    /* Create a 3D dynamic array*/
    int*** ptr = dynamic3DArray(2,3,2);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout<<"(";
            for(int k = 0; k < 2; k++)
            {
                std::cout<<ptr[i][j][k]<<",";
            }
            std::cout<<"),";
        }
        std::cout<<std::endl;
    }

    return 0;
}

int*** dynamic3DArray(int row, int col, int z){
    int*** ptr = new int**[row];
 
    for(int i = 0; i < row; i++)
    {
        ptr[i] = new int*[col];
        for(int j = 0; j < col; j++)
        {
            ptr[i][j] = new int[z];
        }
 
    }
 
    ptr[0][0][0] = 1;
    ptr[0][0][1] = 2;
    ptr[0][1][0] = 3;
    ptr[0][1][1] = 4;
    ptr[0][2][0] = 5;
    ptr[0][2][1] = 6;
 
 
    ptr[1][0][0] = 11;
    ptr[1][0][1] = 12;
    ptr[1][1][0] = 13;
    ptr[1][1][1] = 14;
    ptr[1][2][0] = 15;
    ptr[1][2][1] = 16;
 
 
    return ptr;
}