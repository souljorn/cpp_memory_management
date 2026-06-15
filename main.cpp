#include <iostream>
#include <memory>
#include <cinttypes>


template <class T> void print_pointer_value(T *p) {
    if (p) std::cout << *p << std::endl;
}
template <class T> void print_pointer_address(T *p) {
    if (p) std::cout << p << std::endl;
}
template <class T> void print_type_size(T *p) {
    if (p) std::cout << sizeof(T) << " bytes" << std::endl;
}
template <class T> void print_pointer_size(T *p) {
    if (p) std::cout << sizeof(p) << " bytes" << std::endl;
}
std::unique_ptr<int> make_one( const int &arg ) {
    return std::make_unique<int>(arg);
}
std::unique_ptr<int64_t> make_one_six( const int &arg ) {
    return std::make_unique<int64_t>(arg);
}
std::unique_ptr<int16_t> make_one_eight( const int16_t &arg ) {
    return std::make_unique<int16_t>(arg);
}

int main() {
    auto p = make_one(12);
    auto p2 = make_one_six(16);
    auto p3 = make_one_eight(256);

    print_pointer_value(p.get());
    print_pointer_address(p.get());
    print_type_size(p.get());
    print_pointer_size(p.get());

    print_pointer_value(p2.get());
    print_pointer_address(p2.get());
    print_type_size(p2.get());
    print_pointer_size(p2.get());

    print_pointer_value(p3.get());
    print_pointer_address(p3.get());
    print_type_size(p3.get());
    print_pointer_size(p3.get());
    return 0;
}