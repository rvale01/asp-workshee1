#include "data.hpp"
#include "RefCount.hpp"

int main() {
    my_string2 * string_value = new my_string2("Hello world");

    RefCount<my_string2> c_value(string_value);
    c_value.get_data()->print();
    c_value.print();

    {
        auto t = c_value;
        c_value.get_data()->print();
        c_value.print();
        t.get_data()->print();
        t.print();
        std::cout << c_value.get_data() -> getChar(1) << std::endl;
        c_value.get_data()->print();
        c_value.print();
        t.get_data()->print();
        t.print();
    };
    c_value.get_data() -> setChar(1,'E');
    c_value.get_data()->print();
    c_value.print();
};