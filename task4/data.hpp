#include <iostream>
#include <cstring>
using namespace std;

class my_string2
{
    char* str_;
    public:
        my_string2(){};
        my_string2(const char* str) {
            int l = strlen(str) + 1;
            str_ = new char[l];
            strcpy(str_, str);
        };

        // my_string2& operator= (my_string2 const& s){
        //     if (this == &s) {
        //         return *this;
        //     }
        //     str_ = s.str_;
        //     return *this;
        // };
        ~my_string2(){
            delete str_;
        };
        char getChar(const int& i){
            return str_[i];
        };
        void setChar(const int& i, const char& c){
            str_[i] = c;
        };
        void print(){
            std::cout << str_ << std::endl;
        };
};
