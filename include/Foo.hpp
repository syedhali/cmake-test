//
//  Foo.hpp
//  NinjaSampleLib
//
//  Created by Syed Haris Ali on 10/31/16.
//  Copyright © 2016 Syed Haris Ali. All rights reserved.
//

#ifndef Foo_hpp
#define Foo_hpp

#include <stdio.h>

namespace ninja_sample {
    class Foo {
    private:
        int mA = -1;
        int mB = -2;
        
    public:
        Foo() {}
        ~Foo() {}
        
        int getA();
        int getB();
        void setA(int a);
        void setB(int b);
        void print();
    };
}

#endif /* Foo_hpp */
