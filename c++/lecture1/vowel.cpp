#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    char arr[5] = {'a','o','u','i','e'};
    char x;
    std::cout<<"Enter a letter"<<std::endl;
    std::cin>>x;
    for(int i =0;i<5;i++){
        if(std::tolower(x)==arr[i]){
            std::cout<<"the letter "<<x<<" is a vowel"<<std::endl;
            return 0;
        }
    }
    std::cout<<"letter "<<x<<" is not a vowel"<<std::endl;
    return 0;
}
