#include<iostream>

#define size 1024
int capacity = 0;

void deleteInArr(int *p,int num){
    int index;
    for (int i=0; i<capacity; i++) {
     if(p[i]==num){
        index = i;
     }
    }
    for(int i =index ;i<capacity-1;i++){
       p[i] = p[i+1] ;
    }
    capacity--;

}

void appendInArray(int *p,int num){
    p[capacity] = num;
    capacity++;
}
void printarr(int *p){
    for(int i=0;i<capacity;i++){
        std::cout<<p[i]<<std::endl;
    }
}

int main(int argc, const char** argv) {
    int arr[size];
    appendInArray(arr, 3);
    appendInArray(arr, 36);
    appendInArray(arr, 9);
    appendInArray(arr, 5);
    appendInArray(arr, 12);
    printarr(arr);
    std::cout<<"----------------------------------------------------"<<std::endl;
    deleteInArr(arr,12);
    printarr(arr);
    std::cout<<"----------------------------------------------------"<<std::endl;
    deleteInArr(arr,3);
    printarr(arr);
    std::cout<<"----------------------------------------------------"<<std::endl;
    return 0;
}