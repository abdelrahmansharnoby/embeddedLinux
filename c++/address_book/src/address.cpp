#include<iostream>
#include <queue>
#include <vector>
#include "string"
#include "address.hpp"

int main(int argc, const char** argv) {
    std::vector<std::string> data_base;
    run(data_base);
    return 0;
}

/*
funtion to print the menu of choices to do by the user
we have 6 options 
this function take void 
and return the choice of the user
*/
int print_menu(){
    int x;
    std::cout<<"what do you want to do?"<<std::endl;
    std::cout<<"Enter numbers from 1 to 6"<<std::endl;
    std::cout<<"1- List         | List all users    |"<<std::endl;
    std::cout<<"2- Add          | Adds an user      |"<<std::endl;
    std::cout<<"3- Delete       | Removes and user  |"<<std::endl;
    std::cout<<"4- Delete all   | Removes all users |"<<std::endl;
    std::cout<<"5- Search       | Search for a user |"<<std::endl;
    std::cout<<"6- Close        | close the program |"<<std::endl;
    std::cin>>x;
    return x;
}

void delete_all_users(std::vector<std::string> & x){
    x.clear();
}

void add_user(std::vector<std::string> & x){
std::string name;
std::cout<<"please enter a name to add"<<std::endl;
std::cin>>name;
x.push_back(name);
}
void list_users(std::vector<std::string> & x){
    std::cout<<"the name in the contact is "<<std::endl;
     for(std::string name:x){
        std::cout<<name<<std::endl;
    }
}

void delete_user(std::vector<std::string> & x){
    std::string name ;
    std::cout<<"enter a name to delete"<<std::endl;
    std::cin>>name;
    for(int i=0;i<x.size();i++){
        if(x[i] == name){
            x.erase(x.begin()+i);
            return;
        }
    }
    std::cout<<"this name not found enter name in the contact"<<std::endl;

}
void search_user(std::vector<std::string> x){
      std::string name ;
    std::cout<<"enter a name to search"<<std::endl;
    std::cin>>name;
    for(int i=0;i<x.size();i++){
        if(x[i] == name){
            std::cout<<"the name "<<name<<" found"<<std::endl;
            return;
        }
    }
    std::cout<<"this name not found enter name in the contact"<<std::endl;

}
void run(std::vector<std::string> & x){
    while (true){
    int choice = print_menu();
    switch (choice) {
        case 1:
        list_users(x);
        break;
        case 2:
        add_user(x);
        break;
        case 3:
        delete_user(x);
        break;
        case 4:
        delete_all_users(x);
        break;
        case 5:
        search_user(x);
        break;
        case 6:
        return;
        break;
    }
}
}