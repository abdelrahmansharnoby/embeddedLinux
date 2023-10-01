#include <iostream>


void printevenodd(int *p,int size){
    for (int i=0;i<size;i++){
        if(p[i]%2==0){
            std::cout<<p[i]<<" -> EVEN"<<std::endl;
            continue;
        }
        std::cout<<p[i]<<" -> ODD"<<std::endl;
    }
}

int main(int argc, const char** argv) {
    int arr[5] ={1,22,35,67,12};
    printevenodd(arr, 5);
    return 0;
}