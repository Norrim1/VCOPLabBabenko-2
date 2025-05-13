#include "first.h"

First::First(int fx) {
    x = fx;
}

int First::calc() {
    return x;
}

void First::print(std::string text) {
    std::cout << text << calc() << std::endl;
}
