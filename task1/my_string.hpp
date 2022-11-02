#include <iostream>
#include <cstring>
using namespace std;

class my_string {
    // attributes of the class my_string
    private: 
        char* str_; // it is a pointer of type char (task 1)
        int* counter_; // it is a pointer of type int used for reference counting (task 2)
    public:
        // empty constructor, str_ is initialised to null, the counter is initialised to 1
        my_string(){
            str_ = NULL;
            counter_ = new int;
            *counter_ = 1;
        };
        
        // constructor which has as parameter a pointer to a string
        my_string(const char* str){
            int l = strlen(str) + 1; //getting the total length of the string + 1 (because of the null pointer)
            str_ = new char[l]; //creating a new string based on the lenght we just calculated
            strcpy(str_, str); //copy the content of the str_ passed as parameter to the str (attribute of the class)
            counter_ = new int; 
            *counter_ = 1; //initialising the counter to 1
        };   

        // constructor which has as paramenter a value of type my_string
        my_string(my_string const& s){
            str_ = s.str_;
            counter_ = s.counter_;
            (*counter_)++;
        };

        // equal operator which will set the current variables equal to the ones passed as parameter.
        my_string& operator= (my_string const& s){
            if (this == &s) {
                return *this;
            }
            this->str_ = s.str_;
            this->counter_ = s.counter_;
            this->counter_++;
            return *this;
        };


        // this is the destructor, it decreases the counter and if the counter is 0, it will free the memory
        ~my_string(){
            (*counter_)--;
            if(*counter_ == 0){
                std::cout << "Counter is " <<*counter_ << "! Freeing memory now..." << std::endl; //TASK 3: this is the only place in which the counter is 0
                delete str_; 
            }
        };

        // (getter) this fucntion accepts as parameter an integer, it will return the char at that position
        char getChar(const int& i) const{
            return str_[i];
        };

        // (setter) this function accepts as parameters an int and a char,
        // it will change the char at position i equal to c.
        void setChar(const int& i, const char& c){
            str_[i] = c;
        };

        // print function which will print both the string and the counter
        void print(){
            std::cout << str_ << " [" << *counter_<< "]" << std::endl;
        };
};
