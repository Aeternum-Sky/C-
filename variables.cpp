#include <iostream>

int main()
{
    //Para declarar uma váriavel é necessário primeiro tipificar ela, com int, double, bool
    int x; //declaração de uma variável
    x = 5; //assossiação à um valor
    int y = 6;
    int sum = x + y;
    double price = 11.99;
    char inicial = 'E';
    bool confiança = true;
    std::string frase = "O rato roeu a roupa do rei de roma";

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << price << '\n';
    std::cout << inicial << '\n';
    std::cout << confiança << '\n';
    std::cout << frase << '\n';

    /*
    int = integer (número inteiro)
    double = número com casas decimais
    char = variável para caractére único
    bool = boolean, onde os valores são somente true ou false
    string = representa uma sequência de texto
    */

    return 0;
}