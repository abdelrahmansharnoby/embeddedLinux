#include<iostream>


int main(int argc, const char** argv) {

    int side1 , side2 , hyp;
    std::cout<<"enter first side "<<std::endl;
    std::cin>>side1;
    std::cout<<"enter second side "<<std::endl;
    std::cin>>side2;
    std::cout<<"enter hypotness side "<<std::endl;
    std::cin>>hyp;
    if((side1*side1)+(side2*side2) == (hyp*hyp)){
        std::cout<<"right angle"<<std::endl;
    }
    else{
        std::cout<<"not right angle"<<std::endl;
    }
    return 0;
}