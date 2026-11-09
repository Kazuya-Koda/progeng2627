//leap year function plus testing
#include <iostream>
// we can define a function that returns a bool
bool leap_year(int year){
    bool ly=false;
    if ((year%4==0&&year%100!=0)||year%400==0)
    {
        ly=true;
    }
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){
    //For example, 1600 and 2000 were leap years, but 1700, 1800 and 1900 were not.
    //Similarly, 2100, 2200, 2300, 2500, 2600, 2700, 2900 and 3000 will not be leap years,
    //but 2400 and 2800 will be.
    int input_year;
    std::cout << (leap_year(1600)==true) << std::endl;
    std::cout << (leap_year(2000)==true) << std::endl;
    std::cout << (leap_year(1700)==false) << std::endl;
    std::cout << (leap_year(1800)==false) << std::endl;
    std::cout << (leap_year(1900)==false) << std::endl;
    std::cout << (leap_year(2100)==false) << std::endl;
    std::cout << (leap_year(2200)==false) << std::endl;
    std::cout << (leap_year(2300)==false) << std::endl;
    std::cout << (leap_year(2500)==false) << std::endl;
    std::cout << (leap_year(2600)==false) << std::endl;
    std::cout << (leap_year(2700)==false) << std::endl;
    std::cout << (leap_year(2900)==false) << std::endl;
    std::cout << (leap_year(3000)==false) << std::endl;
    std::cout << (leap_year(2400)==true) << std::endl;
    std::cout << (leap_year(2800)==true) << std::endl;


    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool
    // can be used directly in the condition
    // of an if statement

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}
