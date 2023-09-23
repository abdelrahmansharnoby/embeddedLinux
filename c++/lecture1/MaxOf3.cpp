#include<iostream>



int maxOfThree(int x , int y , int z){
    if(x>=y && x>=z){

        return x;
    }
    else if(y>=x && y>=z){
        return y;
    }
    else{
        return z;
    }


}

int main (){

    int x;
    x = maxOfThree(2,2,1);
    std::cout<<x<<std::endl;

    return 0;
}