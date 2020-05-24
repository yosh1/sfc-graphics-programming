//
//  main.cpp
//  03-funcSample
//
//  Created by Yoshihisa Kaino on 2020/05/24.
//  Copyright © 2020 yoshi1125hisa. All rights reserved.
//

#include <iostream>

void sayHello() {
    std::cout << "Hello\n";
}

void sayGoodbye() {
    std::cout << "GoodBye\n";
}

void sayNum(int n) {
    std::cout << n << "\n";
}

void repertHello(int m) {
    for (int i=0; i < m; i++) {
        std::cout << "Hello! \n";
    }
}

int returnInt(int a) {
    return a;
}

int main(int argc, const char * argv[]) {
//    sayHello();
//    sayGoodbye();
//    sayNum(5);
//    repertHello(5);
    returnInt(5);
    return 0;
}
