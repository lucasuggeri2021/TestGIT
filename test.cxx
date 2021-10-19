/*
 * Author: Lucas Uggeri 2021
 */
#include <iostream>

void function_test(int &cont)
{
    std::cout << "[" << cont++ << "] Test!!" << std::endl;
}

int main()
{
    int cont = 0;
    while (true)
        function_test(cont);
    return 0;
}