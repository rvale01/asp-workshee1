#include "my_string.hpp"

int main() {
    my_string s("Hello world");
    s.print();
    {
        my_string t = s; //creating a new object which has the same type

        // printing both objects to see how the refernce counter has updated
        s.print();
        t.print();
        std::cout << s.getChar(1) << std::endl; //printing the second char of the string
        s.print();
        t.print();
    };

    // changing the second char of the string
    s.setChar(1,'E');
    // printing the string to see the difference in the refernce counter and the string
    // After the curly brackets are closed, the reference counter has gone down by 1
    s.print();
    printf("\n\n");
}