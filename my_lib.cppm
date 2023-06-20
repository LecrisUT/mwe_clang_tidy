module;

#include <iostream>

export module my_lib;

export class A{
public:
    void print(){
        std::cout << "Hello world!\n";
    }
};
