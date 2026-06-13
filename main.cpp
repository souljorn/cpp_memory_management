#include <iostream>
#include <memory>

template <class T> void print_pointer_value(T *p) {
    if (p) std::cout << *p << std::endl;
}
template <class T> void print_pointer_address(T *p) {
    if (p) std::cout << &p << std::endl;
}
std::unique_ptr<int> make_one( const int &arg ) {
    return std::make_unique<int>(arg);
}

int main() {
    auto p = make_one(12);
    print_pointer_value(p.get());
    print_pointer_address(p.get());
    return 0;
}