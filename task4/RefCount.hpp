#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class RefCount {
    private:
        T* data_;
        int* counter_;
    public:
        RefCount(T* data) : data_{data}, counter_{new int} {
            *counter_ = 1;
        }

        RefCount(RefCount const& s) {
            data_ = s.data_;
            counter_ = s.counter_;
            (*counter_)++;
        }

        RefCount& operator=(RefCount const& s){
            if (this == &s) {
                return *this;
            }
            this->data_ = s.data_;
            this->counter_ = s.counter_;
            this->counter_++;
            return *this;
        }

        void print(){

            std::cout << *counter_ << std::endl;
        };

        ~RefCount(){
            if((*counter_) == 0){
                delete data_;
            }
            (*counter_)--;
        }

        T* get_data(){
            return data_;
        }
                
    };