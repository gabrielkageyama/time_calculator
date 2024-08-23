// Integrantes: Gabriel Guerra e Murilo Finger

#include <string>
#include "operations.cpp"
#include <numeric> 

int main(){
    TimeCalculator calc;
    std::cout << "------------- CALCULADORA DE TEMPO -------------\n";
    std::cout << "Para iniciar selecione a operação que deseja realizar, após selecionar, basta seguir os passos indicados pelo sistema.\n" << "(Digite o número da operação)\n";
    std::cout << "Insira qualquer caracter para continuar\n";
    std::string a;
    std::cin >> a;
    while (true)
    {
        std::cout << "\n\n\n1. Soma\n\n2. Subtração\n\n3. Multiplicação\n\n4. Comparação de igualdade\n\n5. Comparação de grandeza\n\n9. Desligar calculadora\n\n\n";
        int userCommand;
        std::cin >> userCommand;
        if (userCommand == 1){
            calc.sum();
            std::cout << "Mostrando novamente as opções...\n\n";
        }else if (userCommand == 2){
            calc.sub();
            std::cout << "Mostrando novamente as opções...\n\n";
        }else if (userCommand == 3){
            calc.multiply();
            std::cout << "Mostrando novamente as opções...\n\n";
        }else if (userCommand == 4){
            calc.isEqual();
            std::cout << "Mostrando novamente as opções...\n\n";
        }else if (userCommand == 5){
            calc.isBigger();
            std::cout << "Mostrando novamente as opções...\n\n";
        }else if (userCommand == 9){
            break;
        }else{
            std::cout << "Opção inválida!\n" << "Mostrando novamente as opções...\n\n";
        }  
    }
    std::cout << "Desligando Calculadora...\n"; 
}
