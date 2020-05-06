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
    return 0;
}