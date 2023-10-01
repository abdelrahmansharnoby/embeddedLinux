#include <codecvt>
#include <cstdlib>
#include<iostream>
#include "str.hpp"
int main(int argc, const char** argv) {
   str s1 =  str("hello world!");
//    str s2 = str("hellow bbe");
//    std::cout<<s1;
//    std::cout<<s2;
//    std::cout<<s1.size()<<std::endl;
//    //str s2(s1);
//    std::cout<<"iam lost"<<std::endl;
//    //std::cout<<s2;
   
//    s2.changestr("this data is shit man");
//    //std::cout<<s2;
//    std::cout<<s1.size()<<std::endl;
//    std::cout<<s2.size()<<std::endl;
//    std::cout<<s2;
//    std::cout<<s1;
//    //std::cout<<s3;
//    str s3 = str("iam");
//    str s4(s3);
//    str s5(s3);
//    std::cout<<s3;
//    std::cout<<s4;
//    std::cout<<s5;
str s2(s1);
str s3(s1);
str s4(std::move(s1));
std::cout<<s3;
std::cout<<s2;
std::cout<<s4;
s3.changestr("please work i want to sleep");
str s5(std::move(s3));
std::cout<<s5;
    return 0;
}