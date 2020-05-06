#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string str("23,4,55,m,,");
    std::vector<std::string> v;
    std::string sd = "";
    int i=0;
    while(str[i] != '\0'){
        
        if(ispunct(str[i])){
            v.push_back(sd);
            sd = "";
        }else{
        sd += str[i];        //or sd.push_back(str[i]);
        }
        i++;
    }
    v.push_back(sd);
    for(auto i : v){
        std::cout<<i<<std::endl;
    }
}