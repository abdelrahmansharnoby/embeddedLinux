#include<iostream>



int max(int *p , int size){
    int max = p[0];
    for(int i=0;i<size;i++){
        if(p[i]>max){
            max = p[i];
        }
    }
    return max;
}

int main(int argc, const char** argv) {
    int arr[5] = {1,10,6000,300,700};
    std::cout<<"the max of the array is "<<max(arr, 5)<<std::endl;
    return 0;
}