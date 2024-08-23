#include <iostream>

class TimeCalculator{
    public:
        int secFormat (int sec, int min, int hour){
            int sumSec {0};
            sumSec += sec;
            min += hour*60;
            sumSec += min*60;
            return sumSec;
        }
        void hmsFormat (int sumSec){
            int min;
            min = sumSec/60;
            int sec;
            sec = sumSec%60;
            int hour;
            hour = min/60;
            min = min%60;
            setMin(min);
            setSec(sec);
            setHour(hour);
        }
        void printTime(){
            std::cout << this->getHour()<< " Horas " << this->getMin() << " Minutos " << this->getSec() << " Segundos\n";
        }
        void sum(){
            int a;
            int b;
            int sec;
            int min;
            int hour;
            std::cout << "Digite os horários que deseja somar (um por linha separando horas, minutos e segundos por espaço):\n";
            std::cin >> hour >> min >> sec;
            if(min >= 60 || min < 0 || hour < 0 || sec >= 60 || sec < 0){
                std::cout << "Erro: horário inválido";
            } else{
                a = secFormat(sec, min, hour);
            }
            std::cin >> hour >> min >> sec;
            if(min >= 60 || min < 0 || hour < 0 || sec >= 60 || sec < 0){
                std::cout << "Erro: horário inválido";
            } else{
                b = secFormat(sec, min, hour);
                int result;
                result = a + b;
                hmsFormat(result);
                std::cout << "A soma dos horários é: ";
                printTime();
            }
        }
        void sub(){
            int a;
            int b;
            int sec;
            int min;
            int hour;
            std::cout << "Digite os horários que deseja subtrair (um por linha separando horas, minutos e segundos por espaço):\n";
            std::cin >> hour >> min >> sec;
            if(min >= 60 || min < 0 || hour < 0 || sec >= 60 || sec < 0){
                std::cout << "Erro: horário inválido";
            } else{
                a = secFormat(sec, min, hour);
            }
            std::cin >> hour >> min >> sec;
            if(min >= 60 || min < 0 || hour < 0 || sec >= 60 || sec < 0){
                std::cout << "Erro: horário inválido";
            } else{
                b = secFormat(sec, min, hour);
            }
            int result;
            result = a - b;
            if(result < 0){
                std::cout << "A subtração dos tempos resultou em 0";
            } else {
                hmsFormat(result);
                std::cout << "A subtração dos horários é: ";
                printTime();
                std::cout << "\n";
            }        
        }
        void multiply(){
            int a;
            int b;
            std::cout << "Digite o horário que deseja multiplicar (separando horas, minutos e segundos por espaço):\n";
            std::cin >> hour >> min >> sec;
            if(min >= 60 || min < 0 || hour < 0 || sec >= 60 || sec < 0){
                std::cout << "Erro: horário inválido";
            } else{
                a = secFormat(sec, min, hour);
                std::cout << "Agora digite por quantas vezes deseja multiplicar este horário: \n";
                std::cin >> b;
                int result;
                result = a * b;
                hmsFormat(result);
                std::cout << "A soma dos horários é: ";
                printTime();
                std::cout << "\n";
            }
             
        }
        void isEqual(){
            int a;
            int b;
            int sec;
            int min;
            int hour;
            std::cout << "Digite a quantidade de horas, minutos e/ou segundos que deseja comparar se são igual (um por linha separando horas, minutos e segundos por espaço)\n";
            std::cout << "OBS: Nesta comparação você pode digitar no formato que deseja contanto que siga a ordem de horas, minutos e segundos, respectivamente\n";
            std::cout << "Exemplo: \n18 132 256\ne\n0 78 65\n\n";
            std::cin >> hour >> min >> sec;
            a = secFormat(sec, min, hour);
            std::cin >> hour >> min >> sec;
            b = secFormat(sec, min, hour);
            if(a == b){
                std::cout << "Os dois tempos fornecidos são iguais\n";
            } else {
                std::cout << "Os dois tempos fornecidos NÃO são iguais\n";
            }
            std::cout << "Tempos formatados fornecido pelo usuário:\n";
            hmsFormat(a);
            printTime();
            hmsFormat(b);
            printTime();
        }
        
        void isBigger(){
            int a;
            int b;
            int sec;
            int min;
            int hour;
            std::cout << "Digite a quantidade de horas, minutos e/ou segundos que deseja verificar se é maior ou menor que outra (um por linha separando horas, minutos e segundos por espaço)\n";
            std::cout << "OBS: Nesta comparação você pode digitar no formato que deseja contanto que siga a ordem de horas, minutos e segundos, respectivamente\n";
            std::cout << "Exemplo: \n18 132 256\ne\n0 78 65\n\n";
            std::cin >> hour >> min >> sec;
            a = secFormat(sec, min, hour);
            std::cin >> hour >> min >> sec;
            b = secFormat(sec, min, hour);
            if(a > b){
                std::cout << "O primeiro tempo fornecido (" << a << " segundos) é maior que o segundo (" << b << " segundos)\n";
            } else {
                std::cout << "O segundo tempo fornecido (" << b << " segundos) é maior que o primeiro (" << a << " segundos)\n";
            }
            std::cout << "Tempos formatados fornecido pelo usuário:\n";
            hmsFormat(a);
            printTime();
            hmsFormat(b);
            printTime();
            
        }
        int getSec(){
            return this->sec;
        }
        int setSec(int sec){
            return this->sec = sec;
        }
        int getMin(){
            return this->min;
        }
        int setMin(int min){
            return this->min = min;
        }
        int getHour(){
            return this->hour;
        }
        int setHour(int hour){
            return this->hour = hour;
        }
    private:
        int sec;
        int min;
        int hour;
};
