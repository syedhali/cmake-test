//
//  main.cpp
//  NinjaSampleLib
//
//  Created by Syed Haris Ali on 10/31/16.
//  Copyright © 2016 Syed Haris Ali. All rights reserved.
//

#include <iostream>

#include <Foo.hpp>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    ninja_sample::Foo f;
    f.setA(5);
    f.setB(10);
    f.print();
    
    return 0;
}
