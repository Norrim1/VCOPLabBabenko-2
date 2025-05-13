#include "third.h"

Third::Third(int fx) : Second(fx) {}

int Third::calc() {
    return x * x * x;
}
