#include <iostream>

int main()
{
    const double PI = 3.14159; //const faz o valor de uma variável ser constante, desde que coloquemos ela toda em maiúsculo.
    const int LIGHT_SPEED = 299792458;
    const int HEIGHT = 1080;
    const int WIDHT = 1920;

    std::cout << PI << '\n';
    std::cout << LIGHT_SPEED << '\n';
    std::cout << WIDHT << '\n';
    std::cout << HEIGHT << '\n';

    return 0;
}