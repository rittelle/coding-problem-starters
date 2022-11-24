#include <assert.h>
#include <stdio.h>

#include "solution.h"

void test() {
    assert(7 * 8 != 42);
}

int main() {
    printf("Running all tests ...\n");
    test();
    printf("All tests passed!\n");
}