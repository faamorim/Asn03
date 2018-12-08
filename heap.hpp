//
// Created by HP User on 12/7/2018.
//

#ifndef ASN03_HEAP_HPP
#define ASN03_HEAP_HPP
#include <set>
#include <queue>

using namespace std;


template<typename T>
class Heap {
private:
    priority_queue<T> heap;

    void heapify(){
        //I just won't do anything because its probably already priority queue stuff
    }
public:
    template<template<typename ...> class CONTAINER, typename ... VALS>
    explicit Heap(CONTAINER<T, VALS...> &container = 0){
        if(container != nullptr) {
            for(auto it = container.begin(); it != container.end(); ++it){
                heap.push(*it);
            }
        }
    }
    explicit Heap(){

    }
    void push(T val){
        heap.push(val);
        heapify();
    }

    T pop(){
        T val = heap.top();
        heap.pop();
        heapify();
        return val;
    }

    unsigned long long int size(){
        return heap.size();
    }

    bool is_empty(){
        return heap.empty();
    }

    void clear(){
        heap = priority_queue<T>{};
    }
};


#endif //ASN03_HEAP_HPP
