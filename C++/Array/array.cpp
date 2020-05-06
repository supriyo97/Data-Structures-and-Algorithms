#include <iostream>

template <class T>
class Array{
    protected:
        int pos,size;
        T *arr;
        T el;
    public:
        Array();
        ~Array();
        void insertEle(T el,int pos);
        // int deleteEle(T el);
        void showArray();
};

template <class T>
Array<T>::Array(){
    std::cout<<"Enter the size of the array: "<<std::endl;
    std::cin>>size;
    arr = new T[size];
    std::cout<<"Enter the elements: "<<std::endl;
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}

template <class T>
Array<T>::~Array(){
    delete[] arr;
}

template <class type>
void Array<type>::showArray(){
    std::cout<<"Elements of Array are: "<<std::endl;
    for (int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

template <class T>
void Array<T>::insertEle(T el,int pos){
    if (pos == 0){
        arr.push();
    }

}


// template <class T>
int main(){
    int choice;
    Array<char> a;
    std::cout<<"------------OPTION TO MODIFY------------"<<std::endl;
    std::cout<<"1.Insert\n2.Delete\n3.Show"<<std::endl;
    std::cin>>choice;
    if(choice==3){
        a.showArray();
    }
}