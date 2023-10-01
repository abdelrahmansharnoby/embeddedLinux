#include <iostream>



void search(int *p,int size){
    std::cout<<"please Enter a number to search for"<<std::endl;
    int x;
    std::cin>>x;
    for(int i=0;i<size;++i){
        if(x == p[i]){
            std::cout<<"number is found"<<std::endl;
            return;
        }
    }
     std::cout<<"number not found"<<std::endl;
}

int main(int argc, const char** argv) {
    int arr [5] ={11,33,545,434,44};
    search(arr, 5);
    return 0;
}