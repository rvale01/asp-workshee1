#include "data.hpp"
#include "RefCount.hpp"

int main() {
    // creating a new my_string pointer
    my_string2 * string_value = new my_string2("Hello world");

    // creating a RefCounter object, passing the type in the '<>' (the type is my_string2)
    RefCount<my_string2> c_value(string_value);

    // getting the data from c_value and calling the print function (this will print the value of the string_value object)
    c_value.get_data()->print();
    c_value.print(); // printing the counter of the c_value object

    {
        // copying the c_value to t (auto is used so the type is set automatically)
        auto t = c_value;

        // Here the counter will be increased to 2
        // getting the data from c_value and calling the print function (this will print the value of the string_value object)
        c_value.get_data()->print();
        c_value.print(); // printing the counter of the c_value object

        // Here the counter will be increased to 2
        // getting the data from t and calling the print function (this will print the value of the string_value object)
        t.get_data()->print();
        t.print(); // printing the counter of the t object

        std::cout << c_value.get_data() -> getChar(1) << std::endl;

        // getting the data from c_value and calling the print function (this will print the value of the string_value object)
        c_value.get_data()->print();
        c_value.print(); // printing the counter of the c_value object

        // getting the data from t and calling the print function (this will print the value of the string_value object)
        t.get_data()->print();
        t.print(); // printing the counter of the t object
    };

    // getting the data from the c_value and calling the setChar function. This will update the second char of the string.
    c_value.get_data() -> setChar(1,'E');

    // here the counter is again 1
    // getting the data of c_value and calling the print function (this will print the value of the string_value object)
    c_value.get_data()->print(); // printing the counter of the c_value object
    c_value.print();
};