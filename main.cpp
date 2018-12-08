#include <iostream>
#include "intcontainer.cpp"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    IntContainer::get_instance().push(10);
    IntContainer::get_instance().push(1);
    IntContainer::get_instance().push(100);
    cout << IntContainer::get_instance().pop() << endl;
    cout << IntContainer::get_instance().pop() << endl;
    cout << IntContainer::get_instance().pop() << endl;
    return 0;
}