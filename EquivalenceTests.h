// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        positive_and_negative_int();
        zeros();
        big_positive();
        big_negative();
        one_and_negative_one();
        
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }
    // Add other test functions here
    void positive_and_negative_int(){
        Addition addition;
        if (addition.add(3, -2) != 1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void zeros(){
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void big_positive(){
        Addition addition;
        if (addition.add(1000, 1000) != 2000) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    void big_negative(){
        Addition addition;
        if (addition.add(-1000, -1000) != -2000) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void one_and_negative_one(){
        Addition addition;
        if (addition.add(-1, 1) != 0) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }
};