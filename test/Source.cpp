
#include <iostream>
#include <string>
#include<cmath>

int main() {
    std::string i = "12345675";
   int chislo = atoi(i.c_str()); // ������� �� ������ � ����� �����
   chislo +=5 ; 
   i = std::to_string(chislo); // �� ����� � ������

    std::cout << i;

    std::cin.get();
    std::cin.get();
    return 0;
}