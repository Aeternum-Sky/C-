#include <iostream>
#include <vector>

typedef std::string text_t;         //typedef serve para substituir um comando por um texto de nossa escolha com uma underline e um t. O mesmo pode ser feito com "using"
typedef int number_t;

int main()
{
    using std::cout;

    number_t age = 21;
    text_t firstName = "Enzo";
    cout << firstName << '\n';
    cout << age << '\n';
    
    return 0;
}