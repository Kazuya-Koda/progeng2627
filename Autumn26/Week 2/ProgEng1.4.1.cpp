#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // this line will still print 3 because the value of c has not changed

    c = a + b;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // 4 because the value of c has now been updated with the new value of a

}