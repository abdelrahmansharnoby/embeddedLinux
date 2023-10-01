#include<iostream>


void fo(int & a)
{
    std::cout<<"&"<<std::endl;
}




void fo(int && a)
{
    std::cout<<"&&"<<std::endl;
}
void fo(const int & a)
{
    std::cout<<"const &"<<std::endl;
}


void fo(const int && a)
{
    std::cout<<"const &&"<<std::endl;
}

int main(int argc, const char** argv) {
    int && a =5;
    fo(a);
    const int && b =5;
    fo(b);
    return 0;
}