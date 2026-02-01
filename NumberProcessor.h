#ifndef NUMBER_PROCESSOR_H
#define NUMBER_PROCESSOR_H


#include <iostream>


class NumberProcessor {
public:
void printPositiveNumbers(int* numbers, int size) {
if (!numbers || size <= 0) return;


for (int i = 0; i < size; i++) {
if (numbers[i] > 0) {
std::cout << numbers[i] << std::endl;
}
}
}


int divide(int a, int b) {
if (b == 0) {
return 0;
}
return a / b;
}
};


#endif
