
#include <iostream>
#include <string>
#include<cmath>

int main() {
    std::string i = "12345675";
   int chislo = atoi(i.c_str()); // переаод из строки в целое число
   chislo +=5 ; 
   i = std::to_string(chislo); // из числа в строку

    std::cout << i;

    std::cin.get();
    std::cin.get();
    return 0;
}