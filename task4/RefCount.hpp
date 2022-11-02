#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class RefCount {
    private:
        T* data_; // data_ can be of any type
        int* counter_; //counter is of type int
    public:
        // constructor which has as parameter a pointer to a string
        // in it, the parameter data is copied to data_
        // the counter is initialised
        RefCount(T* data) : data_{data}, counter_{new int} {
            *counter_ = 1; // the counter is set to 1
        }

        // constructor which has as parameter a value of type RefCount
        RefCount(RefCount const& s) {
            data_ = s.data_;
            counter_ = s.counter_;
            (*counter_)++;
        }

        // equal operator which will set the current variables equal to the ones passed as parameter.
        RefCount& operator=(RefCount const& s){
            if (this == &s) {
                return *this;
            }
            this->data_ = s.data_;
            this->counter_ = s.counter_;
            this->counter_++;
            return *this;
        }

        // the print function, which prints just the counter
        void print(){
            std::cout << *counter_ << '\n' << std::endl;
        };

        // destructor, if the counter is 0, it will delete data_ and free memory
        ~RefCount(){
            if((*counter_) == 0){
                delete data_;
            }
            (*counter_)--;
        }

        // returns the data_
        T* get_data(){
            return data_;
        }
                
    };