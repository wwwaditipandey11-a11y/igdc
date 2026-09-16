#include <stdio.h>
#include <assert.h>
#include "utils.h"

void test_add(void) {
    assert(add(2, 3) == 5);
    assert(add(0, 0) == 0);
    assert(add(-1, 1) == 0);
    printf("✓ test_add passed\n");
}

void test_subtract(void) {
    assert(subtract(5, 3) == 2);
    assert(subtract(0, 0) == 0);
    assert(subtract(-1, 1) == -2);
    printf("✓ test_subtract passed\n");
}

void test_multiply(void) {
    assert(multiply(2, 3) == 6);
    assert(multiply(0, 5) == 0);
    assert(multiply(-2, 3) == -6);
    printf("✓ test_multiply passed\n");
}

void test_divide(void) {
    assert(divide(6.0f, 2.0f) == 3.0f);
    assert(divide(0.0f, 5.0f) == 0.0f);
    printf("✓ test_divide passed\n");
}

int main(void) {
    printf("Running test suite...\n\n");
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    printf("\nAll tests passed!\n");
    return 0;
}
