#include <iostream>
#include <cstring>
typedef std::string string;

int main(){
    string names[5];
    std::cout<<"Enter Names: ";
    for(int i=0;i<5;i++){
        getline(std::cin,names[i]);
    }
    
    for(int j=0;j<4;j++){
        for (size_t k = 0; k < 4-j; k++){
            int r = names[k].compare(names[k+1]);
            if(r>0){
                names[k].swap(names[k+1]);
            }
        }
        
    }
    std::cout<<"After arranging them into dictionary order: "<<"\n";
    for(int i=0;i<5;i++){
        std::cout<<names[i]<<"\n";
    }
}
