#include <iostream>

namespace primeiro
{
    int x = 1;
}

namespace segundo
{
    int x = 2;
};

int main()
{
    //dentro da função int main(), se não colocarmos "using namespace variável", temos que específicar qual variável usaremos, se será de alguma namespace declarado antes da int main() ou a variável que declararmos dentro da int main(), do contrário, no output será printado a variável declarada apenas no int main()
    
    using std::cout;        //using std::cout faz com que toda vez que formos usar cout, não precisemos tipificar com std::cout
    using std::string;      //using std::string faz com que em toda string não precisemos tipificar com std::string
    int x = 0;
    cout << primeiro::x << '\n';           
    cout << segundo::x << '\n';
    cout << x << '\n';
    return 0;
}
//Conclusão:: namepsace é usado para evitar erros no compilador para uma variável com um mesmo nome, útil para projetos grandes