//
// Created by HP User on 12/7/2018.
//

#ifndef ASN03_INTCONTAINER_HPP
#define ASN03_INTCONTAINER_HPP
#include "heap.cpp"

class IntContainer {
private:
    static Heap<int> heap;
    IntContainer(){}
public:
    //delete stuff
    IntContainer(IntContainer const&) = delete;
    void operator=(IntContainer const&) = delete;

    //not deleted stuff
    static IntContainer& get_instance();
    void push(int val);
    int pop();
    unsigned long long int size();
    bool is_empty();
    void clear();
};


#endif //ASN03_INTCONTAINER_HPP
