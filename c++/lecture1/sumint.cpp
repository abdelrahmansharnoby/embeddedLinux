#include<iostream>

int sum(int x){
    int sum = 0;
    while ((x != 0))
    {
        sum += x%10;
        x /= 10;
    }

    return sum;
}

int main(int argc, char const *argv[])
{   
    int x;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>x;
    std::cout<<"the sum of the number "<<x<<" is "<<sum(x)<<std::endl;
    return 0;
}
