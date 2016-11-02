//
//  Foo.cpp
//  NinjaSampleLib
//
//  Created by Syed Haris Ali on 10/31/16.
//  Copyright © 2016 Syed Haris Ali. All rights reserved.
//

#include <Foo.hpp>

namespace ninja_sample {
    int Foo::getA() {
        return mA;
    }
    
    int Foo::getB() {
        return mB;
    }
    
    void Foo::setA(int a) {
        mA = a;
    }
    
    void Foo::setB(int b) {
        mB = b;
    }
    
    void Foo::print() {
        printf("Foo contains (a = %i) and (b = %i)\n",
               getA(),
               getB());
    }
}
