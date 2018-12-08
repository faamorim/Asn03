//
// Created by HP User on 12/7/2018.
//

#include "intcontainer.hpp"

Heap<int> IntContainer::heap = Heap<int>{};
//not deleted stuff
IntContainer& IntContainer::get_instance(){
    static IntContainer instance;
    return instance;
}
void IntContainer::push(int val){
    heap.push(val);
}

int IntContainer::pop(){
    return heap.pop();
}

unsigned long long int IntContainer::size(){
    return heap.size();
}

bool IntContainer::is_empty(){
    return heap.is_empty();
}

void IntContainer::clear(){
    heap.clear();
}