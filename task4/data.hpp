#include <iostream>
#include <cstring>
using namespace std;

class my_string2
{
    char* str_; // it is a pointer of type char
    public:
        // empty constructor, str_ is initialised to null,
        my_string2(){
            str_ = NULL;
        };

        // constructor which has as parameter a pointer to a string
        my_string2(const char* str) {
            int l = strlen(str) + 1; //getting the total length of the string + 1 (because of the null pointer)
            str_ = new char[l];  //creating a new string based on the lenght we just calculated
            strcpy(str_, str); //copy the content of the str_ passed as parameter to the str (attribute of the class)
        };

        // this is the destructor, it will free the memory
        ~my_string2(){
            delete str_;
        };

        // (getter) this fucntion accepts as parameter an integer, it will return the char at that position
        char getChar(const int& i){
            return str_[i];
        };

        // (setter) this function accepts as parameters an int and a char,
        // it will change the char at position i equal to c.
        void setChar(const int& i, const char& c){
            str_[i] = c;
        };

        // print function which will print the string 
        void print(){
            std::cout << str_ << std::endl;
        };
};
