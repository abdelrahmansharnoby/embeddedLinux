#include <cstddef>
#include<iostream>
#include<cstring>
#include <ostream>
class str {

private:
char * data;
size_t length;
public:
str();
//constructor
str(const char * data);
str(const str & mystring );
str(str && mystring);

//Distractor
~str();

str & operator=(const str & s1);
size_t size();
void changestr(const char * s);
friend std::ostream & operator<< (std::ostream& out, const str & s);
str & operator = (str && s1);
const char* c_str() const;
};