#include <cstddef>
#include<iostream>
#include<cstring>
#include <ostream>
#include"str.hpp"


str::str()=default;
//constructor
str::str(const char * data){
this->length = std::strlen(data);
this->data = new char[this->length + 1];
strcpy(this->data, data);
}

//Distractor
str::~str(){

    delete [] data;
    std::cout<<"destractor called"<<std::endl;
}
str::str(str && s1){
this->length = s1.length;
this->data = s1.data;

s1.length=0;
s1.data = nullptr;    
}
str::str(const str & mystring ): data(nullptr){
    std::cout<<"copy called at top"<<std::endl;
    this->length = mystring.length;
    std::cout<<"abl el if"<<std::endl;
    if(this->data){
        std::cout<<"did i reach here ?"<<std::endl;
        delete [] this->data;
        std::cout<<"did i reach here ? pt 2"<<std::endl;
    }
    std::cout<<"here abl new"<<std::endl;
    this->data = new char[this->length +1];
    std::cout<<"here b3d new"<<std::endl;
    strcpy(this->data, mystring.data);
    std::cout<<"copy called"<<std::endl;

}

size_t str::size(){
    return this->length;
}

std::ostream & operator << (std::ostream & out, const str & s){
    if(! s.data){
        return out<<"empty object"<<std::endl;
    }
    out<<s.data<<std::endl;
    return out;
}
void str::changestr(const char * s){
    delete[] this->data; // Delete the old data
    this->length = std::strlen(s);
    this->data = new char[this->length + 1];
    std::strcpy(this->data, s);
}
str & str::operator = (str && mystring){
if(this != & mystring){
    this->length = mystring.length;
    mystring.length=0;
    if(this->data){
        delete [] this->data;
    }
    this->data=mystring.data;
    mystring.data = nullptr;
}

return *this;
}
const char* str::c_str() const {
    return data;
}

str & str::operator=(const str & s1){
    if(this != &s1){
        this->length = s1.length;
        if(this->data){
            delete [] this->data;
        }
        this->data = new char[this->length +1];
        strcpy(this->data, s1.data);
    }
    return *this;
}

